#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>


struct Ogrenci{
	
	char isim[20];
	char soyisim[20];
	float ortalama;
	

};


int main(){
	
	
	struct Ogrenci ogr; //degisken tanimlamasi yaptik
	struct Ogrenci *ogrPtr;//isaretci degiskeni tanimlamasi yaptik
	ogrPtr=&ogr;
	
	
	/*
	strcpy((*ogrPtr).isim,"Ogun");
	
	strcpy((*ogrPtr).soyisim,"Birinci");
	
   (*ogrPtr).ortalama=3.74;		
	*/
	
	strcpy(ogrPtr->isim,"Ogun");
	strcpy(ogrPtr->soyisim,"Ogun");
	ogrPtr->ortalama=3.74;
	
	
	printf("Adresi:%#X\n",ogrPtr);
	printf("Ogrencinin ismi:%s\n",(*ogrPtr).isim);
	printf("Ogrencinin soyismi:%s\n",(*ogrPtr).soyisim);
	printf("Ogrencinin ortalamasi:%.2f\n",(*ogrPtr).ortalama);
	
	
	
	
	
	
	
	
   return 0;	
}
	
	




