//Menghitung harga diskon
//Muhammad Irfan Fachrulrozy Hakim
//202010370311019

#include <stdio.h>
#include <stdlib.h>

int main(void){
	int total, N, i;
	for(i = 0; i < 3; i++){
		
	printf(" >>> INFOTECH STORE <<<\n");
	printf("_____________________________________________________________\n\n");
	printf("\n");
		
		printf("Masukkan harga : ");
		scanf("%d", &N);
		total += N;
		
	}
	{
		if(total < 100000){
			printf(" Anda tidak mendapat potongan harga \n");
		} else if ( total >= 100000){
			printf(" Anda mendapat potongan harga 10 persen \n");
			N = total - 10*total/100;
			printf("Rp. %d", N);
		} else if( total >= 300000){
			printf("Anda mendapat potongan harga 20 persen \n");
			N = total - 20*total/100;
			printf("Rp. %d", N);
		} else if( total >= 500000){
			printf("Anda mendapat potongan harga 25 persen \n");
			N = total - 25*total/100;
			printf("Rp. %d", N);
		}
	}
	
	printf("\nTotal harga  		 = Rp. %d\n", total);
	
	printf("\nTotal Diskon  	 = Rp. %d\n", total);
	
	printf("\nTotal Pembayaran   = Rp. %d\n", total);
	
	return 0;
	
}
			 
