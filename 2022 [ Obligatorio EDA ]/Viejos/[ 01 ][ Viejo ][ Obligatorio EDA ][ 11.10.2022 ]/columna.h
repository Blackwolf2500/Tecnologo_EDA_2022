#ifndef COLUMNA_H
#define COLUMNA_H

#include "define.h"

typedef struct nodo_col * Columna;


Columna crearCol(char * namecol, TipoClas c, TipoDato t);
// crea la columna con la informacion de la misma

char * nombreColumna(Columna c);
// devuelve el nombre de la columna

void eliminarDatoCol(Columna c);
// elimina los datos de la columna

TipoDato tipoDatoCol(Columna c);
// devuelve el tipo de dato de la columna c

TipoClas tipoClasCol(Columna c);
// devuelve el tipo de clasif de la columna c

void imprimirColumna(Columna c);
//imprime la informacion de la columna c

#endif