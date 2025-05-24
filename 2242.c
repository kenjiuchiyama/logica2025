#include <stdio.h>
#include <string.h>

int main() {
    char rir[51], vogais[51];
    int checks = 0;
    int j = 0;
    scanf("%s", rir);
    for (int i = 0; i < strlen(rir); i++) {
        if (rir[i] == 'a' || rir[i] == 'i' || rir[i] == 'u' || rir[i] == 'e' || rir[i] == 'o') {
            vogais[j] = rir[i];
            j++;
        }
    }
    vogais[j] = '\0';
    for (int i = 0; i < strlen(vogais); i++) {
        if (vogais[i] == vogais[strlen(vogais) - 1 - i]) checks++;
    }
    if (checks == strlen(vogais)) printf("S\n");
    else printf("N\n");

    return 0;
}
