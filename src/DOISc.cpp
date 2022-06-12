#include <ctime>
#include "Pilha.hpp"
#include "DOISc.hpp"
#include <iostream>
using namespace std;

void
DOISc::faz ()
{

  int l;

  srand (time (NULL));

  FPVazia (&P1);

  for (l = 0; l < 20; l++)
    {
      Item aux;
      aux.val = rand () % 100;
      PUSH (&P1, aux);
    }

  cout << "A Pilha formada e: ";
  for (int i = P1.base; i < P1.top; i++)
    cout << P1.vet[i].val << " ";
    
    cout << "\n===============================================================================\n";

}

int
DOISc::mdc (int a, int b)
{
  if (a == 0)
    return b;
  return mdc (b % a, a);
}

int
DOISc::t (int a)
{
  int result = 1;
  for (int i = 2; i < a; i++)
    {
      if (mdc (i, a) == 1)
	{
	  result++;
	}
    }
  return result;
}

void
DOISc::totiente ()
{
    cout << "O totiente da Pilha e: ";
  for (int n = 0; n < 20; n++)
    cout << t(P1.vet[n].val) << " ";

    cout << "\n";
}
