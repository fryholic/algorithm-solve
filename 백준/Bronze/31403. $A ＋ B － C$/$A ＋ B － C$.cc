#include <iostream>
#include <cmath>
#include <string>


using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    
    string A, B, C;
    cin >> A >> B >> C;
    cout << stoi(A)+stoi(B)-stoi(C) << '\n';
    string D = A + B;
    int E = stoi(D) - stoi(C);
    cout << E;
    return 0;
}