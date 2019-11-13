#ifndef SEGUIMENTO_H
#define SEGUIMENTO_H
#include "Vertice.h"

    typedef void *Seguimento;
    /* Seguimento é uma estrutura composta por um ponto inicial e por um ponto final a qual os dois pontos se ligam */

Vertice createSeguimento(Vertice vIni, Vertice vFim);
Vertice getPontoInicial(Seguimento seg);
Vertice getPontoFinal(Seguimento seg);
void freeSeguimento(Seguimento seg);

#endif