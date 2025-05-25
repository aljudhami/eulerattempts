#include <iostream>
using std::cout;
using std::endl;
int main(){
	int number=4000000;
	int n1=1, n2=2, temp=0;
	long sum=n2;
	while(n2<=number){
		temp=n1;
		n1=n2;
		n2=n1+temp;
		if (n2%2==0)
			sum+=n2;

	}
	cout<<sum<<endl;
	return 0;
}
