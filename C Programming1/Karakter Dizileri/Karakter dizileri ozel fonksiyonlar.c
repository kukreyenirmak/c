#include <stdio.h>
#include <string.h>
#include <time.h>





int main(){
	/*
	STRLEN : Gönderdiğiniz stringin karakter uzunluğunu size döner
	string : emir------> 4 adet karakter var.(NULL karakteri dikkate almaz)
	
	STRCPY: Gönderdiğiniz ikinci stringi,ilkine kopyalar
	STRCAT: Gönderdiğiniz ikinci stringi birincinin sonuna ekler
	
	STRCMP: Gönderdiğiniz iki stringi karsilastirir.
	
	birbirleriyle tamamen aynilarsa 0 döner
	
	
	*/
	
	
	char isim[20];
	char isim2[20];
	
	puts("Lutfen bir isim giriniz:");
	gets(isim);
	puts("Lutfen bir isim giriniz:");
	gets(isim2);
	
	int karakterSayisi=strlen(isim);
	
	printf("%s stringi %d adet karakter icermektedir.\n",isim,karakterSayisi);
	
	//strcpy(isim2,isim);
	
	strcat(isim2,isim);
	
		printf("%s stringi %d adet karakter icermektedir.\n",isim2,karakterSayisi);

	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
