#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>



int anagramKontrol(char *str,char *str2)
{
	int *frekansDizisi;
	int *frekansDizisi2;
	char *ptr=str,*ptr2=str2;
	int i;
	
	frekansDizisi=(int*)calloc(26,sizeof(int));
	frekansDizisi2=(int*)calloc(26,sizeof(int));
	
	
	if(strlen(str)!=strlen(str2))
	{
		return 0; // anagram deðil
	}
	
	
	
	while(*ptr!='\0' && *ptr2!='\0')
	{
		
		/*
		abc   a=97 b=98  c=99 d=100 e=101
frekansDizi   0      1     2    3     4

		
		*/
		int indeks=*ptr-'a';
		frekansDizisi[indeks]+=1;
		
		indeks=*ptr2-'a';
		frekansDizisi2[indeks]+=1;
		ptr++;
		ptr2++;
	}
	
	
	for(i=0; i<26; i++)
	{
		printf("%d ",frekansDizisi[i]);
		
	}
	
	printf("\n");
	
	
		for(i=0; i<26; i++)
	{
		printf("%d ",frekansDizisi2[i]);
		
	}
	
}

int main(){

		
   anagramKontrol("abc","abc");
   
   
   
    return 0;
}
