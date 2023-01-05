#ifndef DEFINE_H
#define DEFINE_H

// Estructuras de Datos y Algoritmos - Curso 2022
// Tecnologo en Informatica FIng - DGETP - UTEC
//
// Trabajo Obligatorio
// define.h
// Modulo de Definiciones Generales.

#define MAX_COMANDO 128

enum _retorno{OK, ERROR, NO_IMPLEMENTADA};
typedef enum _retorno TipoRet;

enum _clasificador{NOT_EMPTY, PRIMARY_KEY, ANY};
typedef enum _clasificador TipoClas;

enum _tipoDato{TSTRING, TINTEGER};
typedef enum _tipoDato TipoDato;

#endif
