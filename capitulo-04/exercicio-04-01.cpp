#include <iostream>

using namespace std;

int main(){
    // Redireciona a entrada padrao (cin) para ler do arquivo "entradas.txt"

    int numerosDeUsuario[] = {982753, 263572, 275493};
    int senhas[] = {83928, 49582, 72648};
    int numeroDeUsuario = 0;
    int senha = 0;
    bool usuarioEncontrado = false;

    cout << "Digite o numero de usuario: ";
    cin >> numeroDeUsuario;
    cout << "Digite a senha do usuario: ";
    cin >> senha;
    for(int i = 0; i < 3; i++){
        if(numeroDeUsuario == numerosDeUsuario[i]){
            usuarioEncontrado = true;
            if(senha == senhas[i]){
                cout << "Usuario Valido";
            }
            else{
                cout << "Usuario Invalido, senha incorreta";
            }
            break;
        }
    }

    if(!usuarioEncontrado){
        cout << "Usuario Invalido, numero de usuario incorreto";
    }
    return 0;
}