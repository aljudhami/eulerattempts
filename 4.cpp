//find the largest palindrome made from the product of two three digit numbers!
#include <iostream>
using std::cout;
using std::endl;

int main(){
	int i, j, product;
	int largest=0;
	for(i=999; i>100;i--){
		for(j=999; j>100; j--){
			product=i*j;
			if(product/100000){
				if(((product/100000)==(product%10))&&(((product/10000)-(product/100000)*10)==((product%100)/10))&&(((product/1000)%10)==((product%1000)/100))){
					if(product>largest)
						largest=product;
				}

			}
		}
	}
	cout<<"largest: "<<largest<<endl;	
	return 0;
}

