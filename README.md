# 📚 Lista do Colecionador

Um sistema em C para gerenciar coleções valiosas — gibis, modelos, livros raros, obras de arte, latas de cerveja, carros antigos ou qualquer outro item que você escolha.

---

## 🎯 Objetivo do Projeto

Desenvolver um programa modular em **C**, usando múltiplos arquivos-fonte e processamento de arquivos binários, que permita a um colecionador:

- **Cadastrar** novos itens (ID sequencial, descrição e quantidade).  
- **Consultar** detalhes de um item por seu identificador.  
- **Remover** itens do acervo.  
- **Alterar** descrição ou quantidade de um item existente.  
- **Listar** todo o acervo armazenado em disco.

Essa atividade foi proposta pela professora **Giorgia de Oliveira** como parte da **Terceira Avaliação de Programação Estruturada**.



---

## 🛠️ Como Funciona

1. **Estrutura Multiarquivos**  
   - `main.c`: menu e fluxo principal de interação.  
   - `item.h` / `item.c`: definição da `struct Item` e funções para criar, editar e remover registros.  
   - `io.h` / `io.c`: leitura e escrita de arquivos binários (`acervo.dat`).

2. **Persistência em Disco**  
   - Todos os itens são armazenados num arquivo binário, permitindo manter o acervo entre execuções do programa.

3. **Menu Interativo**  
   - Opções claras para cada operação: cadastrar, consultar, remover, alterar e listar.

---

## 🚀 Passo a Passo de Uso

1. **Compilação**  
   ```bash
   gcc src/main.c src/item.c src/io.c -o colecionador
   ```

2. **Execução**  
   ```bash
   ./colecionador
   ```

3. **Navegação no Menu**  
   - Escolha a operação desejada (input numérico).  
   - Siga as instruções na tela para fornecer ID, descrição e quantidade.

4. **Exemplos de Fluxo**  
   - **Cadastrar**: “Gibi do Homem-Aranha”, quantidade 10 → ID 1  
   - **Consultar** ID 1 → Exibe descrição e quantidade atuais  
   - **Alterar** ID 1 → Atualizar quantidade para 8  
   - **Remover** ID 1 → Registro excluído  
   - **Listar** → Mostra todos os itens não removidos

---

## 👥 Grupo

Este projeto foi desenvolvido como parte da **Terceira Avaliação de Programação Estruturada**, realizado pelo grupo formado por:

- **Tamires Vitória**  
- **Clarice Lopes**  
- **Vinicius Mangueira**

---



## 📚 Referências

- Ulysses de Oliveira, _Programando em C: Fundamentos_ (Vol. 1), Capítulos 4 e 12. Ciência Moderna.

