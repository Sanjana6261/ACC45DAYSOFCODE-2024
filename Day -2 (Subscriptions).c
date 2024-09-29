
#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);
        int x = (N + 5) / 6 *X ;
        printf("%d\n", x);
        
    }
    return 0;
}