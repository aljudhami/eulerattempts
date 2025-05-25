#include <iostream>
using std::cout;
using std::cin;

int isPrime(long number){
	if(number==0)
		return 0;
	if(number==1)
		return 0;
	if(number==2)
		return 1;
	if(number%2==0)
		return 0;
	bool isPrime=1;
	for(int i=3; i*i<=number; i+=2){
		if(number%i==0){
			isPrime=0;
			break;
		}
	}
	return isPrime;

}
int main(){
	int counter=1;
	int target=10001, result=0;
	for(long i=3;counter<target;i+=2){
		if(isPrime(i)){
			counter++;
			result=i;
		}
	}

	cout<<result<<std::endl;
}
