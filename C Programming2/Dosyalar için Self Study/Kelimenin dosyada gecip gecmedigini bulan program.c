#include <stdio.h>
#include <stdlib.h>



int kelimeArama(FILE *dosya,char *str){
	
        char kelime[20];
		int kelimeSayisi=0;
		
		while(!feof(dosya)){
			fscanf(dosya,"%s",&kelime);
			kelimeSayisi+=1;
			if(strcmp(kelime,str)==0){
				return kelimeSayisi;
			}
		}	
	
	return -1;
	
	
}



int main(){
	
	
	char arananKelime[20];
	
	FILE *dosya=fopen("deneme.txt","r");
	if(dosya==NULL){
		fprintf(stderr,"Dosya acilirken hata meydana geldi.");
		exit(0);
	}
	
	puts("Hangi kelimeyi aradiginizi giriniz:");
	gets(arananKelime);
	
	int index=kelimeArama(dosya,arananKelime);
		if(index!=-1){
			printf("%s kelimesi dosyanin %d.kelimesidir.",arananKelime,index);
		}
		else{
			printf("%s kelimesi dosyada bulunamadi.",arananKelime);
		}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
