# Linked List Operations

This project implements a linked list in C++ and provides various operations to manipulate the list. The program includes functions to insert and delete elements at both the beginning and end of the list, check if the list is empty, and print the list. It also includes a simple menu-driven interface for user interaction.

## Features

- **Insert at the Beginning**: Adds a new element to the start of the list.
- **Insert at the End**: Adds a new element to the end of the list.
- **Delete from the Beginning**: Removes the first element from the list.
- **Delete from the End**: Removes the last element from the list.
- **Check if the List is Empty**: Determines if the list contains any elements.
- **Print the List**: Displays all the elements in the list.
- **Menu Interface**: Provides a user-friendly interface to perform the above operations.

## Usage

Compile the program using a C++ compiler and run the executable. You will be presented with a menu to choose from various operations.

### Example Commands

1. **Insert at the Beginning**: Enter a value to add to the beginning of the list.
2. **Insert at the End**: Enter a value to add to the end of the list.
3. **Delete from the Beginning**: Removes the first element if the list is not empty.
4. **Delete from the End**: Removes the last element if the list is not empty.
5. **Print the List**: Prints all elements in the list.
6. **Check if the List is Empty**: Displays a message indicating if the list is empty.
7. **Exit**: Terminates the program.

## Code Snippets

### Insert at the Beginning
```cpp
void insertarInicio(L& lista, int x) {
    L p = new(struct nodo);
    p->info = x;
    p->sig = lista;
    lista = p;
}
```

### Delete from the End

```cpp
void eliminarFinal(L& lista) {
    L p = lista;
    if (p->sig == NULL) {
        lista = NULL;
        free(p);
    } else {
        while (p->sig->sig != NULL)
            p = p->sig;
        free(p->sig);
        p->sig = NULL;
    }
}
```
### Menu Interface
```cpp
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
```

## How to Run

1. Clone the repository:
    ```bash
    git clone https://github.com/yourusername/linked-list-operations.git
    ```
2. Navigate to the project directory:
    ```bash
    cd linked-list-operations
    ```
3. Compile the code:
    ```bash
    g++ Nodardos.cpp -o linked_list
    ```
4. Run the executable:
    ```bash
    ./linked_list
    ```
