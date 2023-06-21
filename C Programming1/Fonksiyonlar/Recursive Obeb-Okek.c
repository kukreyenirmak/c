#include <stdio.h>
#include <string.h>

int recursiveOBEB(int x,int y){
	if(y==0){
		return x;
	}
	
	
	return recursiveOBEB(y,x%y);
	
	
}

int recursiveOKEK(int x,int y)
{
	
	return (x*y)/recursiveOBEB(x,y);
	
	
}



/*
obeb 12 8
     8  4
     4  0  --> 4
     
obeb 16 5
     5  1
	 1  0 --> 1
	 

obob 72 8
     8  0 ---> 8
	 
	 
	 
okek  12 8 ==> 12*8=96
               94/4=24
			   	      


*/








int main(){
	
	printf("OBEB:%d\n",recursiveOBEB(12,8));
	printf("OKEK:%d",recursiveOKEK(12,8));
	return 0;
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
