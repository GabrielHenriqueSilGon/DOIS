#include "Pilha.hpp"
#include "DOISd.hpp"
#include <iostream>
using namespace std;

int
DOISd::fibo (int n)
{
  int x;

  if (n == 1)
    {
      return (1);
    }

  if (n == 2)
    {
      return (1);
    }

  x = fibo(n - 1) + fibo(n - 2);
  return (x);
}

void
DOISd::guarda (int n)
{
  Item aux;
  FPVazia (&p);

  for (int i = 1; i <= n; i++)
    {
      aux.val = fibo(i);
      PUSH(&p, aux);
    }
 cout << "\nA sequecia de Fibonacci para "<<n<<" e: \n";
 PImprime(&p);
}

