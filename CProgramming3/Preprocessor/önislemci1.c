#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define ELEMAN_SAYISI 30
/*

//�N ��LEMC� A�AMASINDA YAPILANLAR



1.K�t�phaneler ve header dosyalar� koda entegre ediliyor

2.Yorum sat�rlar� kald�r�l�yor

3.








*/




int main(void){
	
   	
	printf("Dizinin eleman sayisi %d\n",ELEMAN_SAYISI);
    int i;
	int *dizi;
	dizi=(int*)malloc(sizeof(int)*ELEMAN_SAYISI);
	
	for(i=0; i<ELEMAN_SAYISI; i++)
	{
		dizi[i]=i*i;
		printf("%d ",dizi[i]);
	}







	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
