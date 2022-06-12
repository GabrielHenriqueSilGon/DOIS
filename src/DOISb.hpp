#ifndef DOISB_HPP
#define DOISB_HPP
#include "Pilha.hpp"
#include <utility>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

class DOISb
{
public:

  int auxop;
  int auxopr;

  Pilha operandosb;
  Pilha operadoresb;

  void tomaFuncaob ();
  void apresenta ();
};

#endif
