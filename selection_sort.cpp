#include <iostream>
using namespace std;

void selectionSort(int V[], int n) {
    int i, j, me, troca;

    for (i = 0; i < n - 1; i++) {
        me = i;

        for (j = i + 1; j < n; j++) {
            if (V[j] < V[me]) {
                me = j;
            }
        }

        if (i != me) {
            troca = V[i];
            V[i] = V[me];
            V[me] = troca;
        }
    }
}

int main() {
    int V[] = {7, 4, 9, 2, 5};
    int n = 5;

    cout << "Vetor antes da ordenacao:" << endl;

    for (int i = 0; i < n; i++) {
        cout << V[i] << " ";
    }

    selectionSort(V, n);

    cout << "\n\nVetor depois da ordenacao:" << endl;

    for (int i = 0; i < n; i++) {
        cout << V[i] << " ";
    }

    return 0;
}
