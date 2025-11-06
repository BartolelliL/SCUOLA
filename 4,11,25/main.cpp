#include <iostream>

using namespace std;

int main() {
    int scelta;
    double base, altezza, lato, diagonaleMaggiore, diagonaleMinore, area;

    cout << "Seleziona una delle seguenti figure geometriche:\n";
    cout << "1. Triangolo\n";
    cout << "2. Quadrato\n";
    cout << "3. Rettangolo\n";
    cout << "4. Rombo\n";
    cout << "5. Uscita\n";
    cout << "Scelta: ";
    cin >> scelta;

    if (scelta != 5) {
        switch (scelta) {
            case 1:
                cout << "Base: "; cin >> base;
                cout << "Altezza: "; cin >> altezza;
                area = (base * altezza) / 2;
                cout << "Area del triangolo = " << area << endl;
                break;

            case 2:
                cout << "Lato: "; cin >> lato;
                area = lato * lato;
                cout << "Area del quadrato = " << area << endl;
                break;

            case 3:
                cout << "Base: "; cin >> base;
                cout << "Altezza: "; cin >> altezza;
                area = base * altezza;
                cout << "Area del rettangolo = " << area << endl;
                break;

            case 4:
                cout << "Diagonale maggiore: "; cin >> diagonaleMaggiore;
                cout << "Diagonale minore: "; cin >> diagonaleMinore;
                area = (diagonaleMaggiore * diagonaleMinore) / 2;
                cout << "Area del rombo = " << area << endl;
                break;

            case 5:
                cout << "Uscita dal programma.\n";
                break;

            default:
                cout << "Scelta non valida!\n";
        }

    }

    return 0;
}
