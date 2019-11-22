#ifndef PREDIO_H
#define PREDIO_H

    typedef void *Predio;

Predio createPredio(char *cep, char face, int numero, double frente, double profundidade, double margem);
char *getPredioCep(Predio p);
char getPredioFace(Predio p);
int getPredioNumero(Predio p);
double getPredioFrente(Predio p);
double getPredioProfundidade(Predio p);
double getPredioMargem(Predio p);

#endif
