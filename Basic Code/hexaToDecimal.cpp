#include<iostream>
#include<cmath>
#include<cstring>
 using namespace std;

int main() {
  char hexa[100];
  int sum = 0 , i , j=0,len;
  cout << "Enter Any Hexa Number";
  cin >> hexa;
  len = strlen(hexa);

  for(i=len-1;i>=0;i--) {
    if(hexa[i] >= '0' && hexa[i] <= '9') {
      sum =sum + (hexa[i]-48) * pow(16,j);
      j++;
    } else if(hexa[i] >= 'A' && hexa[i] <= 'F') {
    sum = sum + (hexa[i] - 55) * pow(16,j);
    j++;
    }
  }
  cout << sum << endl;
  

  
  
  return 0;
}
