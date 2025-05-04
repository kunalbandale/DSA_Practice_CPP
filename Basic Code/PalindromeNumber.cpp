#include<iostream> 
 using namespace std;

int main() {
  int rev , n ;
  cin >> n;
  cout << n;
  int original = n;
  

  while(n>0) {
    int digit = n%10;
    rev = rev * 10 + digit;
    n = n/10;
  }
  
  if(n==original) {
    cout << "palindrome number";
  } else {
    cout << "Not a palindrome number";
  }
  return 0;
}