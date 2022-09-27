#include <iostream>
#include <stdlib.h>

using namespace std;

struct nodo {
    int info;
    struct nodo* sig;
};
typedef struct nodo* L;

void insertarInicio(L& lista, int x) {
    L p = new(struct nodo);
    p->info = x;
    p->sig = lista;
    lista = p;
}

void insertarFinal(L& lista, int x) {
    L t, p = new(struct nodo);

    p->info = x;
    p->sig = NULL;
    if (lista == NULL)
        lista = p;
    else
    {
        t = lista;
        while (t->sig != NULL)
            t = t->sig;
        t->sig = p;
    }
}

void eliminarInicio(L& lista) {
    L p = lista;
    lista = p->sig;
    free(p);
}

void eliminarFinal(L& lista) {
    L p = lista;
    if (p->sig == NULL) {
        lista = NULL;
        free(p);
    }
    else {
        while (p->sig->sig != NULL)
            p = p->sig;
        free(p->sig);
        p->sig = NULL;
    }
}

void imprimir(L lista) {
    int i = 0;
    while (lista != NULL) {
        cout << "\n [" << i + 1 << "] = " << lista->info << endl;
        lista = lista->sig;
        i++;
    }
}

bool listaVacia(L& lista) {
    if (lista == NULL)
        return 1;
    else
        return 0;
}

void menu() {
    cout << "\n\t - - - LISTA - - - \n\n";
    cout << "\t[1] INSERTAR AL INICIO" << endl;
    cout << "\t[2] INSERTAR AL FINAL" << endl;
    cout << "\t[3] ELIMINAR EL PRIMERO" << endl;
    cout << "\t[4] ELIMINAR EL ULTIMO" << endl;
    cout << "\t[5] IMPRIMIR LISTA" << endl;
    cout << "\t[6] COMPROBAR LISTA VACIA" << endl;
    cout << "\t[7] EXIT" << endl;
    cout << "\n >> ";
}

int main() {
    L lista = NULL;
    int opc, num, pos;
    do {
        menu();  cin >> opc;
        system("cls");
        switch (opc) {
        case 1:
            cout << "\n INSERTAR AL INCIO " << endl;;
            cout << "\n VALOR: ";
            cin >> num;
            insertarInicio(lista, num);
            break;
        case 2:
            cout << "\n INSERTAR AL FINAL: "; 
            cout << "\n VALOR: ";
            cin >> num;
            insertarFinal(lista, num);
            break;
        case 3:
            if (listaVacia(lista) == 1)
                cout << "\n [!] LISTA VACIA [!]";
            else {
                cout << "\n [!] ULTIMO NODO ELIMIADO [!]";
                eliminarInicio(lista);
            }
            break;
        case 4:
            if (listaVacia(lista) == 1)
                cout << "\n [!] LISTA VACIA [!]";
            else {
                cout << "\n [!] ULTIMO NODO ELIMIADO [!]";
                eliminarFinal(lista);
            }
            break;
        case 5:
            if (listaVacia(lista) == 1)
                cout << "\n LISTA VACIA";
            else {
                cout << "\n LISTA: " << endl << endl;
                imprimir(lista);
            }
            break;
        case 6:
            cout << "\n VERIFICAR LISTA " << endl << endl;
            if (listaVacia(lista) == 1)
                cout << " [!] LISTA VACIA [!]";
            else
                cout << " LA LISTA EXISTE";
            break;
        case 7:
            cout << "\n\tFIN PROGRAMA" << endl;
            cout << "\tEQUIPO 6 - BUAP/FCC";
            break;
        default:
            cout << "\n[!] VALOR INCORRECTO" << endl;
            break;
        }
        cout << endl << endl;
        system("pause");  
        system("cls");
    } while (opc != 7);
    system("pause");
    return 0;
}
