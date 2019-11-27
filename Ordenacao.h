#ifndef ORDENACAO_H
#define ORDENACAO_H
#include "Vector.h"
#include "Lista.h"

typedef char *(*Str)(Item);
typedef double (*Mat)(Item);
typedef int (*Compare)(Vector vet, int i, int j, char p);
typedef int (*CompareDouble)(Vector vet, int i, int j);

Vector ltov(Lista list, Mat matx, Mat maty, Str id);
void heapSort(Vector vet, Compare cmp, char coodn);
/*k neighbors nearest, é a função que dado um Vector vet, ordena em ordem decrescente os k menores valores de vet*/
void knn(Vector vet, CompareDouble cmp, int k);

/*função que ordena no Vector vet todos os valores que são maiores que o raio, os colocando em ordem ccrescente do indice I em diante e o retorna  */
int knnr(Vector vet, CompareDouble cmp, double raio);
#endif