#ifndef TIRO_H
#define TIRO_H
#include "../lib/position.h"
#include "../lib/glutils.h"

/**
 * Reperesenta um projetil lancado por uma defesa.
 * Tem uma posicao no mapa, velocidade e orientacao.
 */
typedef struct Tiro
{
    Position pos;
    float vel;
    Position orientation;
} Tiro;

/**
 * Metodo construtor de objetos TIRO
 * @param  pos         posicao em xyz
 * @param  vel         velocidade
 * @param  orientation orientacao em xyz
 * @return             um objeto Tiro
 */
Tiro TIRO_create(Position pos, float vel, Position orientation);

/**
 * Desenha o tiro
 * @param tiro tiro
 */
void TIRO_draw(Tiro *tiro);

/**
 * Atualiza aspectos do tiro. Metodo chamado enquanto o objeto vive
 * dentro do laco principal.
 */
void TIRO_update(Tiro *tiro);

/**
 * Destrutor do elemento de defesa
 */
void TIRO_destroy(Tiro *tiro);

#endif
