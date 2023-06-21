#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>





int anagramKontrol(char *str,char *str2)
{
	
	/*
	 str = abc
	 str2= abc
	 
	        a       b        c
	        1       1        1  0 0 0 0 0 0 
	        1       1        1  0 0 0 0 0 0 
	
	*/
		
	int *frekansDizisi,*frekansDizisi2;
	int i;
	char *ptr=str;
	char *ptr2=str2;
	
	frekansDizisi=(int*)calloc(26,sizeof(int));
	frekansDizisi2=(int*)calloc(26,sizeof(int));
	
	if(strlen(str)!= strlen(str2)){
		return 0; // anagram degildir.
		
	}
	
	while(*ptr!='\0'  && *ptr2!='\0')
	{
		
		int indeks = *ptr-'a';
		frekansDizisi[indeks]+=1;
		indeks=*ptr2-'a';
		frekansDizisi2[indeks]+=1;
		ptr++;
		ptr2++;
		
		
		/*
		   a= 97  b= 98 c=99 d=100 e=101
		    0      1      2    3     4
		
		
		*/
		
		
		
		
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
	
	
	printf("\n");
	
	for(i=0; i<26; i++)
	{
		if(frekansDizisi[i]!=frekansDizisi[i])
        {
        	return 0;// anagram degillerdir.
		}     	
	 		  
	}
      return 1;
      
	
	
	
}




int main(){
	

 if( anagramKontrol("emir","cengiz"))
{
	puts("Girdiginiz iki string birbirinin anagramidir.");
}
else{
	puts("Girdiginiz iki string birbirinin anagrami degildir.");
}





	
	return 0;
}
