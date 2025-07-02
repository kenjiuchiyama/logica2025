#include <stdio.h>
#include <string.h>

int verV(int *V) {
    int x = 0;
    int y = 0;
    int z = -1;
    //todos sao diferentes sse y = 0
    for (int j1 = 0; j1 < 9 && y == 0; j1++) {
        for (int j2 = 1 + j1; j2 < 9 && y == 0; j2++) {
            if (V[j1] == V[j2]) y++;
        }
    }
    //todos são numeros de 1 a 10 sse x = 9 
    for (int j = 0; j < 9 && y == 0; j++) {
        for (int q = 1; q < 11; q++){
            if (V[j] == q) x++;
        }
    }

    if (x == 9 && y == 0) z = 0;
    return z;
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


int main(int argc, char *argv[]) {
    FILE *input = stdin;
    if (argc == 2) {
        input = fopen(argv[1], "r");
        if (!input) {
            perror("Erro ao abrir arquivo");
            return 1;
        }
    }

    int n, M[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            fscanf(input, "%d", &M[i][j]);              //escaneia os elementos das matriz do arquivo
        }
    }
    if (verSudoku(M) == 0) printf("SIM\n");             //verifica se é solução ou não
    else printf("NAO\n");
    
    return 0;
}
