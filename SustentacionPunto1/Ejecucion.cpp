#include <iostream>
#include "Videojuegos.cpp"
using namespace std;

//Se crea el metodo de ejecucion = main
int main(){

    int opcion;
    //Se instancia la clase, y se crea el objeto de la misma
    Videojuegos user;

    //Se aplica un do while, para que se muestre siempre el menu a menos que el usuario decida salir 
    do {

        user.menu();

        switch (opcion){
            case 1:

            user.registrarJuego();
            break;

            case 2:

            user.ordenarPlataformas();
            break;

            default:

            cout << "Opcion no valida" << endl;
            break;

        }

    }while (opcion != 3);


    return 0;
}