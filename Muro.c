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
double getMuroXIni(Muro m);
double getMuroYIni(Muro m);
double getMuroXFim(Muro m);
double getMuroYFim(Muro m);