/*
//burbuja
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(void){
	
	int i,j,n,temp=0,bandera=0;
	srand(time(NULL));
	printf("Numero de elementos a ordenar\n");
	scanf("%d", &n);
	int lista[n];
	
	for(i=o;i<n;i++)
	lista[i]=rand()% (100+1-1)+1;
	printf("Lista sin ordenar\n");
	for(i=0;i<n;i++)
	printf ("%d",lista[i]);
	printf("\n");
	for(i=1;i<n;i++){
		bandera=0;
		for (j=0; j<n-i;j++)
		{
			if(lista[j]> lista[j+1])
			{
				bandera=1;
				temp=lista[j];
				lista[j]=lista[j+1];
				lista[j+1]=temp;
			}
		}
		if(bandera==0)
		break;
	}
	printf("Lista ordenada\n");
	for(i=0;i<n;i++)
	printf("%d",lista[i]);
}






// buburbuja 
#include <stdio.h>
#define MAX 100

int main() {	
	int total;
	int vNumeros[MAX]; 
	int j, i, temp; 
	
	printf ("Cuantos numeros deseas ordenar? "); 
	scanf("%d", &total);
	
	
	for (i = 0; i < total; i++) { 
		printf ("%d: ", i + 1); 
		scanf ("%d", &vNumeros[i]); 
	} 
	
	
	for (i = 0; i < (total - 1); i++) { 
		for (j = i + 1; j < total; j++) { 
			if (vNumeros[j] < vNumeros[i]) { 
				temp = vNumeros[j]; 
				vNumeros[j] = vNumeros[i]; 
				vNumeros[i] = temp; 
			} 
		} 
	} 
	

	printf ("Los números ordenados son:\n"); 
	for (i = 0; i < total; i++) { 
		printf("%d | ", vNumeros[i]); 
	} 
	
	printf("\n"); 

} 
|*/       

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int org(int arreglo[1],int n){
	int temp=100000000;
	for(int a = 0; a<n; a++){
		if(temp )
	}
}

int main(){
	srand (time(NULL));
	int arreglo[100]
	for(int a=0; a<100; a++){
		arreglo[a]= rand()%100-50;
	}
	
	return 0;
}






                                                                                     
