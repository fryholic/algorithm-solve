#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main(){
    cin.tie(NULL);
    ios::sync_with_stdio(false);

    string S;
    cin >> S;

    // a b c d e f g h i j k l m n o p q r s t u v w x y z : 26

    int w[26];
    string dict = "abcdefghijklmnopqrstuvwxyz";

    for(int i = 0; i < 26; i++){
        w[i] = S.find(dict[i]);
        if(w[i] == 4294967295){
            w[i] = -1;
        }
    }

    for(int i = 0; i < 26; i++){
        cout << w[i] << ' ';
    }
    
    return 0;

}