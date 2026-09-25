#include <iostream>

using namespace std;

int main()
{
    float celsius = 0;
    float fahrenheit = 0;
    cout << "Digite a temperatura em Celsius: ";
    cin >> celsius;
    fahrenheit = ((9 * celsius)/ 5) + 32;
    cout << celsius << " graus Celsius equivalem a " << fahrenheit << " graus Fahrenheit";
    return 0;
}