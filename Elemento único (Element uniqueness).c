#include<stdio.h>                
#include<stdlib.h>


void insertion(int vet[], int n)                    //Função para ordenar os elementos do vetor
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
	int *vet;
	int i = 0;
	int j, num, n;
	printf("Digite o numero de inteiros a serem lidos(maior ou igual a 1): ");      //Entra com o número que define o total de valores a serem lidos para poder alocar memória
	scanf("%d", &n);
	while (n<1)                                                    //Para não ocorrer que a lista seja nula
	{
		printf("Eh necessário pelo menos um número inteiro para o programa funcionar\nDigite um valor maior ou igual a um:");
		scanf("%d", &n);
	}
	vet=(int*)malloc(sizeof(int)*n);                               //Alocação da meória
	printf("\nDigite-os:\n\n");
	while((i < n) && (scanf("%d", &num) > 0))                      //Armazena os valores no vetor
	{
        vet[i] = num;
        i++;
    }
    insertion(vet,n);                                              //Ordenação do vetor
	printf("\nO(s) elemento(s) que ocorre(m) uma unica vez eh(sao):\n\n");
	if(vet[1]>vet[0])                                              //Verifica se o primeiro elemento é único, se sim, o imprime
    {
    	printf("%d ", vet[0]);
	}
	i=1;
    while(i<n)                                                     //Verifica as demais posições do vetor e imprime elementos únicos
    {
    	if(vet[i+1]>vet[i]&&vet[i]!=vet[i-1])
    	{
    		printf("%d ", vet[i]);
    		i++;
		}
		else
		{
			i++;
		}
	}
	free(vet);                                                    //Desalocação da memória
	getch();
}
