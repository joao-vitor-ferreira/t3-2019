#ifndef MURO_H
#define MURO_H

    typedef void *Muro;

Muro createMuro(double xIni, double yIni, double xFim, double Yfim);
double getMuroXIni(Muro m);
double getMuroYIni(Muro m);
double getMuroXFim(Muro m);
double getMuroYFim(Muro m);

#endif