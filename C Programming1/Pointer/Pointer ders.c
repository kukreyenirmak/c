#include <stdio.h>


void merhabaDunya(){
	
	printf("Merhaba Dunya");
	
	
	
}




int main(){
	
	void (*fonkPtr)(void); //fonksiyon iþaretçisini tanýmladým
	fonkPtr=merhabaDunya;
	(*fonkPtr)();
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
