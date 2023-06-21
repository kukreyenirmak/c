#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


int main(){

// calloc = clear and allocation
// realloc= real location



int elemanSayisi;
puts("Lutfen eleman sayisini giriniz:");
scanf("%d",&elemanSayisi);
int *dizi=(int *)calloc(elemanSayisi,sizeof(int));// baslangic adresi
int *ptr; //islemlerin hepsini ptr uzerinden yapacaðým

for(ptr=dizi; ptr<dizi+elemanSayisi; ptr++)
{
	*ptr=10;
	printf("%d ",*ptr);
}

	
	puts("\nEleman sayisini kaca yukseltmek istersiniz:");
	scanf("%d",&elemanSayisi);
	
	dizi=realloc(dizi,elemanSayisi*sizeof(int));
	 
for(ptr=dizi; ptr<dizi+elemanSayisi; ptr++)
{
	*ptr=10;
	printf("%d ",*ptr);
}
	
	free(dizi);
	
	
	
	
	
	
	
	
	return 0;
}
