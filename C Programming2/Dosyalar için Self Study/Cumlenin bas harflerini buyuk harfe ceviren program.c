#include <stdio.h>
#include <stdlib.h>




void buyukHarfeCevir(FILE *dosya,FILE *dosya2){
	
	int ch;
	ch=fgetc(dosya);
	fputc(toupper(ch),dosya2);
	
	while(1){
		
		ch=fgetc(dosya);
		
		if(ch==EOF){
			break;
		}
		
		fputc(ch,dosya2);
		if(ch=='.'){
			ch=fgetc(dosya);
		    if(ch==EOF){
		    	break;
			}
		
		  fputc(toupper(ch),dosya2);
		  
		}
		
		
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
}








int main(){
	
	
	FILE *ilkDosya=fopen("deneme.txt","r");
	FILE *ikinciDosya=fopen("deneme2.txt","w");
	
	if(ilkDosya==NULL || ikinciDosya==NULL){
		
		fprintf(stderr,"Dosyalar acilirken bir hata meydana geldi.");
		exit(0);
	}
	
	
	buyukHarfeCevir(ilkDosya,ikinciDosya),
	fclose(ilkDosya);
	fclose(ikinciDosya);
	
	return 0;
}
