#include <iostream>


using namespace std;

int factorial(unsigned int N){
    if(N<=0){
        return 1;
    }
    return N*factorial(N-1);
}


int main(){
    unsigned int A;
    
    cin >> A;
    
    if(A==0){
        cout << 1;
    }
    else if(A==1){
        cout << 1;
    }
    else if(A>=2){
        cout << factorial(A);
    }
    return 0;
}