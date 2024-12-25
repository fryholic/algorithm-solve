#include <iostream>
#include <cmath>
#include <string>


using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int A[9];
    int temp, index = 0;
    for(int i = 0; i < 9; i++){
        cin >> A[i];
    }
    temp = A[0];
    for(int i = 0; i < 9; i++){
        if(A[i] > temp){
            temp = A[i];
            index = i;
        }
    }
    cout << temp << '\n' << index+1;
    return 0;
}