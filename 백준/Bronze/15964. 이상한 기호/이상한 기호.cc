#include <iostream>
#include <string>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    int A, B;
    cin >> A >> B;

    int C = (A+B)*(A-B);
    cout << C;

    return 0;
}