// first apporach 
// #include <iostream>
// #include <algorithm>
//  using namespace std ;
 
//  int main() {
//      int arr[5] = {5,8,1,4,2};
     
//      int n = 5;
//      sort(arr,arr+n);
     
//          cout << arr[2];
     
//      return 0;
//  }

// second approach 
// store first and second largest number and then compare to get third largest number 
//  
#include<iostream>
#include<algorithm>
#include<climits>
 using namespace std;
 
 int main() {
     int a[5] = {9,8,7,6,5};
     int n = 5;
     
     int largest = max(a[0] , a[1]);
     int secLargest = min(a[0] , a[1]);
     int thirdLargest = INT_MIN;
     
     for(int i = 2 ; i < n ;  i ++) {
         if(a[i] > thirdLargest) {
             thirdLargest = a[i];
         }
         if(a[i] > secLargest) {
             thirdLargest = secLargest;
             secLargest = a[i];
         }
         if(a[i] > largest) {
             secLargest = largest;
             largest = a[i];
         }
     }
     cout << "Third Largest Number " << thirdLargest;
 }
