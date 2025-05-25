#include <vector>
#include <iostream>
using std::endl;
using std::cout;
using std::vector;

int main(){
    long long int routes;
    const int objects=40;
    const int samples=20;
    const int difference= objects-samples;
    vector<int> denomfactors;
    vector<int> numfactors;

    if (samples>=difference){
        int filler=1;
        while(filler<=difference){
            denomfactors.push_back(filler);
            filler++;
        }
        filler=objects;
        while(filler>samples){
            numfactors.push_back(filler);
            filler--;
        }
    }
    else{
        int filler=1;
        while(filler<=samples){
            denomfactors.push_back(filler);
            filler++;
        }
        filler=objects;
        while(filler>difference){
            numfactors.push_back(filler);
            filler--;
        }
    }
    for(auto &i: numfactors){
        for(auto &j: denomfactors){
            if(!(i%j)){
                i/=j;
                j=1;
            }
        }
    }
    long long int num=1;
    for(auto i: numfactors)
        num*=i;
    long long int den=1;
    for(auto i: denomfactors)
        den*=i;

    routes=num/den;
    cout<<routes;

}
