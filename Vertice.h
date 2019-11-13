#ifndef VERTICE_H
#define VERTICE_H

    typedef void *Vertice;
    /* Vertice é uma estrutura composta por: coordenada (x, y), um tipo (inicial ou final), um apontador para o seguimento a que pertence e um código */
Vertice createVertice(double pX, double pY, char *cod, char type, void *pSeg);
double getVerticePontoX(Vertice v);
double getVerticePontoY(Vertice v);
char getVerticeTipo(Vertice v);
char *getVerticeCodigo(Vertice v);
void freeVertice(Vertice v);
#endif