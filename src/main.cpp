
#include <iostream>
#include "Pilha.hpp"
#include "DOISa.hpp"
#include "DOISb.hpp"
#include "DOISc.hpp"
#include "DOISd.hpp"
using namespace std;

int
main ()
{
  char c;
  c = ' ';

  DOISa da;
  DOISb db;
  DOISc dc;
  DOISd dd;


  while (c != 's')
    {
      cout << "\nQual questao voce quer testar? (digite s para sair)" << endl;
      cin >> c;
      cout << "\n";
      switch (c)
	{

	case 'a':
	  {
	    da.tomaFuncao ();
	    break;
	  }

	  case 'b':
	  {
	    db.tomaFuncaob ();
	    db.apresenta ();
	    break;
	  }

	  case 'c':
	  {
	    dc.faz ();
	    dc.totiente ();
	    break;
	  }

	  case 'd':
	     {
	     int n;

	     cout << "De o numero para a sequencia de Fibonacci" << endl;
	     cin >> n;
	     dd.guarda(n);
	     break;
	     }
	   
	}
    }
  return 0;
}
