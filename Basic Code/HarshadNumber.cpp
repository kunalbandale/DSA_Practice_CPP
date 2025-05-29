#include<iostream>
 using namespace std;

int main() {
  int number;
  cin >> number;
  int temp = number;
  int sum = 0;

  while(temp > 0) {
    sum += temp % 10;
    temp /= 10;
  }
  if(number % sum == 0) {
    cout << "Harshad Number" << endl;
  } else {
    cout << "Not a Harshad Number" << endl;
  }
  
  return 0;
}
