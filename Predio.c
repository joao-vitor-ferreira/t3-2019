#include <stdio.h>
#include <stdlib.h>
#include "Predio.h"

typedef struct{
    char *cep;
    char face;
    int num;
    double frnt;
    double prof;
    double mrg;
} predio;

Predio createPredio(char *cep, char face, int numero, double frente, double profundidade, double margem){
    predio *newPredio = (predio*)malloc(sizeof(predio));
    newPredio->cep = cep;
    newPredio->face = face;
    newPredio->num = numero;
    newPredio->frnt = frente;
    newPredio->prof = profundidade;
    newPredio->mrg = margem;
    return (Predio)newPredio;
}

char *getPredioCep(Predio p){
    predio *newPredio = (predio*)p;
    return newPredio->cep;
}

char getPredioFace(Predio p){
    predio *newPredio = (predio*)p;
    return newPredio->face;
}

int getPredioNumero(Predio p){
    predio *newPredio = (predio*)p;
    return newPredio->num;
}

double getPredioFrente(Predio p){
    predio *newPredio = (predio*)p;
    return newPredio->frnt;
}

double getPredioProfundidade(Predio p){
    predio *newPredio = (predio*)p;
    return newPredio->prof;
}

double getPredioMargem(Predio p){
    predio *newPredio = (predio*)p;
    return newPredio->mrg;
}