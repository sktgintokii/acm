#include <stdio.h>

const int STR_LEN = 10;

int main() {
    int tt = 0;
    int x = 0;

    scanf("%d", &tt);
    for (int i = 0; i < tt; i++){
        char s[STR_LEN];
        scanf("%s", s);
        
        if (s[1] == '+') x++;
        if (s[1] == '-') x--;
    }

    printf("%d\n", x);
}
