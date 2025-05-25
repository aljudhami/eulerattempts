#include <iostream>
using std::cout;
using std::endl;

int main(){
    int factors=0;

    long long int number=0;
    for(long int i=1; factors<=500;i++){
        number+=i;
        factors=0;
        for(int j=1; j*j<=number; j++){
            if(number%j==0){
                if(j*j==number)
                    factors++;
                else
                factors+=2;
            }
        }
    }
    cout<<number;

}
