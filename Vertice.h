#ifndef VERTICE_H
#define VERTICE_H
#include "Ponto.h"
#include "Seguimento.h"

    typedef void *Vertice;
    /* Vertice é uma estrutura composta por: coordenada (x, y), um tipo (inicial ou final), um apontador para o seguimento a que pertence e um código */
Vertice createVertice(Ponto point, char *cod, char type, void *pSeg);
Ponto getVerticePonto(Vertice v);
char getVerticeTipo(Vertice v);
char *getVerticeCodigo(Vertice v);
Seguimento getVerticeSeguimento(Vertice v);
void freeVertice(Vertice v);
#endif