#include <stdio.h>
#include <string.h>

int verV(int *V) {
    int x = 0;
    //todos sao diferentes sse x = 0
    for (int j1 = 0; j1 < 9 && x == 0; j1++) {
        for (int j2 = 1 + j1; j2 < 9 && x == 0; j2++) {
            if (V[j1] != 0 && V[j2] != 0) {
                if (V[j1] == V[j2]) x++;
            }
            else x++;
        }
    }
    if (x != 0) x = -1;
    return x;
}

int verSudoku(int M[9][9]) {
    int V[9], x;
    //retorno das linhas
    int linhasCorretas = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) V[j] = M[i][j];
        if (verV(V) == 0) linhasCorretas++;
        for (int j = 0; j < 9; j++) V[j] = 0;
    }
    //retorno das colunas
    int colunasCorretas = 0;
    if (linhasCorretas == 9) {
        for (int j = 0; j < 9; j++) {
            for (int i = 0; i < 9; i++) V[i] = M[i][j];
            if (verV(V) == 0) colunasCorretas++;
            for (int i = 0; i < 9; i++) V[i] = 0;
        }
    }
    //retorno das regioes
    int regioesCorretas = 0;
    if (colunasCorretas == 9) {
        for (int h = 0; h < 9; h++) {
            int k = 0;
            for (int i = 3 * (h / 3); i < 3 + 3 * (h / 3); i++) {
                for (int j = 3 * (h % 3); j < 3 + 3 * (h % 3); j++) {
                    V[k] = M[i][j];
                    k++;
                }
            }
            if (verV(V) == 0) regioesCorretas++;
            for (k = 0; k < 9; k++) V[k] = 0;
        }
    }
    if (linhasCorretas == 9 && colunasCorretas == 9 && regioesCorretas == 9) x = 0;
    else x = -1;
    return x;
}

void printM(int M[9][9]) {
    printf("------ SUDOKU ------\n\n");
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            if (M[i][j] != 0) {
                if (j == 0) printf("%d", M[i][j]);
                else printf(" %d", M[i][j]);
            }
            else { 
                if (j == 0) printf("_");
                else printf(" _");
            }
            if (j == 2 || j == 5) printf(" |");
            if (j == 8) printf("\n");
        }
        if (i == 2 || i == 5) printf("------+-------+------\n");
    }
    printf("\n");
}

void add(char *string, int p) {
    if (string[p] == '9') {
        string[p] = '0';
        add(string, p - 1);
    }
    else {
        string[p]++;
    }
}

int main(int argc, char *argv[]) {
    FILE *input = stdin;
    if (argc == 2) {
        input = fopen(argv[1], "r");
        if (!input) {
            perror("Erro ao abrir arquivo");
            return 1;
        }
    }

    int M[9][9];
    int O[9][9];
    int nzero = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            fscanf(input, "%d", &M[i][j]);
            O[i][j] = M[i][j];
            if (M[i][j] == 0) nzero++;
        }
    }
    fclose(input);

    #ifdef _WIN32
        freopen("CONIN$", "r", stdin);
    #else
        freopen("/dev/tty", "r", stdin);
    #endif

    char numerica[82];
    for (int i = 0; i < nzero; i++) {
        numerica[i] = '1';
    }
    numerica[nzero] = '\0';
    
    printM(M);

    while (1) {
        if (verSudoku(M) == 0) {
            printM(M);
            printf("Sudoku completo!");
            break;
        }
        int d = 0;
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {
                if (O[i][j] == 0) {
                    M[i][j] = numerica[d] - 48;
                    d++;
                }
            }
        }
        add(numerica, nzero - 1);
    }
    
    return 0;
}
