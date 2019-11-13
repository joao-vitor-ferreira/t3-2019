#include <stdio.h>
#include "Seguimento.h"

typedef struct {
    Vertice vIni;
    Vertice vFim;
} seguimento;


Vertice createSeguimento(Vertice vIni, Vertice vFim){
    seguimento *seg = (seguimento*)malloc(sizeof(seguimento));
    seg->vIni = vIni;
    seg->vFim = vFim;
    return (Seguimento)seg;
}

Vertice getPontoInicial(Seguimento seg){
    seguimento *newSeg = (seguimento*)seg;
    return newSeg->vIni;
}

Vertice getPontoFinal(Seguimento seg){
    seguimento *newSeg = (seguimento*)seg;
    return newSeg->vFim;
}

void freeSeguimento(Seguimento seg){
    seguimento *newSeg = (seguimento*)seg;
    if (newSeg != NULL)
        free(newSeg);
}     