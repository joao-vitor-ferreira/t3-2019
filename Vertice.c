#include <stdio.h>
#include "Vertice.h"
#include <stdlib.h>

typedef struct {
    double pX;
    double pY;
    char *cod;
    char type;
    void *pSeg;
} vertice;

Vertice createVertice(double pX, double pY, char *cod, char type, void *pSeg){
    vertice *v = (vertice*)malloc(sizeof(vertice));
    v->pX = pX;
    v->pY = pY;
    v->cod = cod;
    v->type = type;
    v->pSeg = pSeg;
    return (Vertice)v;
}

double getVerticePontoX(Vertice v){
    vertice *newV = (vertice*)v;
    return newV->pX;
}

double getVerticePontoY(Vertice v){
    vertice *newV = (vertice*)v;
    return newV->pY;
}

char getVerticeTipo(Vertice v){
    vertice *newV = (vertice*)v;
    return newV->type;
}

char *getVerticeCodigo(Vertice v){
    vertice *newV = (vertice*)v;
    return newV->cod;
}

void freeVertice(Vertice v){
    vertice *newV = (vertice*)v;
    if (newV != NULL)
        free(newV);
}