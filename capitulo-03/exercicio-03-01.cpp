#include <iostream>
using namespace std;

int main()
{
    float peso = 0;
    float altura = 0;
    float IMC = 0;
    cout << "Digite a altura da pessoa: ";
    cin >> altura;
    cout << "Digite o peso da pessoa: ";
    cin >> peso;
    IMC = peso / (altura*altura);
    cout << "O Índice de Massa Corporal desta pessoa é " << IMC;
    return 0;
}