#include <stdio.h>
#include "Vertice.h"
#include <stdlib.h>

typedef struct {
    Ponto point;
    double ang;
    char cod;
    char type;
    Segmento pSeg;
} vertice;

Vertice createVertice(Ponto point, char cod, char type, Segmento pSeg){
    vertice *v = (vertice*)malloc(sizeof(vertice));
    v->point = point;
    v->cod = cod;
    v->type = type;
    v->pSeg = pSeg;
    v->ang = 0;
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

char getVerticeCodigo(Vertice v){
    vertice *newV = (vertice*)v;
    return newV->cod;
}

Segmento getVerticeSegmento(Vertice v){
    vertice *newV = (vertice*)v;
    return newV->pSeg;
}

void setVerticeAngulo(Vertice v, double angulo){
    vertice *newV = (vertice*)v;
    newV->ang = angulo;
}

void setVerticeSegmento(Vertice v, Segmento s){
    vertice *newV = (vertice*)v;
    newV->pSeg = s;
}

void freeVertice(Vertice v){
    vertice *newV = (vertice*)v;
    if (newV != NULL)
        free(newV);
}