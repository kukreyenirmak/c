#include <stdio.h>


int kacKereGeciyor(char *str,char arananDeger,char degistirilecekDeger){

int sayac=0;

 char *ptr=str;	
	while(*ptr)
	{
		if(*ptr==arananDeger)
		{
			*ptr=degistirilecekDeger;
			sayac+=1;
		}
		
		
		ptr++;
	}
	
	return sayac;
	
	
}




int main(){
	
	
	char karakterDizisi[]="Ducane Cundioglu";
	int sonuc=kacKereGeciyor(karakterDizisi,'u','*');
	printf("Aradiginiz karakter dizidie %d adet gecmektedir.\n",sonuc);
	puts(karakterDizisi);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
