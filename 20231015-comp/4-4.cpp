#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int l[q], r[q], d[q];
    long long prefix_sum[n];
    prefix_sum[0] = a[0];

    for (int i = 1; i < n; i++) {
        prefix_sum[i] = prefix_sum[i - 1] + a[i];
    }

    long sum[q];
    for (int i = 0; i < q; i++) {
        scanf("%d%d%d", &l[i], &r[i], &d[i]);
        l[i]--;  // 转换为0-based索引
        r[i]--;

        long long query_sum = prefix_sum[r[i]];
        if (l[i] > 0) {
            query_sum -= prefix_sum[l[i] - 1];
        }

        sum[i] = query_sum / d[i];
        cout << sum[i] << endl;
    }

    return 0;
}
