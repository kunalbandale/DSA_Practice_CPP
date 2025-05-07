#include<iostream>
#include<algorithm>
 using namespace std;
 
 int main() {
     int maxi;
     int count = 0;
     
     int arr[9] = {1,1,0,1,1,1,0,1,1};
     int n = 9;
     
     for(int i = 0 ; i < n ; i++) {
         if(arr[i] == 1) {
             count++;
             maxi=max(maxi,count);
         } else {
             count = 0;
         }
         
     }
     
         cout << maxi;
     return 0;
 }
