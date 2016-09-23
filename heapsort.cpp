
#include <iostream>
using namespace std;

// Para heapify un sub�rbol con ra�z en el nodo i que es
// Un �ndice de matriz []. n es el tama�o del mont�n
void HeapSort(int arr[], int n, int i)
{
    int mgrande = i;  //inicialisamos
    int l = 2*i + 1;
    int r = 2*i + 2;

    // si es es mas grande
    if (l < n && arr[l] > arr[mgrande])
        mgrande = l;

    // Si hijo derecho es m�s grande que la m�s grande hasta el momento
    if (r < n && arr[r] > arr[mgrande])
       mgrande = r;

    // si es mas grande y noes la raiz
    if (mgrande != i)
    {
        swap(arr[i], arr[mgrande]);

        // arbol afecatado
        HeapSort(arr, n, mgrande);
    }
}

// pila de calsificacion
void sorteo(int arr[], int n)
{
    // reorganizar matriz
    for (int i = n / 2 - 1; i >= 0; i--)
        HeapSort(arr, n, i);


    for (int i=n-1; i>=0; i--)
    {
        // mueve la raiz actual y pone fin
        swap(arr[0], arr[i]);


        HeapSort(arr, i, 0);
    }
}


void printArray(int arr[], int n)
{
    for (int i=0; i<n; ++i)
        cout << arr[i] << " ";
    cout << "\n";
}

