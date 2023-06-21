#include <stdio.h>
#include <string.h>
#include <time.h>


void diziyiDoldur(int[],int);
void diziyiSirala(int[],int);
void diziBas(int[],int);
int enBuyukNDeger(int [],int,int);
int enKucukNDeger(int [],int,int);

int main(){
	
	int kullaniciGirisi;
	int elemanSayisi=15;
	int buyukN;
	int kucukN;
	
	int dizi[elemanSayisi];
	diziyiDoldur(dizi,elemanSayisi);
 	//diziyiSirala(dizi,elemanSayisi);
	printf("\n");
	diziBas(dizi,elemanSayisi);
	
	puts("\nLutfen en buyuk ve en kucuk kacinci sayiyi istediginizi giriniz:");
	scanf("%d",&kullaniciGirisi);
	buyukN=enBuyukNDeger(dizi,elemanSayisi,kullaniciGirisi);
	kucukN=enKucukNDeger(dizi,elemanSayisi,kullaniciGirisi);
	printf("Dizinin en buyuk %d. degeri : %d",kullaniciGirisi,buyukN);
	printf("Dizinin en kucuk %d. degeri : %d",kullaniciGirisi,kucukN);

	return 0;
}

void diziyiDoldur(int dizi[],int elemanSayisi){
	
	 
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
		for(j=i-1; j>=0 && eleman<=dizi[j]; j--){
			
		dizi[j+1]=dizi[j];
		}
		dizi[j+1]=eleman;
	}
}


void diziBas(int dizi[],int elemanSayisi)
{
	
  int i;
  diziyiSirala(dizi,elemanSayisi);
  for(i=0; i<elemanSayisi; i++)
	{
		printf("%d  ",dizi[i]);
	}
	
	
}

int enBuyukNDeger(int dizi[],int elemanSayisi,int NDeger){
	
	diziyiSirala(dizi,elemanSayisi);
     return dizi[elemanSayisi-NDeger];

}




int enKucukNDeger(int dizi[],int elemanSayisi,int NDeger){
	diziyiSirala(dizi,elemanSayisi);
     return dizi[NDeger-1];
}


