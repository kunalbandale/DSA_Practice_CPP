#include<iostream> 
 using namespace std;

int main() {
  int count;
  int primeNum;
  cin >> primeNum;

  for(int i = 1 ; i<primeNum ; i++) {
    if(primeNum%i==0) {
      count = count+1;
    }
  }

  if(count > 2) {
    cout << "Not a prime number";
  }  else {
    cout << "Prime number";
  }
  return 0;
}