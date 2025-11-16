#include <iostream>
#include <cstdlib>
#include <vector> // I vettori sono utilizzati per mettere più valori in una singola variabile

using namespace std;

void temperatura(const double t) {

    const double temperatura = t;

    cout << (temperatura - 32) / 1.8 << " Celsius" << endl;
}

void mom(const int v1, const int v2) {

    double first_v = v2 - v1;
    double second_v = first_v / v1;
    double third_v = second_v * 100;

    cout << third_v << endl;

}

void dogs(const int age) {

    cout << (age - 2) * 4 + 21 << endl;

}

void coinflip() {

    srand(time(NULL)); // Seed the random number generator

    int num = rand() % 2; // Generate a random number between 0 and 1

    if (num > 0.5) {
        cout << "Heads\n";
    }
    else {
        cout << "Tails\n";
    }
}

void vettori_1() {

    vector<string> items = {"Computer", "Telefono", "Ipad", "Smartwatch"};

    for (int i = 0; i < items.size(); i++) {
        cout << items[i] << endl;

    }

}

void vettori_2() {

    vector<int> pizza = {21, 7, 11, 18, 14};
    vector<int> s;
    s.reserve(pizza.size()); // Riserva spazio per il vettore s
    for (int i = 0; i < pizza.size(); i++) {
        s.push_back(pizza[i] * 10); // .append al vettore
    }
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << "€, ";
    }

}

int main() {

    // temperatura(69);
    // mom(4500, 6000);
    // dogs(18);
    // coinflip();
    // vettori_1();
    // vettori_2();
    return 0;

}