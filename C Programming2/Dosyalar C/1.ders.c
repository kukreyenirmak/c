#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SATIR_SAYISI 50
#define MAX_KARAKTER_SAYISI 50



/* Dosya Tipleri
1.Metin Dosyalarý
2.Ýkili Dosyalar


*/

//Ýþimize yarayacak fonksiyonlar

/*

1. feof(File Pointer)

while(!feof(dosya){




}



2.rewind-->dosyanýn en baþýna dönmemizi saðlar.




3.fseek

  seek_set
  seek_cur
  seek_end
  
 --> geriye doðru anlamýna

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

/*Dosya açýlýþ modlarý

r-->dosyadan okuma yapmak için kullanýlýyor.Dosyanýzýn var olmasý gerekiyor.
w-->dosyaya yazma iþlemi yapar, dosyaniz zaten var ise dosyanýzýn içeriðini siler yoksa yeni dosya oluþturur.
a--> dosyaya ekleme yapar, dosya var ise sonradan ekleme yapar, dosyanýz yok ise olusturur.

rb-> read binary
wb-> write binary
a-->


r+ hem yazma hem okuma yapabilirsiniz ancak dosyanýzý var olmasý gerekir
w+ hem yazma hem okuma yapabiliyorsunuz dosyanýzýn içeriði silinebilir
a+ hem yazma hem okuma dosyanýz var ise sonuna ekleme yapar , yoksa dosyanýzý oluþturur

rb+
wb+
ab+ ikili dosyalar için ayný iþlevi görüyor

*/



// karakter sayýlarýný bilmiyorsam ne yapacagim.END OF THE FILE






printf("\n");




/*

for(i=0; i<5; i++)
{
	ch=fgetc(dosya);// fgetc()dosyadan al karakter bazýda
	putchar(ch);
	
	
	
	
}
printf("\n");


*/




int kapandiMi;// kapandý kontrolü yapabilmek için kullanacagim

kapandiMi=fclose(dosya);// kapandýysa 0 dönüyor ,kapanmadýysa farklý bir deðer döner

if(kapandiMi==0)
{
printf("Dosya basarili bir sekilde kapatilmistir.\n");	
}


else{
	printf("Dosya kapatilirken bir hata meydana geldi.\n");
}





kapandiMi=fclose(dosya2);// kapandýysa 0 dönüyor ,kapanmadýysa farklý bir deðer döner

if(kapandiMi==0)
{
printf("Yazilacak olan dosya basarili bir sekilde kapatilmistir.");	
}


else{
	printf("Dosya kapatilirken bir hata meydana geldi.");
}





	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
