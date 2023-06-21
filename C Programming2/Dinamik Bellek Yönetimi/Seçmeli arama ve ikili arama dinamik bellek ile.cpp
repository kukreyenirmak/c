#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>


void diziyiDoldur(int *dizi,int elemanSayisi)
{
	srand(time(NULL));
	int *ptr;// baþlangýç adresi
	
	for(ptr=dizi; ptr<dizi+elemanSayisi; ptr++)
	{
		*ptr=rand()%100;
		
	}
}



void diziyiYazdir(int *dizi,int elemanSayisi)
{

	int *ptr;// baþlangýç adresi
	
	for(ptr=dizi; ptr<dizi+elemanSayisi; ptr++)
	{
		printf("%d ",*ptr);
		
	}
   printf("\n");
}

void secmeliSirala(int *dizi,int elemanSayisi)
{
	int *ptr,*ptr2,*enKucukSayi;
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


void ikiliArama(int *dizi,int elemanSayisi,int arananSayi)
{
	int *ptrSol=dizi;
	int *ptrSag=dizi+elemanSayisi-1;
	int *ptrOrtanca;
	int bulunduMu=0;
	
	wihle(ptrSol<=ptrSag)
	{
		ptrOrtanca=(ptrSag+ptrSol)/2;
		
		if(*ptrOrtanca==arananSayi)
		{
			bulunduMu=1;
			break;
		}
		  else if(*ptrOrtanca>arananSayi)
		{
			ptrSag=ptrOrtanca-1;
			
		}
		else{
			ptrSol=ptrOrtanca-1;
		}
		
	}
	
	if(bulunduMu)
	{
		printf("%d sayisi bulundu",arananSayi);
	}
	else{
		printf("%d sayisi bulunamadi",arananSayi);
	}
	
	
}










int main(){
	
	int elemanSayisi;
	puts("Lutfen dizinin eleman sayisini giriniz:");
	scanf("%d",&elemanSayisi);
	
	
	int *dizi=(int*)malloc(sizeof(int)*elemanSayisi);
	
	diziyiDoldur(dizi,elemanSayisi);
	diziyiYazdir(dizi,elemanSayisi);
	secmeliSirala(dizi,elemanSayisi);
	diziyiYazdir(dizi,elemanSayisi);
	
	
	
	
	
	
	
	
	
	
	return 0;
}

