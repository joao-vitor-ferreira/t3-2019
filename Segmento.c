#include <stdio.h>
#include <stdlib.h>
#include "Ponto.h"
#include "Segmento.h"

typedef struct {
    void *vIni;
    void *vFim;
} segmento;


Segmento createSegmento(void *vIni, void *vFim){
    segmento *seg = (segmento*)malloc(sizeof(segmento));
    seg->vIni = vIni;
    seg->vFim = vFim;
    return (Segmento)seg;
}

void *getSegmentoVerticeInicial(Segmento seg){
    segmento *newSeg = (segmento*)seg;
    return newSeg->vIni;
}

void *getSegmentoVerticeFinal(Segmento seg){
    segmento *newSeg = (segmento*)seg;
    return newSeg->vFim;
}

void setSegmentoVerticeInicial(Segmento seg, void *vIni){
    segmento *newSeg = (segmento*)seg;
    newSeg->vIni = vIni;
}

void setSegmentoVerticeFinal(Segmento seg, void *vFim){
    segmento *newSeg = (segmento*)seg;
    newSeg->vFim = vFim;
}

void freeSegmento(Segmento seg){
    segmento *newSeg = (segmento*)seg;
    if (newSeg != NULL){
        free(newSeg);
    }
}     