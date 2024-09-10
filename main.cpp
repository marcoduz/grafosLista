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
    int I, O;
    cin >> I >> O;
    Grafo g(I);

    for (int i = 0; i < O; i++)
    {
        char op;
        int X, Y, N;
        vector<int> vertices;

        cin >> op;

        switch (op)
        {
        case 'I':
            cin >> X >> Y;
            g.insere_aresta(Aresta(X, Y));
            break;
        case 'R':
            cin >> X >> Y;
            g.remove_aresta(Aresta(X, Y));
            break;
        case 'E':
            /* code */
            break;
        case 'S':
            cin >> N;
            vertices.resize(N);
            for (int j = 0; j < N; j++)
            {
                cin >> vertices[j];
            }

            // for (int v : vertices)
            // {
            //     cout << v << ", ";
            // }
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