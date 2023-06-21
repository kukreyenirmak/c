#include <stdio.h>
#include <stdlib.h>
#include <string.h>






int main(){
	
	
	char *filmListesi[5];
	int i;
	char film[20];
	
	FILE *filmDosyasi;
	
	if((filmDosyasi=fopen("filmDosyasi.txt","w"))==NULL){
		
		fprintf(stderr,"Dosya acilirken bir hata meydana geldi.");
		exit(0);
	}
	
	
	for(i=0; i<5; i++)
	{
		puts("Lutfen girmek istediginiz dizi-film adini girin:");
		gets(film);
		filmListesi[i]=(char*)malloc(sizeof(char)*strlen(film)+1);
		strcpy(filmListesi[i],film);
	}
	
	for(i=0; i<5; i++)
	{
		fprintf(filmDosyasi,"Film-Dizi Adi:%s\n",filmListesi[i]);
	}
	fclose(filmDosyasi);
	return 0;
}
