#include <iostream>
using namespace std;

int main(){
    int x = 0;
    int f = 0;
    int g = 0;
    int h = 0;
    cout << "Digite o valor de x:";
    cin >> x;
    h = (x*x) + (3*x) - 20;
    if(h <= 5){
        g = 5;
    }
    else if(h > 5){
        g = h;
    }
    if(g > 10){
        f = x + 2*(x*x);
    }
    else if(g <= 10){
        f = 10;
    }
    
    cout << "f(x) = " << f;
    return 0;
}