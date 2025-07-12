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

int verVOk(int *V) {
    int x = 0;
    //todos sao diferentes sse x = 0
    for (int j1 = 0; j1 < 9 && x == 0; j1++) {
        for (int j2 = 1 + j1; j2 < 9 && x == 0; j2++) {
            if (V[j1] != 0 && V[j2] != 0) {
                if (V[j1] == V[j2]) x++;
            }
        }
    }
    if (x != 0) x = -1;
    return x;
}

int verNum(int M[9][9], int l, int c, int n) {
    int temp = M[l][c];
    M[l][c] = n;
    int V[9], x;
    //linha
    int linhaOk = -1;
    for (int j = 0; j < 9; j++) V[j] = M[l][j];
    if (verVOk(V) == 0) linhaOk = 0;
    for (int j = 0; j < 9; j++) V[j] = 0;
    //coluna
    int colunaOk = -1;
    if (linhaOk == 0) {
            for (int i = 0; i < 9; i++) V[i] = M[i][c];
            if (verVOk(V) == 0) colunaOk = 0;
            for (int i = 0; i < 9; i++) V[i] = 0;
    }
    //regiao
    int regiaoOk = -1;
    int h;
    if (l / 3 == 0 && c / 3 == 0) h = 0;
    else if (l / 3 == 0 && c / 3 == 1) h = 1;
    else if (l / 3 == 0 && c / 3 == 2) h = 2;
    else if (l / 3 == 1 && c / 3 == 0) h = 3;
    else if (l / 3 == 1 && c / 3 == 1) h = 4;
    else if (l / 3 == 1 && c / 3 == 2) h = 5;
    else if (l / 3 == 2 && c / 3 == 0) h = 6;
    else if (l / 3 == 2 && c / 3 == 1) h = 7;
    else if (l / 3 == 2 && c / 3 == 2) h = 8;
    if (colunaOk == 0) {
        int k = 0;
        for (int i = 3 * (h / 3); i < 3 + 3 * (h / 3); i++) {
            for (int j = 3 * (h % 3); j < 3 + 3 * (h % 3); j++) {
                V[k] = M[i][j];
                k++;
            }
        }
        if (verVOk(V) == 0) regiaoOk = 0;
        for (k = 0; k < 9; k++) V[k] = 0;
    }
    M[l][c] = temp;
    if (linhaOk == 0 && colunaOk == 0 && regiaoOk == 0) x = 0;
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

int solve(int M[9][9], int L[81], int C[81], int p, int k) {
    if (p == k) return 1;
    int l = L[p];
    int c = C[p];
    for (int n = 1; n < 10; n++) {
        if (verNum(M, l, c, n) == 0) {
            M[l][c] = n;
            if (solve(M, L, C, p + 1, k)) return 1;
            else M[l][c] = 0;
        }
    }
    return 0;
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

    int M[9][9], L[81], C[81];
    int k = 0;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            fscanf(input, "%d", &M[i][j]);
            if (M[i][j] == 0) {
                L[k] = i;
                C[k] = j;
                k++;
            }
        }
    }
    fclose(input);

    #ifdef _WIN32
        freopen("CONIN$", "r", stdin);
    #else
        freopen("/dev/tty", "r", stdin);
    #endif
    
    int X[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            X[i][j] = 0;
        }
    }
    printM(M);

    if (solve(M, L, C, 0, k)) {
        printM(M);
        if (verSudoku(M) == 0) printf("Sudoku completo!");
        else printf("Erro");
    }
    
    return 0;
}
