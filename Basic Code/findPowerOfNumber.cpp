#include<iostream> 
 using namespace std;

int main() {
  int  result = 1 , base , expo;
  cin >> base >> expo;

  for(int i = 0; i<expo;i++){
      result *= base;
      }
   cout << result;

  
}