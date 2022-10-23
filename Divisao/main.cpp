/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/cppFiles/main.cc to edit this template
 */

/* 
 * File:   main.cpp
 * Author: marqu
 *
 * Created on 21 de outubro de 2022, 08:02
 */

#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    int numc, nump, qtd;
    string nomep;
    float precop;

    cout << "Qual o numero de clientes: ";
    cin >> numc;

    struct clientes {
        string nome;
        float soma;
    };
    clientes cliente[numc];

    for (int i = 0; i < numc; i++) {
        cout << "Digite o nome do cliente " << i + 1 << ":";
        cin >> cliente[i].nome;
    }
    char opc = '1';  

    string nome;
    while (opc != '0') {

        cout << "Digite 0 para sair ou qualquer tecla para continuar: ";
        cin >> opc;
        if (opc == '0') {
            break;
        }

        cout << "Digite o nome do produto: ";
        cin >> nomep;
        cout << "Digite o preco do produto: ";
        cin >> precop;
        cout << "Digite a quantidade de produtos: ";
        cin >> qtd;

        cout << "Informe quantas pessoas consumiram esse produto: ";
        cin >> nump;

        for (int i = 0; i < nump; i++) {
            cout << "Digite o nome de uma das pessoas que consumiu o produto";
            cin >> nome;
            for (int i = 0; i < numc; i++) {
                if (cliente[i].nome == nome) {
                    cliente[i].soma = cliente[i].soma + (precop * qtd / nump);
                }
            }
        }
    }
    cout << "Resultado: " << endl;
    for (int i = 0; i < numc; i++) {

        cout << cliente[i].nome << ": " << cliente[i].soma <<endl;
    }
    return 0;
}

