#include <stdio.h>
#include <string.h>
#include <time.h>


void boslukKarakterSay(char *str,int *boslukSayisi)
{
	char *ptr=str;
	
	while(*ptr!='\0')
	{
		if(*ptr == ' ')
		{
			*boslukSayisi+=1;
		}
		ptr++;// adres arttýrmasý yapacaðým, bir sonraki karakter için.
	}
	
	// str-->  how i met your mother
	// ptr-->  h
}





void myStrlen(char *str,int *karakterSayisi)
{
	char *ptr=str;
	while(*ptr!='\0')
	{
		*karakterSayisi+=1;
		ptr++;
	}
}


void tersiniYazdirma(char *str)
{
	int karakterSayisi=0;
    myStrlen(str,&karakterSayisi);
    printf("String %d adet karakter icermektedir.\n",karakterSayisi);
    char *ptr=str+karakterSayisi-1;
	
	while(ptr>=str)
	{
		
		printf("%c",*ptr);
		ptr--;
	}
}


void myStrCmp(char *str, char *str2)
{
	char *p1=str;
	char *p2=str2;
	
	
	while(*p1!='\0' && *p2!='\0')
	{
		if(*p1==*p2)
		{
			p1++;
			p2++;
		}
		
		else if(*p1>*p2)
		{
			return 1; // alfabetik olarak p1 deðerim p2 den sonra geliyor.
		}
		
		else{
			return 2;
		}
		
		
	}
	
	if(strlen(p1)==strlen(p2))
	{
		return 0; // stringler birbirleriyle tamamen ayni.
	}
	
	
	else if(strlen(p1)>strlen(p2))
	{
		return 1;
	}
	
	else{
		return 2;
	}
	
}




int main(){
	
	
	char *kullaniciGirisi="muhendis oluyorum";
    int boslukSayisi=0;
	//boslukKarakterSay(kullaniciGirisi,&boslukSayisi);	
	
	//printf("Girdiginiz string %d adet bosluk karakteri icermektedir.",boslukSayisi);
	tersiniYazdirma(kullaniciGirisi);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
