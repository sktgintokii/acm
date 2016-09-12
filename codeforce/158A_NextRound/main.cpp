#include <stdio.h>
#include <string.h>

const int range = 101;

int getFinalCount(int counts[range], int k) {
    int finalCount = 0;
    
    for (int i = range - 1; i > 0 && finalCount < k; i--) {
        finalCount += counts[i];
    }
    
    return finalCount;
}

int main() {
    int n, k, score, counts[range];
    
    memset(counts, 0, sizeof(counts));

    scanf("%d %d", &n, &k);    
    for (int i = 0; i < n; i++) {
        scanf("%d", &score);
        counts[score]++;
    }

    printf("%d\n", getFinalCount(counts, k));
    return 0;
}
