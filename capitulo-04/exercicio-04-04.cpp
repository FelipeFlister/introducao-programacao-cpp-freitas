#include <iostream>
#include <string>

using namespace std;

int main(){
    int idade = 0;
    string categoria = " ";
    cout << "Digite a idade do atleta: ";
    cin >> idade;
    if (idade >= 5 && idade <= 7){
        categoria = "Infantil A";
    }
    else if (idade >= 8 && idade <= 10){    
        categoria = "Infantil B";
    }
    else if (idade >= 11 && idade <= 13){
        categoria = "Juvenil A";
    }
    else if (idade >= 14 && idade <= 17){
        categoria = "Juvenil B";
    }
    else if (idade >= 18 && idade <= 25){
        categoria = "Senior";
    }
    cout << "Este e um atleta " << categoria;
    return 0;
}