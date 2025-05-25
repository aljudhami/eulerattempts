#include <iostream>
#include <vector>
#include <cstdint>

using std::cout;
using std::endl;
using std::vector;

int main(){
    vector <char> number{'1'};
    char carry;
    int i, j, digit;
    for(i=0; i<1000; ++i){
        carry=0;
        for(j=0; j<number.size(); ++j){
            digit=(number[j]-'0')*2+carry;
            number[j]=(digit%10)+'0';
            carry=digit/10;
        }
        if(carry)
            number.push_back(carry+'0');
    }
    int sum=0;
    for(int l=number.size()-1; l>=0; l--){
        sum+=number[l]-'0';
    }
    cout<<sum;
}
