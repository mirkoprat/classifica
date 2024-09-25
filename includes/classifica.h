//
// Created by mirko on 25/09/2024.
//

#ifndef CLASSIFICA_H
#define CLASSIFICA_H


struct classifica_t {
    std::string nome;
    int punteggio;

};

void genera_classifica(classifica_t A[],int dim);
void stampa_classifica(classifica_t A[], int dim);
void ordina_classifica(classifica_t A[], int dim);
void carica_nome (classifica_t A[], int dim);

#endif //CLASSIFICA_H
