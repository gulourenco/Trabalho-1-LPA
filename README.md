# Trabalho 1 LPA

  NOME: Gustavo de Paula Lourenço           -          Nº USP: 9312842            -         GitHub Username: gulourenco
  
  Este repositório contém os programas propostos pelo Trabalho 1 da disciplina de Linguagens de Programação e Aplicações fornecida pelo professor Adenilso Simão (ICMC-USP) à turma de Engenharia Mecânica (EESC-USP).
  
  1. FUNCIONAMENTO DOS PROGRAMAS

    Os códigos dos programas foram desenvolvidos em c (código fonte .c).
    Foram escritos e compilados no ambiente de desenvolvimeto integrado DEV-C++, versão 5.10.0.0, que utiliza a porta Mingw (no Windowns) do GCC (GNU Compiler Collection) como compilador dos executáveis (.exe). 
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
    
    Este programa, inicialmente, pedirá a quantidade de valores que serão lidos para assim poder alocar memória de tamanho ideal (no mínimo 2). Em seguida, pedirá que entre com os números inteiros (aperte ENTER após cada valor inserido). Após estes passos, o programa imprimirá uma mensagem com o par de números que possui a menor diferença dentre todos os números inseridos. 
    OBS: Caso ocorra que exista pares com mesma diferença, o programa imprimirá apenas o primeiro de uma lista ordenada em ordem crescente de valores.
      
  2.2.2 Elemento único (Element uniqueness)
    
   Este programa, inicialmente, assim como o primeiro, pedirá a quantidade de valores que serão lidos para alocar a memória dinâmicamente. Em seguida, pedirá que entre com os números inteiros (aperte ENTER após cada valor inserido). Após isso, identificará, dentre estes inteiros, aqueles que ocorrem uma única vez.
   OBS: Caso o programa não imprima nenhum valor, concluisse que não há elementos únicos no conjunto de números inteiros fornecidos pelo usuário.
      
  2.2.3 Distribuição de Frequência (Frequency distribution)
    
    Este programa, inicialmente, assim como os anteriores, pedirá a quantidade de valores que serão lidos para alocação de memória. Em seguida, pedirá que entre com os números inteiros (aperte ENTER após cada valor inserido). Feito isto, o programa imprimirá os valores que aparecem em maior frequência no conjunto de inteiros fornecidos.
