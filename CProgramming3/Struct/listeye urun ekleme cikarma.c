#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
	
	int ID; // 4 byte
	double fiyatBilgisi;// 8 byte
	char urunAdiBilgisi[20]; // 20 byte
	
	
	
	
	
	
	
	
}urunBilgileri;



void listeyeUrunEkleme(urunBilgileri urunListesi[],int urunID,double urunFiyat,char *urunAdi){
	
	int bosYer=0; // dongu icin kullanacagim
	while(1){
		
		if(urunListesi[bosYer].ID==0){// burasý boþ buraya yazabilirim
			urunListesi[bosYer].ID=urunID;
			urunListesi[bosYer].fiyatBilgisi=urunFiyat;
			strcpy(urunListesi[bosYer].urunAdiBilgisi,urunAdi);
			break;
		}
		bosYer++;
	}
}


int urunBul(int arananID,urunBilgileri urunListesi[],int urunSayisi){
	
	int i;
	
	for(i=0; i<urunSayisi; i++)
	{
		if(urunListesi[i].ID==arananID)
		{
			return i; // bulduk
		}
		
		
		
	}
	
	return -1;
	
}



void urunBilgisiGoster(int urunID,urunBilgileri urunListesi[],int urunSayisi)
{
	
	int urunIndex=urunBul(urunID,urunListesi,urunSayisi);// varsa index geldi yoksa -1 geldi
	
	if(urunIndex!=-1)
	{
		
		printf("Urun ID:%d\n",urunListesi[urunIndex].ID);
		printf("Urun Fiyat: %.2lf\n",urunListesi[urunIndex].fiyatBilgisi);
		printf("Urun Adi:%s",urunListesi[urunIndex].urunAdiBilgisi);
		
		
	}
	
	else{
		printf("Aradiginiz urun kayitli degildir.");
		
	}
	
}








int main(void){
	
	
	int urunSayisi;// kullanicinin girdiði sayiya gore dinamik array olustruracagim
	int i;
	urunBilgileri *urunlerListesi;
	double urunFiyat;
	char urunAdi[15];
	int ID;
	
	
	puts("Lutfen kac adet urun girmek istediginizi soyleyiniz:");
	scanf("%d",&urunSayisi);
	
	urunlerListesi=(urunBilgileri*)calloc(urunSayisi,sizeof(urunBilgileri));
		
	
	for(i=0; i<urunSayisi; i++){
		
		puts("Lutfen ekelenecek urunun ID bilgisini giriniz:");
		scanf("%d",&ID);
		
		
		puts("Lutfen ekeleneck urunun fiyat bilgisini giriniz:");
		scanf("%lf",&urunFiyat);
		
		puts("Lutfen eklenecek urunun adini giriniz:");
		scanf("%s",&urunAdi);
	    listeyeUrunEkleme(urunlerListesi,ID,urunFiyat,urunAdi);
	}
	
	printf("Lutfen gormek istediginiz urunun ID bilgisini giriniz:");
	scanf("%d",&ID);
	
	urunBilgisiGoster(ID,urunlerListesi,urunSayisi);
	
	
	
	
	
	
	
	
	
	return 0;
}
