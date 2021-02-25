#include <stdio.h>
void Reverse (int *ans, int l , int r) {
    int temp, m = (r - l + 1) / 2;
    for (int i = 0; i < m; i++) {
        temp = ans[l + i];
        ans[l + i] = ans[r - i];
        ans[r - i] = temp;
    }
}

int main() {
    int n, m, ans[105];
    scanf("%d %d", &n, &m);
    m = m % n;
    for (int i = 0; i < n; i++) {
        scanf("%d", &ans[i]);
    }
    Reverse(ans, 0, n - m - 1);
    Reverse(ans, n - m, n - 1);
    Reverse(ans, 0, n - 1);
    for (int i = 0; i < n; i++) {
        if (i != 0)
            printf(" %d", ans[i]);
        else
            printf("%d", ans[i]);
    }
 
    return 0;
}