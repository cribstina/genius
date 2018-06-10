#include <stdlib.h>
#include <time.h>

/*Implementacao das funcoes*/


//Descricao: inicia o SDL e carrega tela
bool inicia()
{
    bool success = true;

    //Inicializa SDL
    if ( SDL_Init( SDL_INIT_VIDEO ) < 0)
    {
        printf( "O SDL nao pode ser inicializado! SDL_Error: %s\n", SDL_GetError() );
        success = false;
    }
    else
    {
        //Cria janela
        gWindow = SDL_CreateWindow( "GENIUS", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
        if ( gWindow == NULL )
        {
            printf( "Nao foi possivel criar a janela! SDL_Error: %s\n", SDL_GetError() );
            success = false;
        }
        else
        {
            //Superficie
            gScreenSurface = SDL_GetWindowSurface ( gWindow );
        }
    }
}

//Descricao: carrega midia
bool loadMedia()
{
    bool success = true;

    //carrega imagem
    geniusBg = SDL_LoadBMP( "bg.bmp" );
    if( geniusBg == NULL)
    {
        printf("Nao foi possivel carregar a imagem %s! SDL Error: %s\n", "bg.bmp", SDL_GetError() );
        success = false;
    }

    return success;
}

//Janela
SDL_Window* gWindow = NULL;

//Superficie da janela
SDL_Surface* gScreenSurface = NULL;

//Imagem que vai ser carregada a principio
SDL_Surface* geniusBg = NULL;

//Descricao: inicia o jogo apos o usuario apertar o botao do meio
//imagem meio_down.bmp quando aperta o botão
void comeca_jogo();

//Descricao: gera uma sequencia (vetor) aleatoria de n numeros entre 0 e 3
void gera_sequencia(int tamanho, int *sequencia) {
    int numero, aux;
    srand(time(NULL));
    for (aux = 0; aux < tamanho; aux++) {
	numero = rand() % 4;
	*(sequencia+aux) = numero;
    }
}

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
void close()
{
    //Desalocar superficie
    SDL_FreeSurface( geniusBg );
    geniusBg = NULL;

    //Destruir janela
    SDL_DestroyWindow( gWindow );
    gWindow = NULL;

    SDL_Quit();
}
