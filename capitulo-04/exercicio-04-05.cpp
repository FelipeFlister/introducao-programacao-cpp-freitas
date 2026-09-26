#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float salarioPorHora = 0;
    float salarioPrevio = 0;
    float salarioFinal = 0;
    float horasBrutas = 0;
    float horasExtras = 0;
    float horasLiquidas = 0;
    int dependentes = 0;
    float taxaDoImpostoDeRenda = 0;
    float beneficio = 0;
    cout << "Digite o salario do empregado por hora trabalhada: ";
    cin >> salarioPorHora;
    cout << "Digite o numero de horas trabalhadas: ";
    cin >> horasBrutas;
    cout << "Digite o numero de horas extras trabalhadas: ";
    cin >> horasExtras;
    horasLiquidas = horasBrutas + horasExtras;
    cout << "Digite o numero de dependentes: ";
    cin >> dependentes;
    
    salarioPrevio = (128 * dependentes) + (salarioPorHora * horasLiquidas);
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
    else {
        cout << "Erro: O salarioIR deu um valor menor que 0, ou problemas com tipagem, tente novamente." << endl;
        return 1;
    }

    salarioFinal = salarioPrevio + beneficio;
    salarioFinal = round(salarioFinal * 100.0) / 100.0;
    
    cout << "O salario final do empregado e R$" << salarioFinal << endl;
    return 0;
}