#include <iostream>
 using namespace std;

int main() {
  int number;
  int sum = 0;
  cin >> number;

  for(int i = 1 ; i < number ; i++) {
    if(number%i==0) {
      sum += i;
    }
    
  }
  // cout << sum;
  if(sum > number) {
    cout << "Abundant Number";
  } else {
    cout << "Not a Abundant Number";
  }
  
  return 0;
}
