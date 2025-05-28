#include<iostream>
#include<cmath>
 using namespace std;

int main() {
  int number;
  cin >> number;

  if(number>0) {
    int sqrt_n = sqrt(number);
    int res = sqrt_n * sqrt_n;

    if(res == number) {
      cout << "Perfect Square Number" << endl;
    } else {
      cout << "Not a Perfect Square Number" << endl;
    }
    
  } else {
    cout << "Enter a positive integer value" << endl;
  }
  return 0;
}
