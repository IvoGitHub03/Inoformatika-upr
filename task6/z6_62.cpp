#include <iostream>
using namespace std;

const int ROWS = 5;
const int COLS = 7;

int main() {
  int arr[ROWS][COLS];

  cout << "Wawedete " << ROWS * COLS << " elementa na masiwa:" << endl;
  for (int i = 0; i < ROWS; i++) {
    for (int j = 0; j < COLS; j++) {
      cin >> arr[i][j];
    }
  }

  cout << "Elementa na masiwa po koloni:" << endl;
  for (int j = 0; j < COLS; j++) {
    int sum = 0;
    for (int i = 0; i < ROWS; i++) {
      sum += arr[i][j];
    }
    cout << "Suma na kolona" << j + 1 << ": " << sum << endl;
  }
  system("pause");
  return 0;
}
