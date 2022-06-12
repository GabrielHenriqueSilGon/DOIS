#ifndef DOISC_HPP
#define DOISC_HPP
#include "Pilha.hpp"
#include <utility>
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

class DOISc
{
public:

  Pilha P1;

  void faz ();
  int t(int a);
  int mdc(int a, int b);
  void totiente ();
};

#endif