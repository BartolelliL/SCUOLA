#include <iostream>
using namespace std;

int main() {
    int eta1, eta2, eta3;
    cout << "Inserisci l'eta dei tre fratelli: ";
    cin >> eta1 >> eta2 >> eta3;

    int maggiore = eta1;
    if (eta2 > maggiore) maggiore = eta2;
    if (eta3 > maggiore) maggiore = eta3;

    int minore = eta1;
    if (eta2 < minore) minore = eta2;
    if (eta3 < minore) minore = eta3;

    int differenza = maggiore - minore;
    cout << "La differenza di eta tra il maggiore e il minore e': " << differenza << endl;

    return 0;
}