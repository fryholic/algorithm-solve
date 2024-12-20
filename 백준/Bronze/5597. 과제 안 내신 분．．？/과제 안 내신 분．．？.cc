#include <iostream>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int a[30] {0};

    for(int i = 0; i < 28; i++){
        int S;
        cin >> S;
        a[S-1] = S;
    }

    for(int i = 1; i <= 30; i++){
        if(a[i-1]!=i){
            cout << i << '\n';
        }
    }


    return 0;

}