#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int A, B, C;
  int T;

  //

  cin >> A >> B >> C;
  cin >> T;
  
  //
  
  if(T<=30)
  {
    cout << A;
  }
  else
  {
    int result = 0;
    result += A;
    result += (int)(ceil(((T - 30) / (double)B))) * C;
    cout << result;
  }

  //

  return 0;
}