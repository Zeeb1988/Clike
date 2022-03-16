#include <stdio.h>
#include <math.h>

void Prime(int number_a, int number_b);

int main()

{
	
       unsigned int number_a, number_b;
	
	scanf("%d %d", &number_a, &number_b);//输入所求素数的区间 
	
    Prime(number_a,number_b);
	
	return 0;
}



void Prime(int number_a,int number_b) {
   
    int i, x;
    int isPrimeNumber;
    
	for( i=number_a; i<number_b; i++ ) {  //遍历 number_a 到 number_b 
		
	if( i == 1 || (i%2 == 0 && i!=2) ) {  // 剔除非2的偶数 
		isPrimeNumber = 0;
	}else{
		
		isPrimeNumber = 1;
		
	}
	for( x = 3; x<sqrt(i); x+=2 ) {    //继续剔除非素数 
		
		if( i % x == 0 ) {
			
			isPrimeNumber = 0;
			break;
		}
	}
	
	if( isPrimeNumber == 1 ) {
	
	printf(" %d ", i);
}


	}
}
