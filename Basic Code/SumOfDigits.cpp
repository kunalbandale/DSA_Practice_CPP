#include <iostream>
using namespace std;

int main()
{
    int sum = 0 , num;
    cin >> num;
    // num % 10
    // num / 10

    while(num > 0) {
        int digit = num%10;
        sum = sum + digit;
        num = num / 10;
    }
    cout << sum ;
    
return 0;
}
