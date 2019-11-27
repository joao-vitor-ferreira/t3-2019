#include <stdlib.h>
#include "Muro.h"

typedef struct{
    double xIni;
    double yIni;
    double xFim;
    double yFim;
} muro;

Muro createMuro(double xIni, double yIni, double xFim, double yFim){
    muro *newMuro;
    newMuro = (muro*)malloc(sizeof(muro));
    newMuro->xIni = xIni;
    newMuro->yIni = yIni;
    newMuro->xFim = xFim;
    newMuro->yFim = yFim;
    return (Muro)newMuro;
}
double getMuroXIni(Muro m){
    muro *newMuro = (muro*)m;
    return newMuro->xIni;
}
double getMuroYIni(Muro m){
    muro *newMuro = (muro*)m;
    return newMuro->yIni;
}
double getMuroXFim(Muro m){
    muro *newMuro = (muro*)m;
    return newMuro->xFim;
}
double getMuroYFim(Muro m){
    muro *newMuro = (muro*)m;
    return newMuro->yFim;
}