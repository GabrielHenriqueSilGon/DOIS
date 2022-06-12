#include "Pilha.hpp"
#include <iostream>
using namespace std;

void
FPVazia (Pilha * p)
{
  p->top = 0;
  p->base = 0;
}


void
PUSH (Pilha * p, Item d)
{
  if (p->top >= MAXTAM)
    {
      printf ("PILHA CHEIA!\n");
    }
  else
    {
      p->vet[p->top] = d;
      p->top++;
    }
}

void
POP (Pilha * p)
{
  if (p->base == p->top)
    printf ("PILHA VAZIA!\n");
  else
    {
      p->top--;
    }
}

void
PRemove (Pilha * p, Item d)
{
  Pilha aux;
  Item rem;

  FPVazia (&aux);

  if (p->base == p->top)
    printf ("PILHA VAZIA!\n");
  else
    {
      while (p->top > p->base)
	{
	  POP (p);
	  if (rem.val != d.val)
	    PUSH (&aux, rem);
	}

      while (aux.top > aux.base)
	{
	  POP (&aux);
	  PUSH (p, rem);
	}
    }
}

void
PImprime (Pilha * p)
{
  for (int i = p->top - 1; i >= p->base; i--)
    printf ("%d  ", p->vet[i].val);
  printf ("\n");
}
