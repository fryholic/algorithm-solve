#include <iostream>

using namespace std;

int main(){
    int A, B;
    
    cin >> A >> B;

    int A_100d = A/100;

    int A_10d = (A-(A_100d*100))/10;

    int A_1d = (A-(A_100d*100+A_10d*10));

    int B_100d = B/100;

    int B_10d = (B-(B_100d*100))/10;

    int B_1d = (B-(B_100d*100+B_10d*10));

    cout << A*B_1d << endl << A*B_10d << endl << A*B_100d << endl << A*B;

    return 0;
}