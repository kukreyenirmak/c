#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>


int main(){
	
	char kelime1[20];
	char kelime2[20];
	char eleman;
	int i,j;
	int anagram=1;
	puts("Lutfen ilk kelimeyi giriniz:");
	gets(kelime1);
	
	puts("Lutfen ikinci kelimeyi giriniz:");
	gets(kelime2);
	
	
	if(strlen(kelime1)!=strlen(kelime2))
	{
		
		anagram=0;
		
	}
	else{
		
		for(i=0; i<strlen(kelime1); i++)
		{
			eleman=kelime1[i];
			for(j=i-1; j>=0 && eleman<=kelime1[j]; j--)
			{
				kelime1[j+1]=kelime1[j];
				
			}
			kelime1[j+1]=eleman;
			
			
		}
		
			for(i=0; i<strlen(kelime2); i++)
		{
			eleman=kelime2[i];
			for(j=i-1; j>=0 && eleman<=kelime2[j]; j--)
			{
				kelime2[j+1]=kelime2[j];
				
			}
			kelime2[j+1]=eleman;
			
		}
		
		
		i=0;
		while(kelime1[i]!='\0')
		{
			if(kelime1[i]==kelime2[i])
			{
				anagram=1;
			}
			
			else{
				anagram=0;
				break;
			}
			
			i++;
		}
		
		
		
	}
	
	
	if(anagram)
	{
		printf("%s ve %s birbirinin anagramidir.",kelime1,kelime2);
	}
	else{
				printf("%s ve %s birbirinin anagrami degildir.",kelime1,kelime2);

	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
