#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    int size=10;
    int line=1;
    int pos=1;
    int center=(size);
    cout<< center<< endl;

    while (line<=size){

    while (pos<center-line+1){
        cout << " ";
        pos++;
    }
    while (pos<=center+line-1){
        cout << "*";
        pos++;
    }

    line++;
    pos=1;
    cout<< endl;
    }

}
