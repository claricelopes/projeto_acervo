## 📚 Lista do Colecionador  |  📚 Collector's List

Um sistema em C para gerenciar coleções valiosas — gibis, modelos, livros raros, obras de arte, latas de cerveja, carros antigos ou qualquer outro item que você escolha.  |  A C system to manage valuable collections — comics, models, rare books, works of art, beer cans, vintage cars, or any other items you choose.

---

## 🎯 Objetivo do Projeto  |  🎯 Project Objective

Desenvolver um programa modular em **C**, usando múltiplos arquivos-fonte e processamento de arquivos binários, que permita a um colecionador:  |  Develop a modular **C** program, using multiple source files and binary file processing, that allows a collector to:

* **Cadastrar** novos itens (ID sequencial, descrição e quantidade).  |  - **Register** new items (sequential ID, description, and quantity).
* **Consultar** detalhes de um item por seu identificador.  |  - **Query** item details by its identifier.
* **Remover** itens do acervo.  |  - **Remove** items from the collection.
* **Alterar** descrição ou quantidade de um item existente.  |  - **Modify** the description or quantity of an existing item.
* **Listar** todo o acervo armazenado em disco.  |  - **List** the entire inventory stored on disk.

Essa atividade foi proposta pela professora **Giorgia de Oliveira** como parte da **Terceira Avaliação de Programação Estruturada**.  |  This activity was proposed by Professor **Giorgia de Oliveira** as part of the **Third Structured Programming Assessment**.

---

## 🛠️ Como Funciona  |  🛠️ How It Works

1. **Estrutura Multiarquivos**  |  1. **Multi-file Structure**

   * `main.c`: menu e fluxo principal de interação.  |  `main.c`: menu and main interaction flow.
   * `item.h` / `item.c`: definição da `struct Item` e funções para criar, editar e remover registros.  |  `item.h` / `item.c`: definition of the `struct Item` and functions to create, edit, and remove records.
   * `io.h` / `io.c`: leitura e escrita de arquivos binários (`acervo.dat`).  |  `io.h` / `io.c`: reading and writing binary files (`acervo.dat`).

2. **Persistência em Disco**  |  2. **Disk Persistence**

   * Todos os itens são armazenados num arquivo binário, permitindo manter o acervo entre execuções do programa.  |  All items are stored in a binary file, preserving the inventory between program runs.

3. **Menu Interativo**  |  3. **Interactive Menu**

   * Opções claras para cada operação: cadastrar, consultar, remover, alterar e listar.  |  Clear options for each operation: register, query, remove, modify, and list.

---

## 🚀 Passo a Passo de Uso  |  🚀 Usage Steps

1. **Compilação**  |  1. **Compilation**

   ````bash
   gcc src/main.c src/item.c src/io.c -o colecionador
   ```  |   ```bash
   gcc src/main.c src/item.c src/io.c -o colecionador
   ````

2. **Execução**  |  2. **Execution**

   ````bash
   ./colecionador
   ```  |   ```bash
   ./colecionador
   ````

3. **Navegação no Menu**  |  3. **Menu Navigation**

   * Escolha a operação desejada (input numérico).  |  - Select the desired operation (numeric input).
   * Siga as instruções na tela para fornecer ID, descrição e quantidade.  |  - Follow the on-screen instructions to provide ID, description, and quantity.

4. **Exemplos de Fluxo**  |  4. **Flow Examples**

   * **Cadastrar**: “Gibi do Homem-Aranha”, quantidade 10 → ID 1  |  - **Register**: “Spider-Man Comic”, quantity 10 → ID 1
   * **Consultar** ID 1 → Exibe descrição e quantidade atuais  |  - **Query** ID 1 → Displays current description and quantity
   * **Alterar** ID 1 → Atualizar quantidade para 8  |  - **Modify** ID 1 → Update quantity to 8
   * **Remover** ID 1 → Registro excluído  |  - **Remove** ID 1 → Record deleted
   * **Listar** → Mostra todos os itens não removidos  |  - **List** → Shows all non-deleted items

---

## 👥 Grupo  |  👥 Team

Este projeto foi desenvolvido como parte da **Terceira Avaliação de Programação Estruturada**, realizado pelo grupo formado por:  |  This project was developed as part of the **Third Structured Programming Assessment**, by the group consisting of:

* **Tamires Vitória**  |  - **Tamires Vitória**
* **Clarice Lopes**  |  - **Clarice Lopes**
* **Vinicius Mangueira**  |  - **Vinicius Mangueira**

---

## 📚 Referências  |  📚 References

* Ulysses de Oliveira, *Programando em C: Fundamentos* (Vol. 1), Capítulos 4 e 12. Ciência Moderna.  |  - Ulysses de Oliveira, *Programando em C: Fundamentos* (Vol. 1), Chapters 4 and 12. Ciência Moderna.


