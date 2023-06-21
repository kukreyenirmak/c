#include <stdio.h>

/*
SWÝTHC-CASE 
*/





int main(){
	/*
	int sayi=5;
	
	switch(sayi){
		
		
	case 0:
		printf("0\n");
		break;
		
	case 1:
	   printf("1\n");
	   break;
	  case 2:
	  printf("2\n");
	  break;
	  case 3:
	  printf("3\n");
		break;
		
		default:
		printf("Yanlis bir deger girdiniz.\n");
		
	}
	
	
	*/
	
	/*
	int sayi1,sayi2;
	char islem;
	int  sonuc;
	printf("Lutfen gireceginiz ifadeyi(sayi/islem/sayi) seklinde giriniz: ");
	fflush(stdin);
	scanf("%d%c%d",&sayi1,&islem,&sayi2);
	
	
	switch(islem){
		
		case '+':
		sonuc=sayi1+sayi2;
		break;
		case '-':
		sonuc=sayi1-sayi2;
		break;
		case '*':
			sonuc=sayi1*sayi2;
		break;
			
	    case '/':
	    	sonuc=sayi1/sayi2;
		break;
	    
		
		case '%':
	    	sonuc=sayi1%sayi2;
		break;
			
	    	
	    default:
		printf("Hatalý bir islem girdiniz:");
			
	}
	  
	   printf("Girdiginiz Sayilara gore sonuc: %d",sonuc);	
	
	
	*/
	int haftaninGunu;
	
	printf("Lutfen 1-7 arasinda bir haftanin gun degerini giriniz:");
	scanf("%d",&haftaninGunu);
	
	
	
	
    switch(haftaninGunu){
    	
    	case 1:
    		
    	case 2:	
    	
        case 3:	

    	case 4:	
    	
		case 5:	
             printf("Haftaici!\n");
             break;
    	case 6:	

    	case 7:	
            printf("Haftasonu!\n");
            break;
		default:
    	printf("Yanlis bir deger girdiniz!");
    	
    	
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
