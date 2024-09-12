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

#ifndef GRAFO_H

#define GRAFO_H

#include <vector>
#include <list>
#include "Aresta.h"

class Grafo {
public:
    Grafo(int num_vertices);
    int num_arestas();
    void insere_aresta(Aresta e);
    void remove_aresta(Aresta e);

    bool existe_aresta(Aresta e);
    bool vertice_valido(int v);
    int num_arestas_subgrafo_induzido(std::vector<int> vertices);
    void imprime_complemento();

private:
    int num_vertices_;
    int num_arestas_;
    std::vector<std::list<int>> lista_;
};

#endif /* GRAFO_H */