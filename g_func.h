#ifndef G_FUNC_H_INCLUDED
#define G_FUNC_H_INCLUDED

/* Declara funcoes necessarias ao funcionamento do GENIUS */

//Constantes de dimensao da tela
const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

//Janela
extern SDL_Window* gWindow;

//Superficie da janela
extern SDL_Surface* gScreenSurface;

//Imagem que vai ser carregada a principio
extern SDL_Surface* geniusBg;

//Descricao: inicia o SDL e carrega tela
bool inicia();

//Descricao: carrega midia
bool loadMedia();

//Descricao: inicia o jogo apos o usuario apertar o botao do meio
//imagem meio_down.bmp quando aperta o botão
void comeca_jogo();

//Descricao: gera uma sequencia (vetor) aleatoria de n numeros entre 0 e 3
void gera_sequencia(int tamanho, int *sequencia);

//Descricao: cores piscam individualmente de acordo com o numero gerado pelo programa
//imagens com o nome assim: cor_acesa.bmp com o nome da cor correspondente no lugar de "cor"
void azul_pisca();
void vermelho_pisca();
void amarelo_pisca();
void verde_pisca();

//Descricao: resposta dos botoes apos o clique do usuario
//imagens com o nome assim: cor_down.bmp com o nome da cor correspondente no lugar de "cor"
void aperta_azul();
void aperta_vermelho();
void aperta_amarelo();
void aperta_verde();


//Descricao: usuario erra jogada, game over
//imagem acabou.bmp
void game_over();

//Libera midia e termina SDL
void close();


#endif // G_FUNC_H_INCLUDED
