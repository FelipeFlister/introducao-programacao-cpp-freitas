#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string testarIdade(int idade){
    string categoria = " ";
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
    else {
        return "Idade invalida, tente novamente";
    }
    return "Este e um atleta " + categoria;
}

int main(){
    ifstream arquivoEntradas("ex04-entradas.txt");
    ifstream arquivoEsperado("ex04-esperado.txt");

    if(!arquivoEntradas.is_open() || !arquivoEsperado.is_open()){
        cout << "Erro ao abrir os ficheiros de teste!" << endl;
        return 1;
    }

    int idade = 0;
    string resultadoEsperado;
    int caso = 1;
    int sucessos = 0, falhas = 0;

    while (arquivoEntradas >> idade && getline(arquivoEsperado >> ws, resultadoEsperado)){
        string resultadoObtido = testarIdade(idade);

        cout << "Teste" << caso << ": ";
        if(resultadoObtido == resultadoEsperado){
            cout << "[PASSOU]" << endl;
            sucessos++;
        }
        else {
            cout << "[FALHOU]" << endl;
            cout << "  Obtido:  " << resultadoObtido << endl;
            cout << "  Esperado:  " << resultadoEsperado << endl;
            falhas++;
        }
        caso++;
    }

    cout << "\n--- RESUMO ---" << endl;
    cout << "Sucessos: " << sucessos << " | Falhas: " << falhas << endl;
    cin.ignore();
    cin.get();
    return 0;
}