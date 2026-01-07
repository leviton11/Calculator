# Calculadora em C

Este projeto é uma calculadora simples desenvolvida em linguagem **C** e executada via terminal (CLI).  
Ela permite realizar operações matemáticas básicas como **soma, subtração, multiplicação e divisão**.

O objetivo do projeto é **educacional**, focado na prática de lógica de programação e no uso da linguagem C.

---

## Demonstração

A imagem abaixo mostra a execução da calculadora no terminal.  
Nela, é possível observar o menu de opções, a escolha da operação de adição, a entrada dos dois valores e a exibição do resultado final.  
Após a operação, o programa é encerrado conforme a escolha do usuário.

![Demonstração da Calculadora](https://raw.githubusercontent.com/leviton11/Calculator/refs/heads/main/assets/demo.png)

---

## Instalação e Pré-requisitos

Para executar este projeto, é necessário possuir um sistema operacional **Windows, Linux ou macOS**.  
Também é obrigatório ter um compilador C instalado, como o **GCC**.

A compilação deve ser feita a partir da raiz do repositório utilizando o comando:

gcc main.c -o calculadora
Esse comando irá gerar um arquivo executável chamado calculadora.

Uso e Exemplos
Após a compilação, o programa pode ser executado com o comando:

bash
Copiar código
./calculadora
Durante a execução, o usuário informa dois números, escolhe a operação desejada
e o resultado é exibido diretamente no terminal.

Estrutura do Projeto
text
Copiar código
calculadora-c/
├── main.c
├── README.md
├── LICENSE
└── assets/
    └── demo.png
main.c: contém o código-fonte da aplicação.

README.md: contém a documentação do projeto.

assets/: armazena as imagens utilizadas na demonstração.

Licença
Este projeto está licenciado sob a Licença MIT.

É permitida a utilização, cópia, modificação, distribuição e venda do software,
desde que o aviso de direitos autorais e esta permissão sejam incluídos em todas as cópias.

O software é fornecido "como está", sem garantias de qualquer tipo, expressas ou implícitas,
e os autores não se responsabilizam por quaisquer danos decorrentes de seu uso.
