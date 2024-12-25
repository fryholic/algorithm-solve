#include <iostream>
#include <cmath>
#include <string>


using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int A, B;
    cin >> A >> B;
    if(A>0){
        if(B>=45){
            cout << A << ' ' << B-45;
        }
        else{
            cout << A-1 << ' ' << 60-(45-B);
        }
    }
    else{
        if(B>=45){
            cout << A << ' ' << B-45;
        }
        else{
            cout << "23" << ' ' << 60-(45-B);
        }
    }
    return 0;
}