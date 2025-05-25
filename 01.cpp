/*if we list all the natural numbers below 10 that are multiples of 3 or 5 and summed up these multiples, it's 23. Find the sum of all the multiples of 3 or 5 below 1000*/
#include <iostream>
using std::cout;
using std::endl;
int sumofmulfn(int);

int main(){
	int number=1000, sumofmul=0;
	sumofmul=sumofmulfn(number);
	cout<<sumofmul<<endl;
}
int sumofmulfn(int _num){
	int sum=0;
	for(int i=0; i<_num; i++){
		if(i%3==0 || (i%5==0))
			sum+=i;
	}
/*	for(int i=0; i<sum; i++){
		if((i%3==0) && (i%5==0)){
			sum-=i;
		}
	}*/
	return sum;
}
