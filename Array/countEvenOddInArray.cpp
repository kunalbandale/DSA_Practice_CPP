#include <iostream>
 using namespace std;

int main() {
    int arr[] = {1,5,8,2,4,6};
    int n = 6;
    int odd = 0;
    int even = 0;
    
    for(int i = 0 ; i < n ; i++) {
        if(arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    
        cout << even <<  " " ;
        cout << odd << endl <<" ";
    

    return 0;
}
