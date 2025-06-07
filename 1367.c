//sem struct

#include <stdio.h>
#include <string.h>

int main() {
    while (1) {    
        int S = 0;
        int P = 0;

        int correctProblems[26];
        for (int i = 0; i < 26; i++) correctProblems[i] = 0;
        int incorrectProblems[26];
        for (int i = 0; i < 26; i++) incorrectProblems[i] = 0;

        int N;
        scanf("%d", &N);
        if (N == 0) break;

        int T;
        char letter;

        for (int i = 0; i < N; i++) {
            char judgement[20];

            scanf(" %c %d %s", &letter, &T, judgement);

            if (strcmp(judgement, "correct") == 0) {
                if (correctProblems[letter - 65] == 0) {
                    S++;
                    P += T;
                    P += 20 * incorrectProblems[letter - 65];
                    correctProblems[letter - 65]++;
                }
            }

            else if (strcmp(judgement, "incorrect") == 0) {
                incorrectProblems[letter - 65]++;
            }
        }
        printf("%d %d\n", S, P);
    }

    return 0;
}
