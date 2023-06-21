#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SATIR_SAYISI 50
#define MAX_KARAKTER_SAYISI 50



/* Dosya Tipleri
1.Metin Dosyalar�
2.�kili Dosyalar


*/

//��imize yarayacak fonksiyonlar

/*

1. feof(File Pointer)

while(!feof(dosya){




}



2.rewind-->dosyan�n en ba��na d�nmemizi sa�lar.




3.fseek

  seek_set
  seek_cur
  seek_end
  
 --> geriye do�ru anlam�na

*/

/*
4. ftell file pointer

*/



int main(){

  char saklanacakYer[MAX_SATIR_SAYISI][MAX_KARAKTER_SAYISI];
  int satirSayac=0;
  
  
  
  
  
  
  char adSoyad[MAX_KARAKTER_SAYISI],bolumBilgisi[MAX_KARAKTER_SAYISI];
  float ortalama;
  FILE *dosya=fopen("deneme.txt","r");
  FILE *dosya2=fopen("deneme2.txt","w");
  
  
  if(dosya!=NULL && dosya2!=NULL)
  {
  	 printf("Iki dosyanizda basariyla acildi.\n");
  	while(!feof(dosya)){
  		
     
  	 fscanf(dosya,"%s %f %s",&adSoyad,&ortalama,&bolumBilgisi);
     printf("Ad Soyad: %s\n Ortalamasi:%.2f\n Bolumu:%s\n",adSoyad,ortalama,bolumBilgisi);
     fprintf(dosya2,"AdSoyad:%s\nOrtalamasi:%.2f\nBolumu:%s\n",adSoyad,ortalama,bolumBilgisi);
	   		
  		
	  }



}
  
  
 else{
 	printf("Dosyalar acilirken hata meydana geldi.");
 }

/*Dosya a��l�� modlar�

r-->dosyadan okuma yapmak i�in kullan�l�yor.Dosyan�z�n var olmas� gerekiyor.
w-->dosyaya yazma i�lemi yapar, dosyaniz zaten var ise dosyan�z�n i�eri�ini siler yoksa yeni dosya olu�turur.
a--> dosyaya ekleme yapar, dosya var ise sonradan ekleme yapar, dosyan�z yok ise olusturur.

rb-> read binary
wb-> write binary
a-->


r+ hem yazma hem okuma yapabilirsiniz ancak dosyan�z� var olmas� gerekir
w+ hem yazma hem okuma yapabiliyorsunuz dosyan�z�n i�eri�i silinebilir
a+ hem yazma hem okuma dosyan�z var ise sonuna ekleme yapar , yoksa dosyan�z� olu�turur

rb+
wb+
ab+ ikili dosyalar i�in ayn� i�levi g�r�yor

*/



// karakter say�lar�n� bilmiyorsam ne yapacagim.END OF THE FILE






printf("\n");




/*

for(i=0; i<5; i++)
{
	ch=fgetc(dosya);// fgetc()dosyadan al karakter baz�da
	putchar(ch);
	
	
	
	
}
printf("\n");


*/




int kapandiMi;// kapand� kontrol� yapabilmek i�in kullanacagim

kapandiMi=fclose(dosya);// kapand�ysa 0 d�n�yor ,kapanmad�ysa farkl� bir de�er d�ner

if(kapandiMi==0)
{
printf("Dosya basarili bir sekilde kapatilmistir.\n");	
}


else{
	printf("Dosya kapatilirken bir hata meydana geldi.\n");
}





kapandiMi=fclose(dosya2);// kapand�ysa 0 d�n�yor ,kapanmad�ysa farkl� bir de�er d�ner

if(kapandiMi==0)
{
printf("Yazilacak olan dosya basarili bir sekilde kapatilmistir.");	
}


else{
	printf("Dosya kapatilirken bir hata meydana geldi.");
}





	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
