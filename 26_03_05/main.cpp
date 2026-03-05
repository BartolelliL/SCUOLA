#include <iostream>
#include <vector>


/*

Fila B

*/

using namespace std;

void es_1(const vector<int>& v) {

    for (int elemento : v) {

        if (elemento % 3 == 0) {
            cout << elemento << " ";
        }
    }

    cout << "\n";

}

int es_2(int v[], int n, int x) {

    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            return 1; 
        }
    }

    return 0;

}

int es_3(int num) {

    if (num == 0) { return 1; }
    else { return (num * es_3(num-1)); }

}

    
int es_4(int v[], int n, int x) {

    int contatore = 0;

    for (int i = 0; i < n; i++) {
        if (v[i] == x) {
            contatore++;
        }
    }

    return contatore;
}

void es_5(int v[], int n) {

    for (int i = 1; i < n-1; i++) {
        if (!(v[i] > v[i-1] && v[i] > v[i+1])) { // se x non è maggiore dell'elemento prima ed x non è maggiore dell'elemento dopo, stampi x.
            cout << v[i] << " ";
        }
    }

    cout << "\n";

}

int main() {

    // Esercizio 1
    // vector<int> es_1_vettore = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // es_1(es_1_vettore);

    // --------------------------------------------

    // Esercizio 2
    // int v[] = {1, 2, 3, 4, 5};
    // int n = 1;
    // int x = 4;

    // int risultato = es_2(v, n, x);

    // cout << risultato << endl;

    // ----------------------------------------------

    // Esercizio 3
    // es_3(5);

    // ----------------------------------------------

    // Esercizio 4
    // int v1[] = {1, 2, 3, 3, 4};

    // int n = 5; // numero elementi vettore
    // int x = 2; // valore da contare più volte nel vettore

    // cout << es_4(v1, n, x) << endl;

    // ----------------------------------------------
    // Esercizio 5

    // int v[] = {2, 1, 3, 7, 6, 4};
    // int n = 6; // sta per quanti elementi sono presenti nel vettore

    // es_5(v, n);

    return 0;
}