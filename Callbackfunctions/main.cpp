#include<iostream>
using namespace std;

typedef int (*CallbackType)(int);

int square_CB(int x){

    return x*x;
}

int cubeCB(int x){

    return x*x*x;
}

int mathCB(int num, CallbackType CB){
    return CB(num);
}

int main(){
    int val=5;
    cout<<"Simple math program- initial value "<<val<<endl;
    cout<<"Squared: "<<mathCB(val, &square_CB)<<endl;
    cout<<"Cubed: "<< mathCB(val, &cubeCB)<<endl;
}