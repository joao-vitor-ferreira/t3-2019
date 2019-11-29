#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"
#include "Seguimento.h"

typedef struct {
    Ponto pIni;
    Ponto pFim;
} seguimento;


Seguimento createSeguimento(Ponto pIni, Ponto pFim){
    seguimento *seg = (seguimento*)malloc(sizeof(seguimento));
    seg->pIni = pIni;
    seg->pFim = pFim;
    return (Seguimento)seg;
}

Ponto getPontoInicial(Seguimento seg){
    seguimento *newSeg = (seguimento*)seg;
    return newSeg->pIni;
}

Ponto getPontoFinal(Seguimento seg){
    seguimento *newSeg = (seguimento*)seg;
    return newSeg->pFim;
}

void freeSeguimento(Seguimento seg){
    seguimento *newSeg = (seguimento*)seg;
    if (newSeg != NULL){
        if (newSeg->pIni != NULL)
            freePonto(newSeg->pIni);
        if (newSeg->pFim != NULL)
            freePonto(newSeg->pFim);
        free(newSeg);
    }
}     