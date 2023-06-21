#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>



 typedef struct{
 	
 	int saat;
 	int dakika;
 	double saniye;
 	
 }saatBilgileri;



saatBilgileri saatiAyir(double kullaniciGirisi){
	
	 
	 saatBilgileri donusturulecekDeger;
	 
	 int tamSayiKismi=(int)kullaniciGirisi;
	 double ondalikliKisim=kullaniciGirisi-tamSayiKismi;
	 
	 
	 donusturulecekDeger.saat=tamSayiKismi/3600;
	 donusturulecekDeger.dakika=(tamSayiKismi%3600)/60;
	 donusturulecekDeger.saniye=(tamSayiKismi%3600)%60+ondalikliKisim;
	 
	 
	 return donusturulecekDeger;
	
}





int main(void){
	
	
	double kullaniciGirisi;
	saatBilgileri kullaniciSaati;
	
   printf("Lutfen saati saniye cinsinden giriniz:");
   scanf("%lf",&kullaniciGirisi);	
	
	
	
	kullaniciSaati=saatiAyir(kullaniciGirisi);
	
	printf("%d:%d:%.2lf",kullaniciSaati.saat,kullaniciSaati.dakika,kullaniciSaati.saniye);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
