#include <stdio.h> 
#include <string.h>

int FirstFactorial(int num) {
  
  int sabit=1;
  int i;
  
  for(i=1; i<=num; i++){
     sabit*=i;

  }
  
  return sabit;

}

int main() { 
   
  int sonuc;
  int sayi;
  printf("Input:");
  scanf("%d",&sayi);
  
  sonuc=FirstFactorial(sayi);
  printf("Output:%d",sonuc);

  return 0;
    
}
