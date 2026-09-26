#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Função que contém a lógica para ser tesatada
string testarLogin(int numeroDeUsuario, int senha) {
    int numerosDeUsuario[] = {982753, 263572, 275493};
    int senhas[] = {83928, 49582, 72648};

    for (int i = 0; i < 3; i++) {
        if (numeroDeUsuario == numerosDeUsuario[i]) {
            if (senha == senhas[i]) {
                return "Usuario Valido";
            } else {
                return "Usuario Invalido, senha incorreta";
            }
        }
    }
    return "Usuario Invalido, numero de usuario incorreto";
}

int main() {
    ifstream arquivoEntradas("ex01-entradas.txt");
    ifstream arquivoEsperado("ex01-esperado.txt");

    if (!arquivoEntradas.is_open() || !arquivoEsperado.is_open()) {
        cout << "Erro ao abrir os ficheiros de teste!" << endl;
        return 1;
    }

    int usuario = 0, senha = 0;
    string resultadoEsperado;
    int caso = 1;
    int sucessos = 0, falhas = 0;

    // Lê a entrada e a resposta esperada ao mesmo tempo
    while (arquivoEntradas >> usuario >> senha && getline(arquivoEsperado >> ws, resultadoEsperado)) {
        string resultadoObtido = testarLogin(usuario, senha);

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