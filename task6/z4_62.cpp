#include <iostream>
using namespace std;

int main() {
  int arr[20];

  cout << "Wawedete " << 20 << " elementi na masiwa:" << endl;
  for (int i = 0; i < 20; i++) {
    cin >> arr[i];
  }

  int count = 0;
  int sum = 0;

  for (int i = 0; i < 20; i++) {
    if (arr[i] > 0) {
      count++;
      sum += arr[i];
    }
  }
  cout << "Broj na elementi po golemi ot 0: " << count << endl;
  cout << "Suma na elementi po golemi ot 0: " << sum << endl;
  system("pause");
  return 0;
}
