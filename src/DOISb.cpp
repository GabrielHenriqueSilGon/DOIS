#include <ctime>
#include "Pilha.hpp"
#include "DOISb.hpp"
#include <iostream>
using namespace std;

void
DOISb::tomaFuncaob ()
{
  char op = '-';
  double opr = 1.0;
  FPVazia (&operandosb);
  FPVazia (&operadoresb);
  auxopr = 0;
  auxop = 0;

  while (op != 's')
    {
      cout << "De um operando:\n";
      cin >> opr;
      Item aux;
      aux.val = opr;
      PUSH (&operandosb, aux);
      auxopr++;
      cout << "De um operador (digite s para finalizar a funcao):\n";
      cin >> op;
      aux.valc = op;
      if (op == '-' || op == '+' || op == '*' || op == '/')
	{
	  PUSH (&operadoresb, aux);
	  auxop++;
	}
    }

  cout << "As pilhas formadas sao:\nOperandos: ";
  for (int i = operandosb.base; i < operandosb.top; i++)
    cout << operandosb.vet[i].val << " ";
  cout << "\n";
  cout << "Operadores: ";
  for (int i = operadoresb.base; i < operadoresb.top; i++)
    cout << operadoresb.vet[i].valc << " ";
}

void
DOISb::apresenta ()
{
  char vetp[auxop];
  int n = 0;

  for (int i = 0; i < auxop; i++)
    {
      if (operadoresb.vet[i].valc == '*' || operadoresb.vet[i].valc == '/')
	{
	  vetp[n] = operadoresb.vet[i].valc;
	  n++;
	}
    }

  for (int i = 0; i < auxop; i++)
    {
      if (operadoresb.vet[i].valc == '+' || operadoresb.vet[i].valc == '-')
	{
	  vetp[n] = operadoresb.vet[i].valc;
	  n++;
	}
    }

  n--;
  cout << "\nExpressao prefixa: " << vetp[n];
  int ni = n - 1;

  for (int i = 0; i < auxopr; i++)
    {
      if ((ni - i) < 0)
	{
	  cout << " " << operandosb.vet[i].val;
	}
      else
	cout << " " << vetp[ni - i] << " " << operandosb.vet[i].val;
    }

  cout << "\nExpressao posfixa: " << operandosb.vet[0].val;

  for (int i = 1; i < auxopr; i++)
    {
      if ((i - 1) > n)
	{
	  cout << " " << operandosb.vet[i].val;
	}
      else
	cout << " " << operandosb.vet[i].val << " " << vetp[i - 1];
    }
    
    cout << "\n";
}

