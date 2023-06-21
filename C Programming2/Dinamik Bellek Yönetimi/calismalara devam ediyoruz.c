#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


void diziyiDoldur(int *dizi,int elemanSayisi)
{
	srand(time(NULL));
	int *ptr;// baþlangýç adresini tutacak ve tüm iþlemler bunun üzerinden gerçekleþecek
	
	for(ptr=dizi; ptr<dizi+elemanSayisi; ptr++)
	{
		*ptr=rand()%100;
	}
}

void 	diziyiYazdir(int *dizi,int elemanSayisi)
{
	int *ptr;
	for(ptr=dizi; ptr<dizi+elemanSayisi; ptr++)
	{
		printf("%d ",*ptr);
	}
	printf("\n");
}


void secmeliSirala(int *dizi,int elemanSayisi)
{
	
	/*
	5  12  3  9  21
	3  12  5  9  21
	3  5   12 9  21
	3  5   9  12 21
	3  5   9  11 21
	*/
	
	
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

/*

  ptr>>   91     7     81     71      21    <<enkucukSayi     
          91     7  <<enKucukSayi   81     71      21     <? 21 evet
  int gecici=*enKucukSayi
  *enKucukSayi=*ptr
  *ptr = gecici
   
        7  ptr>>   91     81     71    21 <<enKucukSayi
       
        7  ptr2>>  91     81     71    21  <<enKucukSayi
   
      gecici=21
        7          21   ptr2>>  81     71 <<enKucukSayi   91   
     gecici=*enKucukSayi
     *enKucukSayi=*ptr
     *ptr= gecici
*/






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
