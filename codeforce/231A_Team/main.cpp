#include <stdio.h>

int main() {
    int tt;
    int p = 0;

    scanf("%d", &tt);
    for (int i = 0; i < tt; i++) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        if (a + b + c >= 2) p++;
    }

    printf("%d\n", p);
}
