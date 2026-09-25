#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a = 0, b = 0, f = 0;
    
    cout << "Digite o valor de a: ";
    cin >> a;
    cout << "Digite o valor de b: ";
    cin >> b;
    f = (pow(b, 3) + (a * b)) - (2*b) + fmod(a, b);
    cout << "f(x) = " << f;
    return 0;
}