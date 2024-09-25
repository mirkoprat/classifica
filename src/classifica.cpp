#include <iostream>
#include "C:/Users/mirko/CLionProjects/classifica/includes/classifica.h"
using namespace std;


void genera_classifica(classifica_t A[],int dim) {
    for (int i=0; i< dim; i++) {
        cout<<"inserisci il "<< i+1 << "° nome -> ";
        cin>>A[i].nome;
        cout<<"inserisci il "<< i+1 << "° punteggio -> ";
        cin>> A[i].punteggio; // giocatore 1 nome e punteggio
        cout<<endl;
    }
}

void stampa_classifica(classifica_t A[], int dim) {
    cout<<"............................."<<endl;
    cout<<"CLASSIFICA FINALE DI TETRIS"<<endl;

    for(int i=0; i< dim; i++) {
        cout << i+1 << ". Nome: " << A[i].nome << ", Punteggio: " << A[i].punteggio << endl;
    }
    cout<<"............................."<<endl;
}
/*
void ordina_classifica(classifica_t A[], int dim) { // per ordinare la classifica uso il selction sort studiato l'aanno scorso
   for(int i=0; i<dim; i++) {
       int pos_min=i;
       for(int j=i+1; j<dim; j++ ) {
           if(A[j].punteggio < A[pos_min].punteggio)
               pos_min=j;
       }
       int temp=A[i].punteggio;
       A[i].punteggio=A[pos_min].punteggio;
       A[pos_min].punteggio=temp;
   }
}
TODO correggere quetsa funzione
*/

void ordina_classifica(classifica_t A[], int dim) { // per ordinare la classifica uso il selction sort studiato l'aanno scorso
    for(int i=0; i<dim-1; i++) {
        int pos_min=i;
        for(int j=i+1; j<dim; j++ ) {
            if(A[j].punteggio > A[pos_min].punteggio)
                pos_min=j;
        }
        classifica_t nome=A[i]; // fatto grazie al consiglio del prof scritto alla lavagna
        A[i]=A[pos_min];
        A[pos_min]=nome;
    }
}

void carica_nome (classifica_t A[], int dim) {// FARE UN WHILE PER VEDERE SE LA  POSIZIONE DI PRIMA è MMAGGIORE DI QUELLA PRECENDENTE SE E' VERO GAURDARE QUELLA SOTTO FINCHE NON TROVA IL MAGGIORE
    classifica_t nome;
    cout<<"inserisci il nome del nuovo giocatore"<<endl;
    cin>> nome.nome;
    cout<<"nserisci il punteggio del nuovo giocatore"<<endl;
    cin>>nome.punteggio;

    if(nome.punteggio<= A[dim-1].punteggio) {
        cout<<"il punteggio è troppo basso per essere messo nella classifica"<<endl;
        return;
    }
    int i;
    for ( i = dim - 1; i > 0 && nome.punteggio > A[i-1].punteggio; i--) {
        A[i] = A[i-1]; // Spostiamo il giocatore verso il basso
    }
    A[i]=nome;
}
