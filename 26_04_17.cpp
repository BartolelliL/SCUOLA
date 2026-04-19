#include <iostream>
using namespace std;

int main() {
    int scelta;

    do {
        cout << "\n--- MENU ---\n"
             << "5. Matrice diagonali\n"
             << "6. Matrice righe pari\n"
             << "7. Matrice colonne dispari\n"
             << "8. Reparti supermercato\n"
             << "0. Esci\n"
             << "Scelta: ";
             
        cin >> scelta;

        switch (scelta) {

        case 5: {
            int N, m[100][100];
            cin >> N;

            for (int i = 0; i < N; i++)
                for (int j = 0; j < N; j++)
                    m[i][j] = (i == j || i + j == N - 1) ? 1 : 0;

            for (int i = 0; i < N; i++) {
                for (int j = 0; j < N; j++)
                    cout << m[i][j] << " ";
                cout << endl;
            }
            break;
        }

        case 6: {
            int r, c, m[100][100];
            cin >> r >> c;

            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    m[i][j] = (i % 2 == 0);

            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++)
                    cout << m[i][j] << " ";
                cout << endl;
            }
            break;
        }

        case 7: {
            int r, c, m[100][100];
            cin >> r >> c;

            for (int i = 0; i < r; i++)
                for (int j = 0; j < c; j++)
                    m[i][j] = (j % 2 != 0);

            for (int i = 0; i < r; i++) {
                for (int j = 0; j < c; j++)
                    cout << m[i][j] << " ";
                cout << endl;
            }
            break;
        }

        case 8: {
            int n;
            cin >> n;

            string rep[100];
            float vend[100], tot = 0;

            for (int i = 0; i < n; i++) {
                cin >> rep[i] >> vend[i];
                tot += vend[i];
            }

            cout << "Totale: " << tot << endl;

            for (int i = 0; i < n; i++)
                cout << rep[i] << " "
                     << vend[i] << " "
                     << (vend[i] * 100 / tot) << "%\n";
            break;
        }

        case 0:
            cout << "Fine.\n";
            break;

        default:
            cout << "Errore.\n";
        }

    } while (scelta != 0);

    return 0;
}