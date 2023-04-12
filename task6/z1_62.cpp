#include <iostream>
//using namespace std;

int main() 
{
    int numbers[6];
    int min_number, min_index;

   
    for (int i = 0; i < 6; i++) 
    {
        cout << "Wawedi chislo" << i+1 << ": ";
        cin >> numbers[i];
    }

   
    min_number = numbers[0];
    min_index = 0;
    for (int i = 1; i < 6; i++) 
    {
        if (numbers[i] < min_number) 
        {
            min_number = numbers[i];
            min_index = i;
        }
    }

    
    cout << "Min chislo e " << min_number << " negowiq indeks e " << min_index << "." << endl;
    system("pause");

    return 0;
}
