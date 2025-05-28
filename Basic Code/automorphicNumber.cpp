#include<iostream>
 using namespace std;

int main() {
  int number;
  cin >> number;

  int sq = number * number;

  int lastD = sq % 10;
  if(lastD == number){
    cout << "Automorphic Number" << endl;
  } else {
    cout << "Not a Automorphic Number";
  }
  return 0;
}
