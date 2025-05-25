#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
struct longestchainer{
    int chain;
    int number;
};

int main(){
    int i;
    int chain_length=0;
    long long int longestchainnumber;
    longestchainer l;
    l.chain=0;
    l.number=1;
    for(i=2; i<1000000; i++){
        chain_length=1;
        longestchainnumber=i;
        while(longestchainnumber!=1){
            if(longestchainnumber%2){
                longestchainnumber=3*longestchainnumber+1;
            }
            else{
                longestchainnumber/=2;
            }
            chain_length++;
        }
        if(chain_length>l.chain){
            l.number=i;
            l.chain=chain_length;
        }
    }
    cout<<l.chain<<endl;
    cout<<l.number<<endl;
}
