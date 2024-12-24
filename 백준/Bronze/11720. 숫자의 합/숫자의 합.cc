#include <iostream>
#include <cmath>
#include <string>


using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int N;
    string M;
    cin >> N;
    cin >> M;
    int sum = 0;

    for(int i=0; i<N; i++){
        
        sum += (M[i] - '0');
        
    }

    cout << sum;
}