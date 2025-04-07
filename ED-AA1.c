/*
Nome do Programa:   ED
Data:               //2025
Nome:               Gabriel Matos Nogueira
Codigo de Pessoa:   1563147
Matricula:          870863
Versao:             1.0

---------------------------------------------------------------------------------------------------

Como executar o programa no terminal:
1.0 - Certifique-se que o compilador GCC esteja instalado e presente nas variaveis de ambiente
da sua maquina

2.0 - Adentre a pasta para executar o programa:
cd 1563147_Gabriel_Matos_Nogueira (Windows, Linux e macOS)

    2.1 - Compile o programa
    Windows:    gcc -o  .c
    Linux:      gcc -o  .c
    macOS:      gcc -o  .c


    2.2 - Execute o programa
    Windows:     ED
    Linux:      ./ED
    macOS:      ./

---------------------------------------------------------------------------------------------------
*/

// Declaracao de biblioteca(s)
#include "io.h"

#define PI 3.141592

// Declaracao dos metodos utilizados
void method_00();
void method_01();
void method_02();
void method_03();
void method_04();
void method_05();
void method_06();
void method_07();
void method_08();
void method_09();
void method_10();
void method_11();
void method_12();

// Funcao Principal
int main(void)
{
    // armazenar a opcao do usuario
    int opcao = 0;
    IO_id("\n\tOpcoes de Metodos:");

    // Menu de opcoes do usuario
    do
    {
        IO_print("\n0 - Parar");
        IO_print("\n1 - Metodo 0a11");
        IO_print("\n2 - Metodo 0a12");
        IO_print("\n3 - Metodo 0a13");
        IO_print("\n4 - Metodo 0a14");
        IO_print("\n5 - Metodo 0a15");
        IO_print("\n6 - Metodo 0a16");
        IO_print("\n7 - Metodo 0a17");
        IO_print("\n8 - Metodo 0a18");
        IO_print("\n9 - Metodo 0a19");
        IO_print("\n10 - Metodo 0a20");
        IO_print("\n11 - Metodo 0a21");
        IO_print("\n12 - Metodo 0a22");

        opcao = IO_readint("\nDigite uma opcao: ");
        switch (opcao)
        {
        case 0:
            method_00();
            break;

        case 1:
            method_01();
            break;

        case 2:
            method_02();
            break;

        case 3:
            method_03();
            break;

        case 4:
            method_04();
            break;

        case 5:
            method_05();
            break;

        case 6:
            method_06();
            break;

        case 7:
            method_07();
            break;

        case 8:
            method_08();
            break;

        case 9:
            method_09();
            break;

        case 10:
            method_10();
            break;

        case 11:
            method_11();
            break;

        case 12:
            method_12();
            break;
        }
    } while (opcao != 0);
}
// Funcoes do programa

/*
---------------------------------------------------------------------------------------------------
METODO 00
- Encerramento do programa
---------------------------------------------------------------------------------------------------
*/
void method_00(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 00\n");

    // Mensagem de encerramento
    IO_print("ENCERRANDO O PROGRAMA...\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 01
- Formula do comprimento da circuferencia = 2 * pi * raio
---------------------------------------------------------------------------------------------------
*/

void method_01(void)
{
    // identificacao
    printf("%s\n", "\nMetodo 01\n");

    // Declaracao de variaveis
    double raio = 0.0;
    double divisoes = 0.0;
    double comprimento = 0.0;

    // Leitura das variaveis
    raio = IO_readdouble("Digite o tamanho do raio da circuferencia: ");
    raio = (double)raio;
    divisoes = IO_readdouble("\nDigite o numero de divisoes do comprimento: ");
    divisoes = (double)divisoes;

    if (divisoes == 0.0)
    {
        IO_print("\nDivisao por 0 e' invalido.\n");
    }

    else if (divisoes < 0.0 || raio < 0.0)
    {
        // Operacoes
        comprimento = ((2.0 * raio * PI) / divisoes) * (-1.0);

        // Mostrar o valor do comprimento
        printf("\nO valor do comprimento e: [%lf]", comprimento);
    }
    else
    {
        // Operacoes
        comprimento = ((2.0 * raio * PI) / divisoes);

        // Mostrar o valor do comprimento
        printf("\nO valor do comprimento e: [%lf]", comprimento);
    }

    // encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 00
- Encerramento do programa
---------------------------------------------------------------------------------------------------
*/
bool method_02_auxiliar(void)
{
    // Declaração de variáveis
    bool condicional = false;
    int quantidade = 0;
    char caractere_1 = 'a';
    char caractere_2 = 'b';
    char caractere_3 = 'c';

    quantidade = IO_readint("Digite a quantidade de vezes para testar: ");
    caractere_1 = IO_readchar("\nDigite a primeira letra: ");
    caractere_2 = IO_readchar("\nDigite a segunda letra: ");
    caractere_3 = IO_readchar("\nDigite a terceira letra: ");

    while (quantidade > 0)
    {
        quantidade = quantidade - 1;

        if (caractere_1 < caractere_2 && caractere_2 < caractere_3)
        {
            condicional = true;
            printf("[Ordem crescente: %c < %c < %c]\n", caractere_1, caractere_2, caractere_3);
        }
    }

    return condicional;
}   


/*
---------------------------------------------------------------------------------------------------
METODO 02
- Ler a quantidade de testes
- Cada teste, ler tres caracteres
---------------------------------------------------------------------------------------------------
*/

void method_02(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 02\n");

    // Chamada da funcao
    bool method_02_auxiliar(condicional, quantidade, caractere_1, caractere_2, caractere_3);

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 03
-
---------------------------------------------------------------------------------------------------
*/

void method_03(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 03\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 04
-
---------------------------------------------------------------------------------------------------
*/

void method_04(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 04\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 05
-
---------------------------------------------------------------------------------------------------
*/

void method_05(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 05\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 06
-
---------------------------------------------------------------------------------------------------
*/

void method_06(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 06\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 07
-
---------------------------------------------------------------------------------------------------
*/

void method_07(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 07\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 08
-
---------------------------------------------------------------------------------------------------
*/

void method_08(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 08\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 09
-
---------------------------------------------------------------------------------------------------
*/

void method_09(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 09\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 10
-
---------------------------------------------------------------------------------------------------
*/

void method_10(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 10\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 11
-
---------------------------------------------------------------------------------------------------
*/

void method_11(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 11\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*
---------------------------------------------------------------------------------------------------
METODO 12
-
---------------------------------------------------------------------------------------------------
*/

void method_12(void)
{
    // Identificacao
    printf("%s\n", "\nMetodo 12\n");

    // Encerramento
    printf("%s\n", "\nApertar ENTER para continuar\n");
    getchar();
}

/*-------------------------------------------------------------------------------------------------
DOCUMENTACAO
-------------------------------------------------------------------------------------------------

1.0 - DOCUMENTACAO COMPLEMENTAR

- Sem observacoes

---------------------------------------------------------------------------------------------------

2.0 - TESTES

*Method_00: OK
- Sem observacoes

*Method_01:
-

*Method_02:
-

*Method_03:
-

*Method_04:
-

*Method_05:
-

*Method_06:
-

*Method_07:
-

*Method_08:
-

*Method_09:
-

*Method_10:
-

*Method_11:
-

*Method_12:
-
---------------------------------------------------------------------------------------------------
*/
