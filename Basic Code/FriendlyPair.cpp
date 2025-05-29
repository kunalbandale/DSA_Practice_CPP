#include <iostream>
using namespace std;

int main() {
  int n1, n2;
  int sum1 = 0, sum2 = 0;
  cin >> n1 >> n2;

  // Find sum of divisors of n1
  for (int i = 1; i <= n1; i++) {
    if (n1 % i == 0) {
      sum1 += i;
    }
  }

  // Find sum of divisors of n2
  for (int j = 1; j <= n2; j++) {
    if (n2 % j == 0) {
      sum2 += j;
    }
  }

  float ratio1 = (float)sum1 / n1;
  float ratio2 = (float)sum2 / n2;

  if (ratio1 == ratio2) {
    cout << "Friendly Pair";
  } else {
    cout << "Not a Friendly Pair";
  }

  return 0;
}
