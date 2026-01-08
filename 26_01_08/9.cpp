#include <iostream>
using namespace std;

int main() {

    int N;
    
    cout << "Inserisci un numero N: ";
    cin >> N;

    if (N <= 0) {
        cout << "Errore: N deve essere un numero maggiore di 0." << endl;
        return 1;
    }

    int numero = 1;
    for (int i = 0; i < N; i++) {
        cout << numero << " ";
        numero *= 2;
    }

    return 0;
}