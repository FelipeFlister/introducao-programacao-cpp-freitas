# Introdução à Programação - Curso em C++

Este repositório contém as minhas resoluções dos exercícios propostos no livro **"Introdução à Programação: Curso em C++"** do Dr. Alan R. R. de Freitas.

## 🚀 Objetivo
O foco deste projeto é praticar os fundamentos da linguagem C++ e lógica de programação através dos desafios teóricos e práticos da obra, aplicando boas práticas de organização e testes automatizados.

## 📁 Estrutura do Repositório
O código está organizado por capítulos. Cada capítulo contém seus exercícios e uma pasta dedicada de testes automatizados:

```text
introducao-programacao-cpp/
├── capitulo-03/
│   ├── exercicio-03-01.cpp
│   └── tests/
├── capitulo-04/
│   ├── exercicio-04-01.cpp
│   └── tests/
│       ├── test-04-01.cpp
│       ├── ex01-entradas.txt
│       └── ex01-esperado.txt
├── .gitignore
└── README.md
```

## 🛠️ Tecnologias e Ferramentas
- **Linguagem:** C++ (C++11 ou superior)
- **Compilador:** GCC (g++ via MSYS2/MinGW no Windows)
- **IDE:** VS Code

## 💻 Como Rodar o Projeto
Compilar e Executar um Exercício
Para rodar a versão interativa de um exercício pelo terminal:
```Bash
# 1. Navegue até a pasta do capítulo
cd capitulo-04

# 2. Compile o código-fonte
g++ exercicio-04-01.cpp -o exercicio-04-01.exe

# 3. Execute o programa
./exercicio-04-01.exe
```
## 🧪 Como Executar os Testes Automatizados
O runner lê os dados de entradas.txt e valida contra o esperado.txt:
  
  ```Bash
  # 1. Entre na pasta de testes do capítulo
  cd capitulo-04/tests

  # 2. Compile o arquivo de teste correspondente
  g++ test-04-01.cpp -o runner.exe

  # 3. Execute os testes
  ./runner.exe
  ```