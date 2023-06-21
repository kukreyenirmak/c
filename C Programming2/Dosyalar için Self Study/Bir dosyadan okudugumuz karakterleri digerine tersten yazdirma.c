#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void tersAktar(FILE *dosya,FILE *ikinciDosya){
	
	int karakterSayisi,i;
	fseek(dosya,0,SEEK_END);//dosya sonuna geldik
	
	karakterSayisi=ftell(dosya);
	
	printf("Karakter Sayisi:%d\n",karakterSayisi);
	
	fseek(dosya,-1,SEEK_END);//son harfimdeyim.
	
	for(i=2; i<=karakterSayisi+1; i++){
		
		int ch=fgetc(dosya);
		printf("%c ",ch);
		fputc(ch,ikinciDosya);
		fseek(dosya,-(i),SEEK_END);
	}
	
	printf("Tum icerik basariyla aktarildi.");
	
	
	
	
	
	
	
	
}






int main(void){
	
	
	FILE *ilkDosya=fopen("deneme.txt","r");
	FILE *ikinciDosya=fopen("deneme2.txt","w");
	
	if(ilkDosya==NULL || ikinciDosya==NULL){
		
		
		fprintf(stderr,"Dosyalar acilirken bir hata meydana geldi.");
		exit(0);
	}

	
	 tersAktar(ilkDosya,ikinciDosya);
	
	
	
	
	
	
	
	
	
	
	return 0;
}
