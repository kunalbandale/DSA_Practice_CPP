#include<iostream> 
 using namespace std;

int main() {
  int first = 0;
  int second = 1;
  int n=10;
  cout << first << " " << second << " ";
  for(int i = 0 ; i < n ; i++) {
    int newDigit = first + second;
    first = second;
    second = newDigit;
    
    cout << newDigit << " " ;

  }
  
  return 0;
}