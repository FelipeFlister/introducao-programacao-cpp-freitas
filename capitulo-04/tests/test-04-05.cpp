#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

// Função que contém a lógica para ser tesatada
string testarSalarios(float salarioPorHora , float horasBrutas, float horasExtras,  int dependentes) {
    float horasTotais = horasBrutas + horasExtras;
    float salarioPrevio = 0;
    float salarioFinal = 0;
    float taxaDoImpostoDeRenda = 0;
    int beneficio = 0;

    salarioPrevio = (128 * dependentes) + (salarioPorHora * horasTotais);
    if(salarioPrevio >= 1434.59 && salarioPrevio < 2150)
        taxaDoImpostoDeRenda = 0.925; //7.5%
    else if(salarioPrevio >= 2150 && salarioPrevio < 2866.7)
        taxaDoImpostoDeRenda = 0.85; //15%
    else if(salarioPrevio >= 2866.7 && salarioPrevio < 3582)
        taxaDoImpostoDeRenda = 0.78; //22%
    else if(salarioPrevio >= 3582)
        taxaDoImpostoDeRenda = 0.725; //27.5%
    else
        taxaDoImpostoDeRenda = 1;

    salarioPrevio *= taxaDoImpostoDeRenda;

    if(salarioPrevio >= 0 && salarioPrevio <= 500)
        beneficio = 180;
    else if(salarioPrevio > 500 && salarioPrevio <= 1000)
        beneficio = 120;
    else if(salarioPrevio > 1000)
        beneficio = 100;
    else 
        return "Erro: O salarioIR deu um valor menor que 0, ou problemas com tipagem, tente novamente.";
    
    salarioFinal = salarioPrevio + beneficio;
    salarioFinal = round(salarioFinal * 100.0) / 100.0;
    string salarioFinalString = to_string(salarioFinal);
    return "O salario final do empregado e R$" + salarioFinalString;
}

int main() {
    ifstream arquivoEntradas("ex05-entradas.txt");
    ifstream arquivoEsperado("ex05-esperado.txt");

    if (!arquivoEntradas.is_open() || !arquivoEsperado.is_open()) {
        cout << "Erro ao abrir os ficheiros de teste!" << endl;
        return 1;
    }

    float salarioPorHora = 0, salarioPrevio = 0, salarioFinal = 0;
    float horasBrutas = 0, horasExtras = 0, horasLiquidas = 0;
    int dependentes = 0;
    float taxaDoImpostoDeRenda = 0;
    int beneficio = 0;

    string resultadoEsperado;
    int caso = 1;
    int sucessos = 0, falhas = 0;

    // Lê a entrada e a resposta esperada ao mesmo tempo
    while (arquivoEntradas >> salarioPorHora >> horasBrutas >> horasExtras >> dependentes && getline(arquivoEsperado >> ws, resultadoEsperado)) {
        string resultadoObtido = testarSalarios(salarioPorHora, horasBrutas, horasExtras, dependentes);   
        cout << "Teste " << caso << ": ";
        if (resultadoObtido == resultadoEsperado) {
            cout << "[PASSOU]" << endl;
            sucessos++;
        } else {
            cout << "[FALHOU]" << endl;
            cout << "   Obtido:   " << resultadoObtido << endl;
            cout << "   Esperado: " << resultadoEsperado << endl;
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