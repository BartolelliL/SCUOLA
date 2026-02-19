#include <iostream>
using namespace std;

int fattoriale(int n) {
    if (n == 0) {return 1;}
    else {return (n * fattoriale(n - 1));}
}

int main() {
    int x;
    cout << "Inserire il numero per eseguire il fattoriale: ";
    cin >> x;
    cout << fattoriale(x);
}