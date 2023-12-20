    /*
        周思远 23307130063
    */
    #include <stdio.h>
    #include <math.h>

    float func(float x){
        return x*x*x-x*x-1;
    }
    int main(){
        float a=0.0,b=3.0,x;
        x=(a+b)/2.0;
        while(fabs(b-a)>=0.00001){
            x=(a+b)/2.0;
            if(func(x)<0) a=x;
            else b=x;
        }
        printf("%.5f",x);
        return 0;
    }