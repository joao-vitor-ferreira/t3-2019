#ifndef SEGUIMENTO_H
#define SEGUIMENTO_H
#include "Ponto.h"

    typedef void *Seguimento;
    /* Seguimento é uma estrutura composta por um ponto inicial e por um ponto final a qual os dois pontos se ligam */

Seguimento createSeguimento(Ponto pIni, Ponto pFim);
Ponto getPontoInicial(Seguimento seg);
Ponto getPontoFinal(Seguimento seg);
void freeSeguimento(Seguimento seg);

#endif