#include <stdio.h>
#include <string.h>
#include <time.h>

void diziOlustur(int [],int);
void diziyiSirala(int [],int);
void diziyiBas(int [],int);

int main(){
 int elemanSayisi;
 printf("Kac elemanli bir dizi istiyorsunuz:");
 scanf("%d",&elemanSayisi);
 int dizi[elemanSayisi];
 printf("Dizimiz Sirasiz sekilde\n");
 
 diziOlustur(dizi,elemanSayisi);
 printf("\n\nDizimizin Siralanmis Hali\n");
 diziyiSirala(dizi,elemanSayisi);
 diziyiBas(dizi,elemanSayisi);
 return 0;
}
















void diziOlustur(int dizi[],int elemanSayisi){
	
int i;
srand(time(NULL));

for(i=0; i<elemanSayisi; i++)
{
	dizi[i]=rand()%100;
	printf("%d  ",dizi[i]);
}
	
	
}

void diziyiSirala(int dizi[],int elemanSayisi){
	
	int i,j;
	int eleman;
	
	for(i=1; i<elemanSayisi; i++)
	{
		eleman=dizi[i];
		for(j=i-1; j>=0 && eleman<=dizi[j]; j--)
		{
			dizi[j+1]=dizi[j];
			
		}
		
		dizi[j+1]=eleman;
	}
	
}


void diziyiBas(int dizi[],int elemanSayisi){
	
	int i;
	
	for(i=0; i<elemanSayisi; i++)
	{
		printf("%d  ",dizi[i]);
	}
	
}


