#include <iostream>
using namespace std;

int main() {
  float arr[15];

  cout << "Wawedete " << 15 << " elementa na masiwa:" << endl;
  for (int i = 0; i < 15; i++) {
    cin >> arr[i];
  }

  cout << "Wseki treti element na masiwa s indeksi stojnost:" << endl;
  for (int i = 2; i < 15; i += 3) {
    cout << "Indeks: " << i << " Stojnost: " << arr[i] << endl;
  }
  system("pause");
  return 0;
}
