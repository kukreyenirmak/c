#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

//////Saat Çevirme////////////


typedef struct{
	
	int saat;
	int dakika;
	double saniye;// saniye + ondalýklý kýsým
	
	
	
	
}saatBilgileri;



  saatBilgileri saatiAyir(double kullaniciSaati)
{
	
	saatBilgileri donusturulenSaat;
    
    int tamSayiKismi=(int)kullaniciSaati;
    double ondalikliKisim=kullaniciSaati-tamSayiKismi;
    
    
    donusturulenSaat.saat=tamSayiKismi/3600; // 2 saat
    donusturulenSaat.dakika=(tamSayiKismi%3600)/60;
    donusturulenSaat.saniye=(tamSayiKismi%3600)%60+ondalikliKisim;
    
    
    return donusturulenSaat;
}







int main(void){
	
	double kullaniciGirisi;
	saatBilgileri kullaniciSaati;
	
	printf("Lutfen gireceginiz saat degerini saniye biciminde aliniz:");
	scanf("%lf",&kullaniciGirisi);
	
	
	kullaniciSaati=saatiAyir(kullaniciGirisi);
	
	printf("%d:%d:%.2lf",kullaniciSaati.saat,kullaniciSaati.dakika,kullaniciSaati.saniye);
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
