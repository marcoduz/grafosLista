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
    // ~Grafo(); // Se necessario
    int num_arestas();
    void insere_aresta(Aresta e);
    void remove_aresta(Aresta e);

    bool existe_aresta(Aresta e);

    // Metodo num_arestas_subgrafo_induzido
    void imprime_complemento();

private:
    int num_vertices_;
    int num_arestas_;
    std::vector<std::list<int>> lista_;
};

#endif /* GRAFO_H */