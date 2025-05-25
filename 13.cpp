#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std::endl;
using std::cout;
using std::vector;
using std::string;
using std::ifstream;

int main(){

    vector <string> numberlist;
    ifstream inchannel ("numbers.txt");
    if(!inchannel.is_open()){
        cout<<"File wasn't open properly";
        return 1;
    }
    string temp;
    while(getline(inchannel, temp)){
        numberlist.push_back(temp);
    }
    inchannel.close();
    string result;
    int carry=0, i, digit;
    for(i=numberlist[0].size()-1; i>=0; i--){
        digit=0;
        for(int j=0; j<numberlist.size();j++){
            digit+=(numberlist[j][i]-'0');
        }
        digit+=carry;
        result+=(digit%10)+'0';
        carry=digit/10;
    }
    cout<<carry;
    for(int f=result.size()-1; f>=0; f--){
        cout<<result[f];
    }
    cout<<endl;
}
