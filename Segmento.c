#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"
#include "Segmento.h"

typedef struct {
    Ponto pIni;
    Ponto pFim;
} segmento;


Segmento createSegmento(Ponto pIni, Ponto pFim){
    segmento *seg = (segmento*)malloc(sizeof(segmento));
    seg->pIni = pIni;
    seg->pFim = pFim;
    return (Segmento)seg;
}

Ponto getSegmentoPontoInicial(Segmento seg){
    segmento *newSeg = (segmento*)seg;
    return newSeg->pIni;
}

Ponto getSegmentoPontoFinal(Segmento seg){
    segmento *newSeg = (segmento*)seg;
    return newSeg->pFim;
}

void freeSegmento(Segmento seg){
    segmento *newSeg = (segmento*)seg;
    if (newSeg != NULL){
        if (newSeg->pIni != NULL)
            freePonto(newSeg->pIni);
        if (newSeg->pFim != NULL)
            freePonto(newSeg->pFim);
        free(newSeg);
    }
}     