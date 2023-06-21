#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SATIR_SAYISI 50
#define MAX_KARAKTER_SAYISI 50


/*
Dosya Tipleri

1.Metin Dosyalar�: ASCII tabloya g�re, byte d�zeyinde, geriye d�n�k ekleme  yap�lam�yor
2.�kili Dosyalar: 0-1 bit kar��l���na, geriye d�n�k ekleme yapabiliyor olam










*/





	/*
	DOSYA A�ILI� MODLARI
	r-->, dosyadan okuma yapmak icin kullan�l�yor .Dosyan�z�n var olmas� gerekiyor.
	w-->, dosyaya yazma islemi yapar, dosyan�z zaten var ise dosyan�z�n i�eri�in siler yoksa yeni dosya olusturur.
	a-->  dosyaya ekleme yapar, dosya var ise sonundan ekleme yapar , dosyan�z yok ise dosyan�z� olusturur.
	rb--> read binary
	wb--> wriye binary
	ab-->
	r+ --> hem okuma hem yazma i�lemi yapabilirsiniz ancak dosyan�z�n zaten var olmas� gerekir.
	w+ --> hem yazma hem okuma yapabiliyorsunuz, dosyan�z�n iceri�i silinebilir
	a+ -->hem yazma hem okuma dosan�z var ise sonuna ekleme yapar yoksa dosyan�z� olusturur
	rb+
	wb+
	ab+-->ikili dosyala i�in ayn� i�lemi g�r�yor
	
	
	
	
	*/





int main(){
	
	char saklanacakYer[MAX_SATIR_SAYISI][MAX_KARAKTER_SAYISI];
	int satirSayac=0;
	FILE *dosya=fopen("deneme.txt","r");
	FILE *dosya2=fopen("deneme2.txt","w");
	
	
	if(dosya!=NULL && dosya2!=NULL){
		printf("Iki dosyaniz da basariyla acildi.");
        while(satirSayac<MAX_SATIR_SAYISI){
        	fgets(saklanacakYer[satirSayac],MAX_KARAKTER_SAYISI,dosya);
        	printf("%s ifadesi dosya2'ye kopyalandi.",saklanacakYer[satirSayac]);
        	fputs()
			
			satirSayac++;
		}
		
			   	

}



   else{
   	printf("Dosyala acilirken hata meydana geldi.");
   	}
	
	
	
	
	
	
	
	
	
	
	

       
       
       
       
       
	
	int kapandiMi;//kapand� kontrolu yapabilmek icin kullanacagim
	
	kapandiMi=fclose(dosya);//kapand�ysa s�f�r d�ner kapanmad�ysa s�f�rdan farkl� bir deger doner
	
	
	if(kapandiMi==0)
	{
		printf("Dosya basarili bir sekilde kapatilmistir.");
	}
	else{
		printf("Dosya kapatilirken bir hata meydana geldi.");
		
	}
	
		kapandiMi=fclose(dosya2);//kapand�ysa s�f�r d�ner kapanmad�ysa s�f�rdan farkl� bir deger doner
	
	
	if(kapandiMi==0)
	{
		printf("Yazilacak olan dosya basarili bir sekilde kapatilmistir.");
	}
	else{
		printf("Dosya kapatilirken bir hata meydana geldi.");
		
	}
	
	
	
	
	
	
	
	
	return 0;
}
