


#include <stdio.h>
#include <string.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int N;
        scanf("%d", &N);
        char s[N];
        scanf("%s", s);
        int consonants = 0;
        for (int i = 0; i < N; i++) {
            if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u') {
                consonants++;
                if (consonants >= 4) {
                    printf("NO\n");
                    break;
                }
            } else {
                consonants = 0;
            }
        }
        if (consonants < 4) {
            printf("YES\n");
        }
    }
    return 0;
}

