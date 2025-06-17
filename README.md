# Jogo Xadrez - C++

# Descrição

Este é um programa simples de xadrez implementado em C++. O programa cria um tabuleiro de 8x8 e inicializa as peças de xadrez nas posições corretas. 
O jogador pode mover as peças de acordo com a notação padrão de xadrez, como por exemplo "e2 e4". O tabuleiro é exibido após cada movimento.

# Peças

Peças brancas: T = Torre, C = Cavalo, B = Bispo, D = Dama, R = Rei, P = Peão.

Peças pretas: t = Torre, c = Cavalo, b = Bispo, d = Dama, r = Rei, p = Peão.

Espaços vazios são representados por ' '

# Algumas funções básicas

inicializarTabuleiro(): Inicializa o tabuleiro com as peças nas posições iniciais de um jogo de xadrez.

exibirTabuleiro(): Exibe o tabuleiro no formato de coordenadas padrão de xadrez (A-H e 1-8).

moverPeca(int x1, int y1, int x2, int y2): Realiza o movimento de uma peça no tabuleiro se o movimento for válido.
