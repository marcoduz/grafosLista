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

#include "Grafo.h"
#include <iostream>
#include <vector>
#include <exception>
#include <stdexcept>
using namespace std;

bool Grafo::vertice_valido(int v){
    if (v<0 || v>num_vertices_){
        return false;
    }
    return true;
}
Grafo::Grafo(int num_vertices)
{
    if (num_vertices <= 0)
    {
        throw(invalid_argument("O numero de vertices deve ser maior que 0"));
    }
    num_vertices_ = num_vertices;
    num_arestas_ = 0;

    lista_.resize(num_vertices); // define a quantidade de linhas
}

int Grafo::num_arestas()
{
    return num_arestas_;
}

void Grafo::insere_aresta(Aresta e) {

    if (!vertice_valido(e.v1) || !vertice_valido(e.v2)){
        if (!vertice_valido(e.v1) || !vertice_valido(e.v2)){
        throw_with_nested(runtime_error("Erro na operacao "
            "insere_aresta(Aresta): a aresta  eh invalida!"));
    }
    }
    if (!(existe_aresta(e)) && (e.v1 != e.v2)) {
        lista_[e.v1].push_front(e.v2);
        lista_[e.v2].push_front(e.v1);
        num_arestas_++;
    }
}

void Grafo::remove_aresta(Aresta e) {
    if (!vertice_valido(e.v1) || !vertice_valido(e.v2)){
        throw_with_nested(runtime_error("Erro na operacao "
            "insere_aresta(Aresta): a aresta  eh invalida!"));
    }
    if (existe_aresta(e)) {
        lista_[e.v1].remove(e.v2);
        lista_[e.v2].remove(e.v1);
        num_arestas_--;
    }
}

bool Grafo::existe_aresta(Aresta e){
    for (int v2 : lista_[e.v1])
    {
       if (v2 == e.v2)
       {
        return true;
       }
    }
    return false;
}

void Grafo::imprime_complemento(){
    for(int i = 0; i<num_vertices_; i++){
            cout << i << ": ";
        for(int j = 0; j<num_vertices_; j++){
            if (!existe_aresta(Aresta(i, j)) && i != j) {
                cout << j << " ";
            }
        }
        cout << endl;
    }
}