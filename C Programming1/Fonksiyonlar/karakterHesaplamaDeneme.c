#include <stdio.h>
#include <time.h>
#include <string.h>




int karakterSayisi(char []);
int main(){
	
	char karakter[50];
	puts("Lutfen bir karakter dizisi giririniz:");
	gets(karakter);
	
	printf("Girilen Stringde %d adet karakter vardir",karakterSayisi(karakter));
	
	
	
	
	
	return 0;
}




int karakterSayisi(char kullaniciGirisi[])
{

  int i;
  int j;
  char karakterler[26];
  
  for(i=0; i<26; i++)
  {
  	karakterler[i]='$';
  }

    i=0;
   
   while(kullaniciGirisi[i]!='\0')
   {
   	j=0;
   	while(1)
   	{
   		if(karakterler[j]=='$')
   		{
   		karakterler[j]=kullaniciGirisi[i];
		   break;	
		}
   		else if(karakterler[j]==kullaniciGirisi[i])
   		{
   		  break;
		}
   		j++;	
	}
   	 i++;
   	
   }

  for(i=0; i<26; i++)
   {
   	if(karakterler[i]=='$')
   	{
   		break;
	   }
   }

return i;

	
	
	
	
	
	
	
}



