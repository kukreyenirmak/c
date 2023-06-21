#include <stdio.h>
#include <time.h>
#include <string.h>
/*
ANAGRAM KONTROLU FONKSÝYON YARDIMI ÝLE


*/

void sirala(char [],int);
void anagramMi(char [],char[]);

int main(){
	
	char kelime1[20];
	char kelime2[20];
	
	puts("Kelime 1'giriniz");
	gets(kelime1);
    puts("kelime 2'yi giriniz");
    gets(kelime2);
    anagramMi(kelime1,kelime2);
	return 0;
}


void sirala(char kullaniciGirisi[], int karakterSayisi)
{
	int i,j,eleman;
	for(i=1; i<karakterSayisi; i++)
	{
		eleman=kullaniciGirisi[i];
		for(j=i-1; j>=0 && eleman<=kullaniciGirisi[j]; j--)
		{
		kullaniciGirisi[j+1]=kullaniciGirisi[j];
		}
		kullaniciGirisi[j+1]=eleman;
	}
}

void anagramMi(char kelime1[],char kelime2[])
{
	int karakterSayisi1;
	int karakterSayisi2;
	int sorgu=1;
	int i;
	
	karakterSayisi1=strlen(kelime1);
	karakterSayisi2=strlen(kelime2);
	
	if(karakterSayisi1!=karakterSayisi2)
	{
		puts("Anagram degildir.");
	}
	
	else{
		
		sirala(kelime1,karakterSayisi1);
		sirala(kelime2,karakterSayisi2);
		
		for(i=0; i<karakterSayisi1; i++)
		{
			if(kelime1[i]!=kelime2[i])
			{
				sorgu=0;
				break;
			}
			
		}
		
		if(sorgu)
		{
			puts("Anagram.");
		}
		else{
			puts("Anagram degil");
		}
		
		
		
	}
	
	
	
}

