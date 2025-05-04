#include<iostream>
 using namespace std;
 
 int main() {
     int arr[] = {1,1,2,2,3,3,3};
     int n = 7;
     int i = 0;
     
     for(int j = 1 ; j<n;j++) {
         if(arr[i] != arr[j]) {
             arr[i+1] = arr[j];
             i++;
         }
         
     }
     for (int k = 0; k <= i; k++) {
     cout << arr[k] << " ";
}

     
     return 0;
 }
