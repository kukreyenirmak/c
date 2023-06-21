#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

void diziyiDoldur(int *dizi,int elemanSayisi)
{
	int *ptr;
	srand(time(NULL));
	for(ptr=dizi; ptr<dizi+elemanSayisi; ptr++)
	{
	   *ptr=rand()%100;
	}
}

void diziyiYazdir(int *dizi,int elemanSayisi)
{
	
	int *ptr;
	for(ptr=dizi; ptr<dizi+elemanSayisi; ptr++)
	{
	   printf("%d ",*ptr);
	}
	
	printf("\n");
	
	
}


void selectionSort(int *dizi,int elemanSayisi)
{
	int *ptr;
	int *ptr2;
    int *enKucukSayi;
    
    for(ptr=dizi; ptr<dizi+elemanSayisi; ptr++)
	{
		enKucukSayi=dizi+elemanSayisi-1;
		
		for(ptr2=ptr; ptr2<dizi+elemanSayisi; ptr2++)
		{
			if(*ptr2<*enKucukSayi)
			{
			  enKucukSayi=ptr2;
			}
		}
		
	   int gecici=*enKucukSayi;
		*enKucukSayi=*ptr;
		*ptr=gecici;
	}
}

void binarySearch(int *dizi,int elemanSayisi,int arananDeger)
{
	int *ptrSag;
	int *ptrSol;
	int *ptrOrt;
	int bulunduMu=0;
	
	ptrSol=dizi;
	ptrSag=dizi+elemanSayisi-1;
	
	while(ptrSol<=ptrSag)
	{
		ptrOrt=ptrSol+(ptrSag-ptrSol)/2;
		
		if(arananDeger==*ptrOrt)
		{
			bulunduMu=1;
			break;
		}
		
		else if(arananDeger>*ptrOrt)
		{
			ptrSol=ptrOrt+1;
		}
		
			
		else if(arananDeger<*ptrOrt)
		{
			ptrSag=ptrOrt-1;
		}
	}
	
	if(bulunduMu)
	{
		printf("%d sayisi bulunmsutur",arananDeger);
	}
	else{
		printf("%d sayisi bulunmamistir",arananDeger);
	}
}

int main(){
	
	int elemanSayisi,arananDeger;
	printf("Lutfen dizinin eleman sayisini giriniz:");
	scanf("%d",&elemanSayisi);
	int *dizi=(int*)malloc(sizeof(int)*elemanSayisi);
	diziyiDoldur(dizi,elemanSayisi);
	diziyiYazdir(dizi,elemanSayisi);
	selectionSort(dizi,elemanSayisi);
	diziyiYazdir(dizi,elemanSayisi);
	printf("Lutfen aradiginiz degeri giriniz:");
	scanf("%d",&arananDeger);
	binarySearch(dizi,elemanSayisi,arananDeger);
	return 0;
}
