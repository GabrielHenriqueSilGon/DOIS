#include <ctime>
#include "Pilha.hpp"
#include "DOISa.hpp"
#include <iostream>
using namespace std;

void
DOISa::tomaFuncao ()
{
  char op = '-';
  double opr = 1.0;
  FPVazia (&operandos);
  FPVazia (&operadores);

  while (op != 's')
    {
      cout << "De um operando:\n";
      cin >> opr;
      Item aux;
      aux.val = opr;
      PUSH (&operandos, aux);
      cout << "De um operador (digite s para finalizar a funcao):\n";
      cin >> op;
      aux.valc = op;
      if (op == '-' || op == '+' || op == '*' || op == '/')
	{
	  PUSH (&operadores, aux);
	}
    }

  cout << "As pilhas formadas sao:\nOperandos: ";
  for (int i = operandos.top - 1; i >= operandos.base; i--)
    cout << operandos.vet[i].val << " ";
  cout << "\n";
  cout << "Operadores: ";
  for (int i = operadores.top - 1; i >= operadores.base; i--)
    cout << operadores.vet[i].valc << " ";
    
  cout << "\n";
}
