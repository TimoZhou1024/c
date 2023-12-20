
#include <stdio.h>


int main() {
    int n, q;
    scanf("%d %d",&n,&q);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int l[q], r[q], d[q];
    long sum[q] = {0};

    for (int i = 0; i < q; i++) {
        scanf("%d%d%d", &l[i], &r[i], &d[i]);
        l[i]--; // 转换为0-based索引
        r[i]--;

        int numElements = (r[i] - l[i]) / d[i] + 1;
        sum[i] = 0;

        for (int j = 0; j < numElements; j++) {
            sum[i] += a[l[i] + j * d[i]];
        }
        
    }
    for(int i=0;i<q;i++){
        printf("%ld\n",sum[i]);
    }

    return 0;
}
