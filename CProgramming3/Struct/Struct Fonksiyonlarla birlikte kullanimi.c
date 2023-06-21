#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>


struct Ogrenci{
	
	char isim[20];
	char soyisim[30];
	float ortalama;
	

};


 void bilgileriOku(struct Ogrenci *ogrPtr){
 	
 	puts("Lutfen ogrencinin adini giriniz:");
 	scanf("%s",&ogrPtr->isim);
 	
	puts("Lutfen ogrencinin soyadini giriniz:");
 	scanf("%s",&ogrPtr->soyisim);
 	
 	puts("Lutfen ogrencinin ortalamasini giriniz:");
 	scanf("%f",&ogrPtr->ortalama);
}



 void bilgileriYazdir(struct Ogrenci *ogrPtr){
 	
 	printf("Ogrenci Adi:%s\n",ogrPtr->isim);
 	printf("Ogrenci Soyadi:%s\n",ogrPtr->soyisim);
 	printf("Ogrencinin Ortalamasi:%.2f\n",ogrPtr->ortalama);

}



void ogrenciBilgiDegistir(struct Ogrenci *ogr, struct Ogrenci *ogr2)
{
	struct Ogrenci geciciOgrenci;
	
	strcpy(geciciOgrenci.isim,ogr->isim);
	strcpy(geciciOgrenci.soyisim,ogr->soyisim);
	geciciOgrenci.ortalama=ogr->ortalama;
	
	
	strcpy(ogr->isim,ogr2->isim);
    strcpy(ogr->soyisim,ogr2->soyisim);	
	ogr->ortalama=ogr2->ortalama;
	
	
	strcpy(ogr2->isim,geciciOgrenci.isim);
    strcpy(ogr2->soyisim,geciciOgrenci.soyisim);	
	ogr2->ortalama=geciciOgrenci.ortalama;
	
	
	
}







int main(){
	

	struct Ogrenci ogr;
	struct Ogrenci ogr2;
	
	bilgileriOku(&ogr);
	puts("Birinci ogrenci bilgileri:");
	bilgileriYazdir(&ogr);

	bilgileriOku(&ogr2);
	puts("Ikinci ogrenci bilgileri:");
	bilgileriYazdir(&ogr2);
	
	ogrenciBilgiDegistir(&ogr,&ogr2);
	puts("Birinci ogrenci bilgileri:");
	bilgileriYazdir(&ogr);
	puts("Birinci ogrenci bilgileri:");
	bilgileriYazdir(&ogr2);
	
	
	
	
	
   return 0;	
}
	
	
