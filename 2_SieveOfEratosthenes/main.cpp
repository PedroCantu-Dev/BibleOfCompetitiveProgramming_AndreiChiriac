#include <iostream>

using namespace std;

const int NMAX = 100001;

// Este arreglo se usará para marcar los números primos.
// Si isPrime[i] es true, entonces i es considerado un número primo.
bool isPrime[NMAX];

// Esta función implementa la Criba de Eratóstenes para encontrar todos los números primos hasta n.
// Complejidad: O(n log log n)
void SieveOfEratosthenes(int n) {
    // Al inicio, asumimos que todos los números desde 0 hasta n son primos.
    // Luego, iremos marcando como no primos los números que tienen divisores distintos de 1 y de sí mismos.
    for (int i = 0; i <= n; i++) {
        isPrime[i] = true;
    }

    // Comenzamos a procesar desde el número 2, el primer número primo.
    // Aquí iteramos hasta n/2 porque, a partir de ese punto,
    // cualquier múltiplo de i ya será mayor que n, y no necesitamos considerarlo.
    //nota: que el primer numero primo es 2 y por lo tanto es el primer posible multiplo de n (por eso n/2)
    for (int i = 2; i <= n/2; i++) {
        if (isPrime[i]) {
            // Aquí marcamos como no primos todos los múltiplos de i.
            // Empezamos en i*2 y aumentamos de i en i (j += i).
            for (int j = i * 2; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    //lamamos a la función e imprimimos algunos numeros 
    SieveOfEratosthenes(100);
    for(int i = 2; i <= 100; i++){
        if(isPrime[i]){
            cout << i << " ";
        }
    }

    return 0;
}
