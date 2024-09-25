#include <iostream>
#include "includes/classifica.h";
using namespace std;
const int dim = 10;

int main() {
    int scelta;
    classifica_t A[dim];

    cout<<"BENVENUTO NELLA CLASSIFICA MONDIALE DI TETRIS! MOSTRA IL TUO TALENTO E GUADAGNA UN POSTO TRA I CAMPIONI"<<endl;
    cout<<endl;
    cout<<"PREGO INSERISCA I NOMI DEI GIOCATORI CON IL RISPETTIVO PUNTEGGIO:"<<endl;
    genera_classifica(A, dim);
    ordina_classifica(A, dim);

    do {
        cout<<"premi 1 se vuole visulizzare la classifica"<<endl;
        cout<<"premi 2 se vuoi aggiungere un altro utente"<<endl;
        cout<<"premi 3 se vuole uscire"<<endl;
        cin>> scelta;

        if(scelta==1) {
            ordina_classifica(A, dim);
            stampa_classifica(A, dim);
        }else if(scelta==2) {
            carica_nome(A,dim);
        }else if (scelta==3) {
            cout<<"grazie per aver visitato la classifca";
        }else {
            cout<<"numero non valido"<<endl;
        }

    }while (scelta!=3);

    return 0;
}
