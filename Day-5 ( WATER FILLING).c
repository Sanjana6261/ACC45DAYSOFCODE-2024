#include<stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while(T--) {
        int B1, B2, B3;
        scanf("%d %d %d", &B1, &B2, &B3);
        if((B1 == 0 && B2 == 0) || (B2 == 0 && B3 == 0) || (B1 == 0 && B3 == 0))
            printf("Water filling time\n");
        else
            printf("Not Now\n");
    }
    return 0;
}
