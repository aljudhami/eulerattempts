#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;

int main(){
    int a, b, c;
    for(int i=1; i<999; i++){
        for(int j=1; j<999; j++){
            for(int k=2; k<999; k++){
                if(i+j+k==1000)
                    if(i*i+j*j==k*k){
                        a=i;
                        b=j;
                        c=k;
                    }
            }
        }
    }
    cout<<"a: "<<a<<endl<<"b: "<<b<<endl<<"c: "<<c<<endl;
    cout<<a*b*c;

}
