#include<bits/stdc++.h>
 using namespace std;
 
 int largestElement(vector<int> &arr , int n) {
     int largest = arr[0];
     for(int i = 0 ; i < n ; i++) {
         if(arr[i] > largest) {
             largest = arr[i];
         }
     }
     return largest;
 }
 
 int main() {
     vector<int> arr = {4,6,1,3,8,98,0};
     int n = arr.size();
     
     int maxVal = largestElement(arr,n);
     
     cout << "Largest Element in an arry is " << maxVal << endl;
     
     
     return 0;
 }
