/*
 * Tarefa 01 - Grafo - Listas de Adjacencia
 *
 * GEN254 - Grafos - 2024/2
 *
 * Nome:      Marco Antonio Duz
 * Matricula: 2311100006
 *
 * Nome:      Wendell Luis Neris
 * Matricula: 2311100035
 */
#include <iostream>
#include <vector>
#include "Grafo.h"
using namespace std;

int main()
{
    int TAM = 100;
    char entrada[TAM];
    cin.get(entrada, TAM);

    int I = (int)entrada[0] - (int)'0', O = (int)entrada[2] - (int)'0';
    Grafo g(I);

    for (int i = 0; i <= O; i++)
    {
        cin.getline(entrada, TAM);
        char op = entrada[0];

        switch (op)
        {
        case 'I':
            /* code */
            break;
        case 'R':
            cout << "teste\n";
            break;
        case 'E':
            /* code */
            break;
        case 'S':
            /* code */
            break;
        case 'X':
            /* code */
            break;
        default:
            break;
        }
    }

    return 0;
}