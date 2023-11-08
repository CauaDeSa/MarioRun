#include "./main.h"
#include "./obstacle.h"
#include "./queue.h"
#include "./sky.h"
#include "./ground.h"
#include "./character.h"   
#include "./text.h"

typedef struct game_type* Game;

// Inicializa o jogo (game).
void game_init(Game* game);

// Mostra o menu na tela.
bool game_menu(Game game, bool is_dead);

// Anima o jogo e todos os seus elementos.
void game_animate(Game game);

// Detecta os eventos do jogo, como teclas.
bool game_events(Game game);

// Executa o jogo em loop até o player decidir sair do jogo.
void game_run(Game game, bool* quit);

// Reseta o jogo e todos os paramestros de outros TADs.
void game_reset(Game game);

// Verifica se o player está colidindo com algum obstáculo.
bool are_colliding(Character character, Obstacle obstacle);

// Destroi o jogo (game) e libera a memória alocada.
void game_destroy(Game* game);