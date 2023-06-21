#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


int main(){
	/*
	
	char kullaniciGirisi[20];
	char degisecekKarakter,degistirilecekKarakter;
	int i=0,karakterSayisi=0;
	
	puts("Lutfen girmek istediginiz stringi yaziniz:");
	gets(kullaniciGirisi);
	
	puts("Hangi harfi degistirmek istiyorsunuz");
	scanf("%c",&degisecekKarakter);
	
	puts("Hangi harfle degistirmek istiyorsunuz:");
	fflush(stdin);
	scanf("%c",&degistirilecekKarakter);
	
	while(kullaniciGirisi[i]!='\0')
	{
		if(kullaniciGirisi[i]==degisecekKarakter)
		{
			karakterSayisi++;
			kullaniciGirisi[i]=degistirilecekKarakter;
		}
		i++;
	}
	
	puts(kullaniciGirisi);
	printf("%d adet %c karakteri , %c ile degistirildi",karakterSayisi,degisecekKarakter,degistirilecekKarakter);
	*/
	
	int kontrol=0;
	char kelime[20];
	char kontrol_kelime[20];
	int i;
	int karakterSayisi;
	char gecici;
	puts("Palindrom kontrolu icin bir kelime giriniz:");
	gets(kelime);
	
	strcpy(kontrol_kelime,kelime);
	

	karakterSayisi=strlen(kelime);

     
     for(i=0; i<karakterSayisi/2; i++)
	{
		gecici=kelime[i];
		kelime[i]=kelime[karakterSayisi-i-1];
		kelime[karakterSayisi-i-1]=gecici;
	}
	
	
 i=0;
	
	while(kelime[i]!='\0')
	{
		if(kelime[i]==kontrol_kelime[i])
		{
			kontrol=1;
		}
		else{
			kontrol=0;
			break;
		}
		
		
		i++;
	}
	
	
	
	if(kontrol)
	{
		printf("Girilen %s bir palindromdur",kelime);
	}
	else{
		printf("Girilen %s bir palindrom degildir.",kelime);
	}
	
	
	
	
	
	
	
	
	return 0;
}
