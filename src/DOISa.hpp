#ifndef DOISA_HPP
#define DOISA_HPP
#include "Pilha.hpp"
#include <utility>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

class DOISa
{
public:

  Pilha operandos;
  Pilha operadores;

  void tomaFuncao ();
};

#endif
