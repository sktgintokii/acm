#include <stdio.h>

int main() {
    int n, a, b, c, x, ans = 0;
    
    scanf("%d", &n);
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    a %= 2;
    b %= 2;
    c %= 2;
    
    if (a == b && c != a) ans = 3;
    if (a != b) ans = c == a ? 2 : 1;
    for(int i = 3; i < n && ans <= 0; i++) {
        scanf("%d", &x);
        x %= 2;
        if (x != a) ans = i + 1;
    }   

    printf("%d\n", ans);
    return 0;
}
