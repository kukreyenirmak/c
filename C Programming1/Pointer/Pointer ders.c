#include <stdio.h>


void merhabaDunya(){
	
	printf("Merhaba Dunya");
	
	
	
}




int main(){
	
	void (*fonkPtr)(void); //fonksiyon i�aret�isini tan�mlad�m
	fonkPtr=merhabaDunya;
	(*fonkPtr)();
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
