//the smallest number that can be divided by each of the numbers from 1 to 20
#include <iostream>
int main(){
	for(int i=2520; ;i+=20){
		if((i%20==0)&&(i%19==0)&&(i%17==0)&&(i%16==0)&&(i%13==0)&&(i%11==0)&&(i%9==0)&&(i%7==0)){
			std::cout<<i<<std::endl;
			break;
		}	
	}
}

