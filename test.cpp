#include <stdio.h>
#include <math.h>
#include <iostream>
using namespace std;

int isPalindrome(int x) {
    // 负数不是回文数
    int isNegative = x >> 31;
    
    // 处理和反转数字
    int original = x;
    int reversed = 0;

    // 提取位并反转
    reversed = (x & 0xF) << 28; x >>= 4;
    reversed |= (x & 0xF) << 24; x >>= 4;
    reversed |= (x & 0xF) << 20; x >>= 4;
    reversed |= (x & 0xF) << 16; x >>= 4;
    reversed |= (x & 0xF) << 12; x >>= 4;
    reversed |= (x & 0xF) << 8;  x >>= 4;
    reversed |= (x & 0xF) << 4;  x >>= 4;
    reversed |= (x & 0xF);       x >>= 4;

    // 结果为1（true）当且仅当x为正数且原始数字与反转后的数字相等
    int isEqual = !(reversed ^ original); // x == original
    int result = !isNegative & isEqual;   // 确保x为非负且相等

    return result;
}

int specialBits(void) {
    /* 
    * The bit pattern 0xffca3fff can be divided into 4 parts that will be combined using | and <<
    */
    int part1 = 0xD7; 
    int part2 = 0x30; 
    return ~(part1 << 14) | (part2 << 8);
}

int bitXor(int x, int y) {
    return (~x & y) | (x & ~y);
    // return ~(~x & ~y) & ~(x & y);
}

int dividePower2(int x, int n) {
    // return x >> n;
    int mask = (1 << n) + ~0;
    int bias = (x >> 31) & mask;
    return (x + bias) >> n;
}

int isLess(int x, int y) {
    // int signX = x >> 31;
    // int signY = y >> 31;
    // int signDiff = signX & !signY;
    // int sameSign = !(signX ^ signY) & ((x + ~y) >> 31);
    // return signDiff | sameSign;
    return ~((x + 1 + ~y) >> 31)+1;
}

int bang(int x) {
    return ((x | (~x + 1)) >> 31) + 1;
}
int howManyBits(int x) {
    /*
    * use 'binary search' strategy to find the highest bit of x
    */
    int sign = x >> 31;
    x = (sign & ~x) | (~sign & x);  

    int not0 = !!(x >> 16);
    int count = 0;
    count += not0 << 4;
    x = x >> (not0 << 4);

    not0 = !!(x >> 8);
    count += not0 << 3;
    x = x >> (not0 << 3);

    not0 = !!(x >> 4);
    count += not0 << 2;
    x = x >> (not0 << 2);

    not0 = !!(x >> 2);
    count += not0 << 1;
    x = x >> (not0 << 1);

    not0 = !!(x >> 1);
    count += not0;
    x = x >> not0;

    count += x;

    return count + 1;
}

long isPower2(long x) {
    return (!!x) & !(x & (x + ~0L));
}

/* 
 * floatFloat2Int - Return bit-level equivalent of expression (int) f
 *   for floating point argument f.
 *   Argument is passed as unsigned int, but
 *   it is to be interpreted as the bit-level representation of a
 *   single-precision floating point value.
 *   Anything out of range (including NaN and infinity) should return
 *   0x80000000u.
 *   Legal ops: Any integer/unsigned operations incl. ||, &&. also if, while
 *   Max ops: 30
 *   Rating: 4
 */
int floatFloat2Int(unsigned uf) {
    /*
    * seperate uf into 3 parts: sign, exp, frac
    * judge through exp whether it is NaN or infinity, then calculate the actual exp
    * give the result through shifting according to actual exp, and pay attention to special cases(exp > 31, exp < 0)
    * sign should also be considered
    */
    
    unsigned sign = uf & 0x80000000;
    int exp = (uf >> 23) & 0xFF;
    unsigned frac = uf & 0x007FFFFF;
    
    if (exp == 0xFF){
        return 0x80000000u;
    }

    exp = exp - 127;
    if (exp > 31){
        return 0x80000000u;
    }
    if (exp < 0){
        return 0;
    }

    frac = frac | 0x00800000u;

    exp = 23 - exp;
    if (exp){
        frac = frac >> exp;
    }
    else{
        frac = frac << (-exp);
    }
    if(sign == 0){
        return(frac);
    }
    return(-frac);
}
// int floatFloat2Int(unsigned uf) {
//     unsigned sign = uf & 0x80000000;
//     int exp = (uf >> 23) & 0xFF;
//     unsigned frac = uf & 0x007FFFFF;
//     int bias = 127;
    
//     if (exp == 0xFF) return 0x80000000u;

//     exp -= bias;
//     if (exp < 0) return 0;
//     if (exp > 30) return 0x80000000u;
//     frac |= 0x00800000;
//     if (exp > 23) frac <<= (exp - 23);
//     else frac >>= (23 - exp);

//     if (sign) frac = -frac;

//     return frac;
// }

int main(){
    printf("%d", floatFloat2Int(0));
    printf("\n");
    printf("%d", 0xffca3fff);
    printf("\n");
    printf("%d", 3|2);
    return 0;
}



unsigned floatScale2(unsigned uf) {
    /*
    * seperate uf into 3 parts: sign, exp, frac
    * judge through exp whether it is NaN, then judge through exp whether it is denormalized number or zero, then implement the according operation
    * notice: 
    * 1. frac should not overflow into the exp
    * 2. if incrementing causes it to become infinity, frac should be set to zero to make it proper
    */
    unsigned sign = uf & 0x80000000;
    unsigned exp = uf & 0x7F800000;
    unsigned frac = uf & 0x007FFFFF;

    if (exp == 0x7F800000) 
    {
        return uf;
    } 
    else if (exp == 0) 
    {
        frac = frac << 1;
        frac = frac & 0x007FFFFF;
        return sign|frac;
    } 
    else 
    {
        exp += 0x00800000;
        if (exp == 0x7F800000) 
        {
            frac = 0; 
        }
        return sign|exp|frac;
    }
    
}