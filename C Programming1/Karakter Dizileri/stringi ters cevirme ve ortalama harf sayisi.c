#include <stdio.h>
#include <string.h>
#include <stdlib.h>




int main(){
	/*
	

char kullaniciGirisi[20];
char geciciKarakter;
int karakterSayisi;
int i;

puts("Lutfen bir isim giriniz:");
gets(kullaniciGirisi);

puts(kullaniciGirisi);

karakterSayisi=strlen(kullaniciGirisi);

printf("karakter sayisi: %d",karakterSayisi);


printf("\nStringimizi tersten yazdiralim.\n");

  /*
  e  m  i  r
  r  i  m  e
  
  
  */

/*


for(i=0; i<karakterSayisi/2; i++)
{
	
	geciciKarakter=kullaniciGirisi[i]; // geciciKarakter = e
	kullaniciGirisi[i]=kullaniciGirisi[karakterSayisi-i-1]; //kullaniciGirisi[i] = r
	kullaniciGirisi[karakterSayisi-i-1]=geciciKarakter;
}


puts("Tersi alinan dizimiz:");
puts(kullaniciGirisi);
*

*/

char cumle[50];
int kelimeSayisi=0, harfSayisi=0,i=0;
puts("Lutfen hesaplanacak olan stringi giriniz:");
gets(cumle);


while(cumle[i]!='\0')
	{
		
		if(cumle[i]==' ')
		{
			kelimeSayisi+=1;
		}
		harfSayisi+=1;
		i++;
		
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
