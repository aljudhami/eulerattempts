#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using std::cout;
using std::endl;
using std::ifstream;
using std::vector;

int main(){

    vector <int> v;

    ifstream inchannel ("08_numbers.txt");
    char ch;
    while(inchannel.get(ch))
        v.push_back(ch-'0');
    inchannel.close();

    long long int result =1, temp=1;

    for(int i=0; i<v.size()-13;i++){
        for(int j=0; j<13; j++){
            if(v.at(i+j)==0){
                i+=j;
                continue;
            }
            else{
                temp*=v.at(i+j);
            }
        }
        if(temp>result)
            result=temp;
        temp=1;
    }
    cout<<endl<<result<<endl;
}
