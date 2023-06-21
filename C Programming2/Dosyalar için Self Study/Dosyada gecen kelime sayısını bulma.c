#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int kelimeSayisiHesapla(FILE *dosya){
	
	//ogun birinci suan bu dersi cekiyor.Izlemenizi tavsiye ederim.
	int kelimeSayisi=0;
	int ch;
	
	do{
		
		ch=fgetc(dosya);
		if(ch==' '|| ch=='.'){
			kelimeSayisi+=1;
		}
	}while(ch!=EOF);
	return kelimeSayisi;
}





int main(){
	
	
	FILE *dosya=fopen("deneme.txt","r");
	
	if(dosya==NULL){
		
		fprintf(stderr,"Dosya acilirken bir hata meydana geldi.");
	    exit(0);
	}
	
	
	int kelimeSayisi=kelimeSayisiHesapla(dosya);
	printf("Dosya %d adet kelime icermektedir.",kelimeSayisi);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
