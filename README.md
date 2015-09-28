# Trabalho 1 LPA

  NOME: Gustavo de Paula Lourenço           -          Nº USP: 9312842            -         GitHub Username: gulourenco
  
  Este repositório contém os programas propostos pelo Trabalho 1 da disciplina de Linguagens de Programação e Aplicações (SSC0300) fornecida pelo professor Adenilso Simão (ICMC-USP) à turma de Engenharia Mecânica (EESC-USP).
  
  1. FUNCIONAMENTO DOS PROGRAMAS

    Os códigos dos programas foram desenvolvidos em c (código fonte .c).
    Foram escritos e compilados no ambiente de desenvolvimeto integrado DEV-C++, versão 5.10.0.0, que utiliza
    TDM-GCC MinGW 32-bit como compilador dos executáveis (.exe). 
    A arquitetura utilizada foi Windowns 7.
    Em todos os programas escritos foram utilizadas as bibliotecas stdlib.h e stdio.h, além de entradas padrão.
    Os parâmetros de compilação utilizados foram os comumentes usados no ambiente do DEV-C++.

  2. INSTRUÇÕES PARA EXECUÇÃO

  2.1 Tutorial de como compilar o código
  
    Para compilar um programa com código fonte .c costuma-se utilizar o GCC (como citado anteriormente) feita por meio de um ambiente de desenvolvimento integrado (IDE) ou diretamente no comando executável do compilador. 
    No DEV-C++, utilizado para realização destes programas, basta direcionar-se na barra de tarefas -> Executar -> Compilar, ou simplesmente apertando F9. Após isso será criado um arquivo executável que poderá ser acessado fácilmente na mesma pasta do código (em outros ambientes o processo pode ser diferente, mas o princípio é o mesmo).
    
  2.2 Tutoriais de como utilizar os programas
  
    Como foi exposto na proposta deste trabalho, todos os programas, ao serem executados, utilizam de entradas padrão para leitura dos números INTEIROS fornecidos pelo usuário. Portanto, devem ser inserido apenas números inteiros (positivos ou negativos) pra que não ocorra erros durante a execução. 
    Em todos os programas a memória é alocada dinâmicamente visando melhor eficiência. Ao final de cada programa, a memória é desalocada por meio do free().
    A ordenação dos vetores foi feita por meio do algoritmo de ordenação insertion.
    OBS: Alguns exemplos de entradas foram fornecidas na proposta do trabalho e encontram-se na pasta "Entradas".

  2.2.1 Pares mais próximos (Closest Pair)
    
    Este programa, inicialmente, pedirá a quantidade de valores que serão lidos("Digite o numero de inteiros a serem lidos (maior ou igual a 2): ") para assim poder alocar memória de tamanho ideal. Em seguida, pedirá que entre com os números inteiros (aperte ENTER após cada valor inserido) preenchendo o vetor alocado. Após estes passos, o programa irá ordenar os elementos do vetor e compara as diferenças. Ao final, imprimirá uma mensagem com o par de números que possui a menor diferença dentre todos os números inseridos. 
    OBS: Caso ocorra que exista pares com mesma diferença, o programa imprimirá apenas o primeiro de uma lista ordenada em ordem crescente de valores.
      
  2.2.2 Elemento único (Element uniqueness)
    
   Este programa, inicialmente, assim como o primeiro, pedirá a quantidade de valores que serão lidos ("Digite o numero de inteiros a serem lidos(maior ou igual a 1): ") para alocar a memória dinâmicamente. Em seguida, pedirá que entre com os números inteiros (aperte ENTER após cada valor inserido), preenchendo o vetor. Após isso, o programa ordenará os elementos e identificará, dentre estes inteiros, aqueles que ocorrem uma única vez. Por final, estes elementos unicos serão impressos.
   OBS: Caso o programa não imprima nenhum valor, concluisse que não há elementos únicos no conjunto de números inteiros fornecidos pelo usuário.
      
  2.2.3 Distribuição de Frequência (Frequency distribution)
    
    Este programa, inicialmente, assim como os anteriores, pedirá a quantidade de valores que serão lidos ("Digite o numero de inteiros a serem lidos(maior ou igual a 1): ") para alocação de memória. Em seguida, pedirá que entre com os números inteiros (aperte ENTER após cada valor inserido), preenchendo o vetor. Feito isto, o programa ordenará os elementos do vetor e verificará qual o a maior frequência que ocorre naquele conjunto. Então, checará novamento o vetor para ver quais valores se repetem com aquela frequência. Por fim, imprimirá estes valores.
