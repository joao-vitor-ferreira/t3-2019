#ifndef VERTICE_H
#define VERTICE_H
#include "Ponto.h"
#include "Segmento.h"

    typedef void *Vertice;
    /* Vertice é uma estrutura composta por: coordenada (x, y), um tipo (inicial ou final), um apontador para o segmento a que pertence e um código */

Vertice createVertice(Ponto point, char cod, char type, Segmento pSeg);
Ponto getVerticePonto(Vertice v);
char getVerticeTipo(Vertice v);
char getVerticeCodigo(Vertice v);
Segmento getVerticeSegmento(Vertice v);
void setVerticeAngulo(Vertice v, double angulo);
void setVerticeSegmento(Vertice v, Segmento s);
void freeVertice(Vertice v);
#endif