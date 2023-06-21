#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>



   typedef enum{
   	
   	pzt,sali,crs,prs=12,cuma,cts,pzr
   	
	   
}haftaninGunleri;







int main(){
	
 haftaninGunleri gunler; // degisken;
 
 puts("Lutfen haftanin gunlerine karsilik 0-6 arasi bir sayi giriniz:");
 scanf("%d",&gunler);
 
 
 
 switch(gunler){
 	
 	case pzt:
 		
 		
 	case sali:
 		
 		
 	case crs:
 		
 		
 	case prs:
	 
	 
	case cuma:
	  printf("Haftaici.");
	  break;
	 
	 case cts:
	 
	 case pzr:
	 printf("Haftasonu.");
	 break;
	
	 default: 
	 printf("Hatali bir tuslama yaptiniz.");
	 	
}
  





















return 0;
}


