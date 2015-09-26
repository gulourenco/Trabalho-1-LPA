#include<stdio.h>                               
#include<stdlib.h>

void read_numbers(int v[], int max)                  //Fun��o para ler as entradas dos n�meros e armazen�-la no vetor
{
  int i = 0;
  int num;
  printf("\nDigite-o(s):\n\n");
  while((i < max) && (scanf("%d", &num) > 0)) 
  {
    v[i] = num;
    i++;
  }
}

void insertion(int vet[], int n)                    //Fun��o para ordenar os elementos do vetor
{
    int i, j, temp;
        for (i = 1; i < n; i++)
		{                                          
            temp = vet[i];                    
            j = i - 1;
            while ((j>=0) && (temp < vet[j])) 
			{                                     
                vet[j+1] = vet[j];                                                                 
                j--;
            }
            if (i != j + 1) 
			{
                vet[j+1] = temp;                 
            }
        } 
}

main()
{
	int *vet;                                 //Declaro um vetor de inteiros
	int i=1;
	int n, x1, x2, dif1, dif2;                //Declaro��o algumas vari�veis que ser�o utilizados ao longo do programa
	printf("Digite o numero de inteiros a serem lidos: ");   //Entra com o n�mero n que define o total de valores a serem lidos
	scanf("%d", &n);
	vet=(int*)malloc(sizeof(int)*n);                         //Aloca��o de mem�ria para um vetor com n elementos
    read_numbers(vet, n);                                    //Leitura das entradas e armazenamento no vetor
	insertion(vet, n);                                       //Ordena��o do vetor
	dif1=vet[1]-vet[0];
	x1=vet[0];
	x2=vet[1];
	while(i<n-2)                          //Percorre o vetor buscando o par de n�meros com a menor diferen�a e armazena-os nas vari�veis x1 e x2
    {
    	dif2=vet[i+1]-vet[i];
		if(dif2<dif1)
		{
			x1=vet[i];
			x2=vet[i+1];
			dif1=dif2;
		}
		i++;
    }
    printf("O par de numero com menor diferenca eh:\n\n");     //Imprime o par de n�mero com a menor diferen�a
    printf("%d e %d", x1, x2);
    free(vet);                                                 //Desaloca��ode mem�ria utilizada
}


