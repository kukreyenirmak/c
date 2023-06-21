#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


int dosyalariKarsilastir(FILE *dosya,FILE *ikinciDosya){
	
	int karakterSayisi;
	int karakterSayisi2;
	fseek(dosya,0,SEEK_END);// ikisini dosyanýn sonuna gönderdim
	fseek(ikinciDosya,0,SEEK_END);
	
	karakterSayisi=ftell(dosya);// son karakter kacinci byte onu ogrendim.
	karakterSayisi2=ftell(ikinciDosya);
	
	printf("Ilk dosya %d adet karakter iceriyor.\n",karakterSayisi);
	printf("Ikinci dosya %d adet karakter iceriyor.\n",karakterSayisi2);

    if(karakterSayisi>karakterSayisi2){
    	printf("Ilk dosyanizin boyutu ikinci dosyanizdan daha buyuktur\n");
    	return ;
	}
    
	else if(karakterSayisi2>karakterSayisi){
		printf("Ikinci dosyanizin boyutu ilk dosyanizdan daha buyuktur\n");
		return ;
	}
	
	else{
		rewind(dosya);// en baþtan karþýlaþtýrma yapmak için
		rewind(ikinciDosya);
		
		
		int ch,ch2;
		
		while(1){
			
			ch=fgetc(dosya);
			ch2=fgetc(ikinciDosya);
			printf("Dosya 1'in karakteri:%c\n",ch);
			printf("Dosya 2'nin karakteri:%c\n",ch2);
		    if(ch==EOF &&ch2==EOF){
		    	break;
		    }
		
		    if(ch!=ch2){
		    	return 0;//karakterler farklý.
			}
		
		}
	}               
      return 1;// tum karakterler ayný
}

int main(){
	
	FILE *ilkDosya=fopen("deneme.txt","r");
	FILE *ikinciDosya=fopen("deneme2.txt","r");
	
	if(ilkDosya!=NULL && ikinciDosya!=NULL)
	{
		
		int sonuc=dosyalariKarsilastir(ilkDosya,ikinciDosya);
		if(sonuc==1){
			printf("\nIki dosya tamamen birbirinin aynisidir.");
		}
		else{
			printf("\nIki dosya birbirinden farklidir.");
		}
		
	}
	
	
	
	
   return 0;
}
