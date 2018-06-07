/* Declara funcoes necessarias ao funcionamento do GENIUS */

//inicia o jogo apos o usuario apertar o botao do meio
//imagem meio_down.bmp quando aperta o botão
void comeca_jogo();

//tudo pisca
//imagem aceso.bmp quando tudo acende
void tudo_acende();

//cores piscam individualmente
//imagens com o nome assim: cor_acesa.bmp com o nome da cor correspondente no lugar de "cor"
void azul_pisca();
void vermelho_pisca();
void amarelo_pisca();
void verde_pisca();

//usuario clica nas cores, resposta dos botoes
//imagens com o nome assim: cor_down.bmp com o nome da cor correspondente no lugar de "cor"
void aperta_azul();
void aperta_vermelho();
void aperta_amarelo();
void aperta_verde();


//usuario erra jogada, game over
//imagem acabou.bmp
void game_over();
