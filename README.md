# DOIS

Para as questões do exercício 2, utilizaremos a estrutura Stack. Desta vez todos os exercicios utilizam um stack linear, já que não senti a necessidade de utilizar um dinâmico em nenhum desses exercícios. O stack se diferencia da lista em que essa estrutura tem uma regra de remoção, sendo que o ultimo elemento que entra será o primeiro a sair. 

# Letra A

O problema A é bem simples, uma vez que este é basicamente empilhar um stack de chars específicos e um com valores numéricos. Para realizar esse exercício, eu modifiquei o próprio hpp da estrutura, mudando o bloco para que este tenha tanto um val numérico quanto um "valc" que guarda caracteres. Esta função sempre começa pedindo um operando, e passa para um operador. Esse laço de repetição só quebra quando no lugar do operador um "s" é passado. Também tem um if impedindo a lista de operadores de receber caracteres que não são operadores. Ao fim dessas operações, o programa mostra as duas listas resultantes.

# Letra B

Muito do código da letra B foi "emprestado" da letra A. O diferencial é que após mostrar as listas resultantes, a função "apresenta" organiza um vetor com os operadores, colocando aqueles de maior "importância" ( / , * ) afrente. Ao fim dessa organizão, a função apresenta as expressões préfixas e pósfixas resultantes.

# Letra C

Esse problema tem a função padrão de criar estrutura aleatória, e uma função que calcula o mdc de um valor, essa função vai funcionar em recursão para a função que de fato calcula o totiente, essa também imprime o totiente resutante de cada membro do stack aleatório.

# Letra D

Para este problema uma função recebe um int como input e entra em um laço de repetição "for" de 1 ao número. O i desse for é mandado par uma função fibo que calcula o fibonacci do i, tal valor é então empilhado no stack resultante. Em questão ás perguntas, acho que manter os cálculos em pilha só ajuda quando é importante rever resultados anteriores, e tirando isso é um peso desnecessário na memória.

# Makefile

Como executar:

  make clean - Apaga a última compilação realizada contida na pasta build
  
  make - Executa a compilação do programa utilizando o gcc, e o resultado vai para a pasta build
  
  make run - Executa o programa da pasta build após a realização da compilação
