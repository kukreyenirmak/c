#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SATIR_SAYISI 50
#define MAX_KARAKTER_SAYISI 50


/*
Dosya Tipleri

1.Metin Dosyalarý: ASCII tabloya göre, byte düzeyinde, geriye dönük ekleme  yapýlamýyor
2.Ýkili Dosyalar: 0-1 bit karþýlýðýna, geriye dönük ekleme yapabiliyor olam










*/





	/*
	DOSYA AÇILIÞ MODLARI
	r-->, dosyadan okuma yapmak icin kullanýlýyor .Dosyanýzýn var olmasý gerekiyor.
	w-->, dosyaya yazma islemi yapar, dosyanýz zaten var ise dosyanýzýn içeriðin siler yoksa yeni dosya olusturur.
	a-->  dosyaya ekleme yapar, dosya var ise sonundan ekleme yapar , dosyanýz yok ise dosyanýzý olusturur.
	rb--> read binary
	wb--> wriye binary
	ab-->
	r+ --> hem okuma hem yazma iþlemi yapabilirsiniz ancak dosyanýzýn zaten var olmasý gerekir.
	w+ --> hem yazma hem okuma yapabiliyorsunuz, dosyanýzýn iceriði silinebilir
	a+ -->hem yazma hem okuma dosanýz var ise sonuna ekleme yapar yoksa dosyanýzý olusturur
	rb+
	wb+
	ab+-->ikili dosyala için ayný iþlemi görüyor
	
	
	
	
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
	
	
	
	
	
	
	
	
	
	
	

       
       
       
       
       
	
	int kapandiMi;//kapandý kontrolu yapabilmek icin kullanacagim
	
	kapandiMi=fclose(dosya);//kapandýysa sýfýr döner kapanmadýysa sýfýrdan farklý bir deger doner
	
	
	if(kapandiMi==0)
	{
		printf("Dosya basarili bir sekilde kapatilmistir.");
	}
	else{
		printf("Dosya kapatilirken bir hata meydana geldi.");
		
	}
	
		kapandiMi=fclose(dosya2);//kapandýysa sýfýr döner kapanmadýysa sýfýrdan farklý bir deger doner
	
	
	if(kapandiMi==0)
	{
		printf("Yazilacak olan dosya basarili bir sekilde kapatilmistir.");
	}
	else{
		printf("Dosya kapatilirken bir hata meydana geldi.");
		
	}
	
	
	
	
	
	
	
	
	return 0;
}
