#include <stdio.h>

int main() {
    
    int T;
    scanf("%d", &T);
    
    while (T--) {
        
        int Dragon[3], Sloth[3];
        
        for (int i = 0; i < 3; i++) {
            scanf("%d", &Dragon[i]);
        }
        for (int i = 0; i < 3; i++) {
            scanf("%d", &Sloth[i]);
        }
        int Dragon_T = Dragon[0] + Dragon[1] + Dragon[2];
        
        int Sloth_T = Sloth[0] + Sloth[1] + Sloth[2];
        
        if (Dragon_T > Sloth_T) {
            printf("Dragon\n");
        }
        else if (Sloth_T > Dragon_T) {
            printf("Sloth\n");
        } 
        else {
            if (Dragon[0] > Sloth[0]) {
                printf("Dragon\n");
            } else if (Sloth[0] > Dragon[0]) {
                printf("Sloth\n");
            } else {
                
                if (Dragon[1] > Sloth[1]) {
                    printf("Dragon\n");
                } else if (Sloth[1] > Dragon[1]) {
                    printf("Sloth\n");
                } else {
                    printf("Tie\n");
                }
            }
        }
    }
    return 0;
}

