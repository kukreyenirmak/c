#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>


struct Ogrenci{
	
	char isim[20];
	char soyisim[30];
	float ortalama;
	

};


int main(){
	
	/*
	struct Ogrenci ogr; //degisken tanimlamasi yaptik
	struct Ogrenci *ogrPtr;//isaretci degiskeni tanimlamasi yaptik
	ogrPtr=&ogr;
	
	
	/*
	strcpy((*ogrPtr).isim,"Ogun");
	
	strcpy((*ogrPtr).soyisim,"Birinci");
	
   (*ogrPtr).ortalama=3.74;		
	*/
	
	/*
	strcpy(ogrPtr->isim,"Ogun");
	strcpy(ogrPtr->soyisim,"Ogun");
	ogrPtr->ortalama=3.74;
	
	
	printf("Adresi:%#X\n",ogrPtr);
	printf("Ogrencinin ismi:%s\n",(*ogrPtr).isim);
	printf("Ogrencinin soyismi:%s\n",(*ogrPtr).soyisim);
	printf("Ogrencinin ortalamasi:%.2f\n",(*ogrPtr).ortalama);
	
	
	*/
	
	int elemanSayisi;
	int i;
	
	printf("Lutfen ogrenci sayisini giriniz:");
	scanf("%d",&elemanSayisi);
	
	
	
	
	struct Ogrenci *ogrPtr;// malloctan donen baslangic degeri
	printf("%d\n",sizeof(struct Ogrenci));
	ogrPtr=(struct Ogrenci*)malloc(sizeof(struct Ogrenci)*elemanSayisi);
	//dizinin baslangic adresini tutacak;
	
	
	for(i=0; i<elemanSayisi; i++)
	{
	     puts("Lutfen ogrencinin adini giriniz:");
		 scanf("%s",&ogrPtr[i].isim);	
		
		 puts("Lutfen ogrencinin soyadini giriniz:");
		 scanf("%s",&ogrPtr[i].soyisim);	
		
		puts("Lutfen ogrencinin ortalamasini giriniz:");
		scanf("%f",&ogrPtr[i].ortalama);
	}
	
	
	
		
	for(i=0; i<elemanSayisi; i++)
	{
	printf("Ogrencinin ismi:%s\n",ogrPtr[i].isim);
	printf("Ogrencinin soyismi:%s\n",ogrPtr[i].soyisim);
	printf("Ogrencinin ismi:%.2f\n",ogrPtr[i].ortalama);
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	/*
	strcpy(ogrPtr->isim,"Ogun");
	strcpy(ogrPtr->soyisim,"Birinci");
	ogrPtr->ortalama=3.74;
	
	printf("Ogrencinin ismi:%s\n",ogrPtr->isim);
		printf("Ogrencinin soyismi:%s\n",ogrPtr->soyisim);
	printf("Ogrencinin ismi:%.2f\n",ogrPtr->ortalama);

	*/
	
	
	free(ogrPtr); // serbest birakiyoruz, geri veriyoruz.
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
   return 0;	
}
	
	
