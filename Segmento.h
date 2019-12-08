#ifndef SEGMENTO_H
#define SEGMENTO_H
#include "Ponto.h"

    typedef void *Segmento;
    /* Segmento é uma estrutura composta por um ponto inicial e por um ponto final a qual os dois pontos se ligam */

Segmento createSegmento(Ponto pIni, Ponto pFim);
Ponto getSegmentoPontoInicial(Segmento seg);
Ponto getSegmentoPontoFinal(Segmento seg);
void freeSegmento(Segmento seg);

#endif