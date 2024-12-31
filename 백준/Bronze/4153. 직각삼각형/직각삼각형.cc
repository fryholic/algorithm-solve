#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    int A[3];

    while(1){
        cin >> A[0] >> A[1] >> A[2];
        int temp;
        if(A[0] == 0 && A[1] == 0 && A[2] ==0){
            break;
        }
        
        for(int i = 0; i < 3; i++){
            for(int j = 0; j < 2; j++){
                if(A[j+1] > A[j]){
                    temp = A[j+1];
                    A[j+1] = A[j];
                    A[j] = temp;
                }
            }
        }

        if(pow((double)A[0], 2) == pow((double)A[1], 2) + pow((double)A[2], 2)){
            cout << "right" << '\n';
        }
        else{
            cout << "wrong" << '\n';
        }


        

    }

    return 0;

}