# 📘 Guia de Padronização e Contribuição

Este documento define os padrões de desenvolvimento, convenções de código e fluxo de trabalho utilizados neste repositório.

---

## 📌 1. Padrão de Commits (Conventional Commits)

Utilizamos o padrão **Conventional Commits** para manter o histórico de alterações claro e rastreável.

### Tipos Permitidos:
* **`feat`**: Adiciona uma nova funcionalidade, lógica ou exercício novo.
  * *Exemplo:* `feat(cap04): adiciona exercicio 04-01`
* **`fix`**: Corrige um erro ou bug no código ou lógica.
  * *Exemplo:* `fix(cap04): corrige calculo de media no exercicio 04-02`
* **`test`**: Adiciona ou corrige arquivos de teste, entradas ou gabaritos.
  * *Exemplo:* `test(cap04): adiciona entradas e gabarito para exercicio 04-01`
* **`docs`**: Mudanças apenas em documentação (`README.md`, diretrizes, comentários).
  * *Exemplo:* `docs: atualiza guia de contribuicao com padroes de nomeacao`
* **`refactor`**: Reorganização ou melhoria do código sem alterar o resultado final.
  * *Exemplo:* `refactor(cap04): otimiza loop de verificacao no exercicio 04-03`
* **`style`**: Ajustes de formatação, indentação ou espaçamento.
  * *Exemplo:* `style: ajusta identacao no exercicio 04-01`
* **`chore`**: Tarefas de manutenção (ajustes no `.gitignore`, configurações do VS Code).
  * *Exemplo:* `chore: atualiza extensões recomendadas no settings.json`
* **`wip`** *(Work in Progress)*: Utilizado para salvar alterações de um exercício ou funcionalidade que ainda está em desenvolvimento e possui pendências (ex: testes falhando ou lógica incompleta).
  * *Exemplo:* `wip(cap04): ajusta exercicio 04-05 e corrige falhas nos testes`

---

## 🏷️ 2. Convenções de Nomeação (Naming Conventions)

Para manter a consistência no repositório, utilizamos **hífen (`-`)** como separador em todos os nomes de diretórios e ficheiros.

* **Capítulos:** `capitulo-XX` *(ex: `capitulo-04`)*
* **Exercícios:** `exercicio-XX-YY.cpp` *(ex: `exercicio-04-01.cpp`)*
* **Ficheiros de Teste C++:** `test-XX-YY.cpp` *(ex: `test-04-01.cpp`)*
* **Ficheiros de Entrada/Saída:** `exYY-entradas.txt` e `exYY-esperado.txt`
* **Variáveis e Funções no C++:** `camelCase` *(ex: `numeroUsuario`, `verificarLogin()`)*

---

## 🧪 3. Diretrizes de Testes Automatizados

### Quando criar testes?
Para otimizar o tempo de estudo, a criação de testes automatizados deve focar nos exercícios de **maior complexidade**:

* **Criar testes quando o código possuir:**
  * Desvios condicionais (`if`, `else`, `switch`).
  * Laços de repetição (`for`, `while`).
  * Funções com retornos e múltiplos parâmetros.
  * Múltiplos cenários de verificação e casos de borda (*edge cases*).

* **Dispensar testes quando:**
  * O exercício for puramente sequencial (ex: leitura simples, soma direta e exibição na tela).
  * O código for estático ou apenas demonstrativo.

### Estrutura de Testes por Capítulo:
```text
capitulo-XX/
├── exercicio-XX-YY.cpp
└── tests/
    ├── test-XX-YY.cpp
    ├── exYY-entradas.txt
    └── exYY-esperado.txt