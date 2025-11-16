#include <iostream>

using namespace std;

int main() {
    int numeri[10];

    for (int i = 0; i < 10; i++) { 
        cout << "Inserisci un numero intero: ";
        cin >> numeri[i];
    }

    for (int i = 0; i < 10 - 1; i++) {
        for (int j = 0; j < 10 - i - 1; j++) {
            if (numeri[j] > numeri[j + 1]) {
                int temp = numeri[j];
                numeri[j] = numeri[j + 1];
                numeri[j + 1] = temp;
            }
        }
    }

    cout << "Array ordinato: ";
    for (int i = 0; i < 10; i++) {
        cout << numeri[i] << " ";
    }
    cout << endl;

    cout << "Numero massimo: " << numeri[0] << endl;
    cout << "Numero minimo: " << numeri[9] << endl;

    return 0;
}