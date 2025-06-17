#include <iostream>
#include <string>
using namespace std;

// Definindo a estrutura para o Tabuleiro
const int TAMANHO = 8;
char tabuleiro[TAMANHO][TAMANHO];

// Fun��o para inicializar o tabuleiro com as pe�as
void inicializarTabuleiro() {
    // Pe�as brancas
    tabuleiro[0][0] = 'T'; tabuleiro[0][1] = 'C'; tabuleiro[0][2] = 'B'; tabuleiro[0][3] = 'D';
    tabuleiro[0][4] = 'R'; tabuleiro[0][5] = 'B'; tabuleiro[0][6] = 'C'; tabuleiro[0][7] = 'T';
    for (int i = 0; i < TAMANHO; i++) {
        tabuleiro[1][i] = 'P'; // Pe�es brancos
    }

    // Pe�as pretas
    tabuleiro[7][0] = 't'; tabuleiro[7][1] = 'c'; tabuleiro[7][2] = 'b'; tabuleiro[7][3] = 'd';
    tabuleiro[7][4] = 'r'; tabuleiro[7][5] = 'b'; tabuleiro[7][6] = 'c'; tabuleiro[7][7] = 't';
    for (int i = 0; i < TAMANHO; i++) {
        tabuleiro[6][i] = 'p'; // Pe�es pretos
    }

    // Espa�os vazios
    for (int i = 2; i < 6; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = ' ';
        }
    }
}

// Fun��o para exibir o tabuleiro
void exibirTabuleiro() {
    cout << "\n  A B C D E F G H\n";
    for (int i = 0; i < TAMANHO; i++) {
        cout << 8 - i << " "; // N�mero da linha
        for (int j = 0; j < TAMANHO; j++) {
            cout << tabuleiro[i][j] << " ";
        }
        cout << 8 - i << endl;
    }
    cout << "  A B C D E F G H\n";
}

// Fun��o para mover as pe�as (movimento b�sico)
bool moverPeca(int x1, int y1, int x2, int y2) {
    if (x1 >= 0 && x1 < TAMANHO && y1 >= 0 && y1 < TAMANHO && x2 >= 0 && x2 < TAMANHO && y2 >= 0 && y2 < TAMANHO) {
        if (tabuleiro[x1][y1] == ' ') {
            cout << "N�o h� pe�a na posi��o inicial!" << endl;
            return false;
        }

        // Movimentar a pe�a (simples)
        tabuleiro[x2][y2] = tabuleiro[x1][y1];
        tabuleiro[x1][y1] = ' ';
        return true;
    } else {
        cout << "Movimento inv�lido!" << endl;
        return false;
    }
}

int main() {
    int x1, y1, x2, y2;
    string origem, destino;

    inicializarTabuleiro();

    while (true) {
        exibirTabuleiro();

        cout << "\nDigite o movimento da pe�a (ex: e2 e4): ";
        cin >> origem >> destino;

        // Convertendo as posi��es de "a1", "h8", etc. para �ndices de 0 a 7
        y1 = origem[0] - 'a';
        x1 = 8 - (origem[1] - '0');
        y2 = destino[0] - 'a';
        x2 = 8 - (destino[1] - '0');

        if (!moverPeca(x1, y1, x2, y2)) {
            cout << "Movimento inv�lido! Tente novamente." << endl;
        }
    }

    return 0;
}

