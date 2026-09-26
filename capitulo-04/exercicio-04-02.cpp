#include <iostream>

using namespace std;

int main(){
    int numeros = 0;
    int pares = 0;
    cout << "Digite o primeiro numero: ";
    cin >> numeros;
    pares += (numeros % 2 == 0) ? 1 : 0;
    cout << "Digite o segundo numero: ";
    cin >> numeros;
    pares += (numeros % 2 == 0) ? 1 : 0;
    cout << "Digite o terceiro numero: ";
    cin >> numeros;
    pares += (numeros % 2 == 0) ? 1 : 0;
    cout << "Digite o quarto numero: ";
    cin >> numeros;
    pares += (numeros % 2 == 0) ? 1 : 0;
    cout << "Digite o quinto numero: ";
    cin >> numeros;
    pares += (numeros % 2 == 0) ? 1 : 0;
    cout << "Voce digitou " << pares << " pares, e " << 5 - pares << " impares.";
    return 0;
}