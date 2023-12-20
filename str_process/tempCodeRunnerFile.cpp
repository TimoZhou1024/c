#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (int i = 1; i <= n-1; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            if (i == n || j == 1 || j == 2 * i - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(int i=1;i<=2*n-3;i=i+2){
        printf("* ");
    }
    printf("*");

    return 0;
}
