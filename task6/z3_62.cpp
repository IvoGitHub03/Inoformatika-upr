#include <iostream>
using namespace std;

int main() {
  int arr[15];

  cout << "Wawedete " << 15 << " elementi na masiwa:" << endl;
  for (int i = 0; i < 15; i++) {
    cin >> arr[i];
  }

  cout << "Elementite na masiwa w obraten red:" << endl;
  for (int i = 14; i >= 0; i--) {
    cout << arr[i] << " ";
  }
  cout << endl;
  system("pause");

  return 0;
}
