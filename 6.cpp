#include <iostream>
using std::cout;
using std::endl;

int main(){
	int SumofSq=0, SqofSum=0;
	for(int i=0; i<=100; i++){
		SumofSq+=i*i;
		SqofSum+=i;
	}
	SqofSum*=SqofSum;
	cout<<SqofSum-SumofSq;
}

