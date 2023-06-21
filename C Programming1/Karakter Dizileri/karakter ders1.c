#include <stdio.h>





int main(){
	
	
	char isim[20];
	scanf("%s",isim);
	printf("%s\n",isim);
	
	printf("%d byte",sizeof(isim));
	/* 'o' 'g' 'u' 'n' '/0'  */
	// null karakter dizinin bittiðini temsil eder
	
	
	char isimler[5][4]={"emir","ali","ayse","veli","deli"};
	
	
	printf("%s",isimler[1][1]);

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
