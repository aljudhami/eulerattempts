/*what is the largest prime factor of 600851475143*/
#include <iostream>

int main(){
	long int number = 600851475143;
	long factor=2;
	while(number!=1){
		if(number%factor==0){
			number/=factor;
		}
		else{
			std::cout<<factor<<std::endl;
			factor++;
		}
		if(number==1){
			std::cout<<std::endl;
			std::cout<<std::endl;
			std::cout<<factor;
		}
	}
	
	return 0;
}
