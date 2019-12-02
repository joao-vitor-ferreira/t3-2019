#include <stdio.h>
#include "Vertice.h"
#include "Ponto.h"
#include "Seguimento.h"
#include <stdlib.h>

typedef struct {
    Ponto point;
    char *cod;
    char type;
    Seguimento pSeg;
} vertice;

Vertice createVertice(Ponto point, char *cod, char type, void *pSeg){
    vertice *v = (vertice*)malloc(sizeof(vertice));
    v->point = point;
    v->cod = cod;
    v->type = type;
    v->pSeg = pSeg;
    return (Vertice)v;
}

Ponto getVerticePonto(Vertice v){
    vertice *newV = (vertice*)v;
    return newV->point;
}

char getVerticeTipo(Vertice v){
    vertice *newV = (vertice*)v;
    return newV->type;
}

char *getVerticeCodigo(Vertice v){
    vertice *newV = (vertice*)v;
    return newV->cod;
}

Seguimento getVerticeSeguimento(Vertice v){
    vertice *newV = (vertice*)v;
    return newV->pSeg;
}

void freeVertice(Vertice v){
    vertice *newV = (vertice*)v;
    if (newV != NULL)
        free(newV);
}