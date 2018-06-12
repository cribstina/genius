#include <SDL.h>
#include <stdio.h>
#include <stdbool.h>
#include "g_func.h"


int main ( int argc, char* args[] )
{
    //Inicializa SDL e cria janela
    if ( !inicia() )
    {
        printf( "Falha na inicializacao\n ");
    }
    else
    {
        //Carrega midia
        if ( !loadMedia() )
        {
            printf( "Falha no carregamento da midia!\n" );
        }
        else
        {
            //Loop
            bool quit = false;

            //Event handler do SDL
            SDL_Event e;

            while ( !quit )
            {
                //Eventos
                while( SDL_PollEvent( &e ) != 0 )
                {
                    //Atividade de saida do usuario
                    if( e.type == SDL_QUIT)
                    {
                        quit = true;
                    }
                }

                //Aplica imagem
                SDL_BlitSurface( geniusBg, NULL, gScreenSurface, NULL );

                //Atualiza tela
                SDL_UpdateWindowSurface( gWindow );

            }
        }
    }

    close();

    return 0;
}
