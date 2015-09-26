#include<stdio.h>
#include<stdlib.h>

void read_numbers(int v[], int max)                  //Função para ler as entradas dos números
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
  
void insertion(int vet[], int n)                    //Função para ordenar o vetor de inteiro
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
	int *vet;                                            //Declaro um vetor de inteiros
	int i=0;                                             //Declaro algumas variáveis que serão utilizados ao longo do programa
	int a=0;
	int b=0;
	int n, count;
	printf("Digite o numero de inteiros a serem lidos: "); //Entra com o número n que define o total de valores a serem lidos
	scanf("%d", &n);
	vet=(int*)malloc(sizeof(int)*n);                    //Alocação de memória para um vetor com n elementos
	read_numbers(vet, n);                               //Leitura das entradas e armazenamento no vetor
	insertion(vet, n);                                  //Ordenação do vetor
    while (i<n)
    {
    	count=0;
    	while(vet[i]==vet[a])
    	{
    		count++;
    		a++;
		}
		if(count>=b)                                  //Acho o maior numero de repetições (qual a maior frequência)
		{
			b=count;
		}
		i+=a;
	}
    printf("\nO(s) elemento(s) que ocorre(m) em maior numero eh(sao):\n\n");
    i=0;
	a=0;
	count=0;
    while(i<n)                                         //Percorre o vetor e imprime os elementos que se repetem em maior frequência
    {
    	count=0;
    	while(vet[i]==vet[a])
    	{
    		count++;
    		a++;
		}
		if(count==b)                              
		{
			printf("%d ", vet[i]);
		}
		i++;
    }
    free(vet);
}
