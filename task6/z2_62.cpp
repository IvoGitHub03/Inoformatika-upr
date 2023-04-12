#include <iostream>
using namespace std;

int main() {
    const int SIZE = 10;
    double arr[SIZE];
    double threshold;
    int count = 0;


    for (int i = 0; i < SIZE; i++) {
        cout << "Vuvedete element" << i+1 << ": ";
        cin >> arr[i];
    }


    cout << "Vuvedi chislo ";
    cin >> threshold;

    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > threshold) {
            count++;
        }
    }

    cout << "Elementi po golemi ot " << threshold << ", ??: ";
    for (int i = 0; i < SIZE; i++) {
        if (arr[i] > threshold) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    
    cout << "Broi na elementite po-golemi ot" << threshold << ": " << count << endl;
     system("pause");
     return 0;
}
