#include <iostream>
using namespace std;

int main() {
    // - Definire un vettore V contenente 5 nomi di cantanti. Riempire il vettore con 5 istruzioni del tipo: V[0] = "Matt"; ... V[4] = "Amy";
    string v[5];

    v[0] = "Matt";
    v[1] = "Chris";
    v[2] = "Dom";
    v[3] = "Adele";
    v[4] = "Celine";
    int i;

    // Definire un vettore W contenente 5 nomi di cantanti. Riempire il vettore inserendo i nomi da tastiera e usando un ciclo;
    string w[5];

    for (i = 0; i <= 4; i++) {
        cout << "Inserisci il nome di un cantante: " << endl;
        cin >> w[i];
    }

    // - Definire un vettore X contenente 10 numeri da 1 a 10. Riempire il vettore usando un ciclo e sfruttando l'indice del vettore;
    int x[10];

    for (i = 0; i <= 9; i++) {
        x[i] = i + 1;
    }

    // - Definire un vettore Y contenente i primi 10 numeri pari. Riempire il vettore usando un ciclo e sfruttando l'indice del vettore;
    int y[10];

    for (i = 0; i <= 9; i++) {
        y[i] = i + 1 * 2;
    }

    // - Visualizzare solo 3 elementi del vettore V, usando le istruzioni del tipo: cout << V[0]; cout << V[2]; ...
    cout << "Visualizzare solo 3 elementi del vettore V: " << v[0] << "" << v[2] << "" << v[4] << endl;

    // - Visualizzare tutti gli elementi dei vettori V, W, X, Y usando i cicli.
    cout << "Visualizzare tutti gli elementi dei vettori V, W, X, Y" << endl;
    cout << "V: " << endl;
    for (i = 0; i <= 4; i++) {
        cout << v[i] << " " << endl;
    }
    cout << " " << endl;
    cout << "W: " << endl;
    for (i = 0; i <= 4; i++) {
        cout << w[i] << " " << endl;
    }
    cout << " " << endl;
    cout << "X: " << endl;
    for (i = 0; i <= 9; i++) {
        cout << x[i] << " " << endl;
    }
    cout << " " << endl;
    cout << "Y: " << endl;
    for (i = 0; i <= 9; i++) {
        cout << y[i] << " " << endl;
    }

    // - Visualizzare solo gli elementi con indice pari del vettore X.
    cout << " " << endl;
    cout << "X, solo indici pari: " << endl;
    for (i = 0; i <= 9; i += 2) {
        cout << x[i] << " " << endl;
    }

    // - Visualizzare solo gli elementi con indice dispari del vettore X.
    cout << " " << endl;
    cout << "X, solo indici dispari: " << endl;
    for (i = 1; i <= 9; i += 2) {
        cout << x[i] << " " << endl;
    }

    // - Visualizzare solo gli elementi con valore pari del vettore X.
    cout << " " << endl;
    cout << "X, solo valori pari: " << endl;
    for (i = 0; i <= 9; i++) {
        if (x[i] % 2 == 0) {
            cout << x[i] << " " << endl;
        }
    }
    return 0;
}


