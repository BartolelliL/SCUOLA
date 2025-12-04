#include <iostream>
using namespace std;

int main() {
    double a, b;

    cout << "Inserisci il valore di a: ";
    cin >> a;
    cout << "Inserisci il valore di b: ";
    cin >> b;

    if (a == 0) {
        if (b == 0) {
            cout << "L'equazione ha infinite soluzioni." << endl;
        } else {
            cout << "L'equazione non ha soluzioni." << endl;
        }
    } else {
        double x = -b / a;
        cout << "La soluzione dell'equazione e': x = " << x << endl;
    }

    return 0;
}