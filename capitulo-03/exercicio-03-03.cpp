#include <iostream>

using namespace std;

int main()
{
    float pi = 3.1415;
    float raio = 0;
    float area = 0;
    float circunferencia = 0;
    cout << "Digite o raio do círculo: ";
    cin >> raio;
    area = pi * (raio * raio);
    circunferencia = 2 * pi * raio;
    cout << "Um círculo de raio " << raio << " possui área " << area << " e circuferência " << circunferencia;
    return 0;
}