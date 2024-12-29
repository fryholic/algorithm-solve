#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string V;
    getline(cin, V);

    if(V.empty()) {
        cout << "0"; 
        return 0;
    }
    int space_count = 1;

    for(int i = 0; i < V.length(); i++){
        if(V[i] == ' ') space_count++;
    }

    if(V == " "){
        cout << "0";
        return 0;
    }

    if(V[0] == ' '){
        if(V.size() == 1) {
            cout << "0";
            return 0;
        }
        space_count--;
    }

    if(V[V.size()-1] == ' ') {
        space_count--;
    }

    
    cout << space_count;
    
    return 0;
}