#include <stdio.h>
#include <string.h>
#include <time.h>





int main(){
	/*
	STRLEN : Gönderdiðiniz stringin karakter uzunluðunu size döner
	string : emir------> 4 adet karakter var.(NULL karakteri dikkate almaz)
	
	STRCPY: Gönderdiðiniz ikinci stringi,ilkine kopyalar
	STRCAT: Gönderdiðiniz ikinci stringi birincinin sonuna ekler
	
	STRCMP: Gönderdiðiniz iki stringi karsilastirir.
	
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
