#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

//Se crea la clase videojuegos
class Videojuegos {

    private:

    //Se declaran los atributos de la clase como privados
    string nombre; //Nombre que va a tener el juego
    int cantidadJugadores; //Cantidad de jugadores que pueden jugar al mismo tiempo
    string desarrollador; //Desarrollador del juego
    int anioLanzamiento; //Anio de lanzamiento del juego
    list<string>Plataformas; //Se crea una lista tipo string para almacenar plataformas 

    //Se declara un vector tipo string que puede almacenar varias categorias para un solo juego
    vector<string>Categorias;

    public:

    //Se implementa el constructor vacio para que se pueda instanciar la clase
    Videojuegos(){

    } 

    //Se declaran los set y get dependiendo de la necesidad
    //(como puede existir una funcion para registar un juego y necesitar todos los atributos anteriormente descritos, se crearan para todos)

    //Se crea una funcion con el metodo set, se le asigna un argumento y dentro se aclara que el argumento es igual al atributo ya establecido
    void setnombre(string _nombre){

        _nombre = nombre;
    }

    //Se crea el get de la funcion anteriormente creada, para que se retorne el valor que toma el atributo
    string getnombre(){

        return nombre;
    }

    //Se crea una funcion con el metodo set, se le asigna un argumento y dentro se aclara que el argumento es igual al atributo ya establecido
    void setcantidadJugadores(int _cantidadJugadores){

        _cantidadJugadores = cantidadJugadores;
    }

    
    //Se crea el get de la funcion anteriormente creada, para que se retorne el valor que toma el atributo
    int getcantidadJugadores(){

        return cantidadJugadores;
    }

    //Se crea una funcion con el metodo set, se le asigna un argumento y dentro se aclara que el argumento es igual al atributo ya establecido
    void setdesarrollador(string _desarrollador){

        _desarrollador = desarrollador;
    }

    //Se crea el get de la funcion anteriormente creada, para que se retorne el valor que toma el atributo
    string getdesarrollador(){

        return desarrollador;
    }

    //Se crea una funcion con el metodo set, se le asigna un argumento y dentro se aclara que el argumento es igual al atributo ya establecido
    void setanioLanzamiento(int _anioLanzamiento){

        _anioLanzamiento = anioLanzamiento;
    }

    
    //Se crea el get de la funcion anteriormente creada, para que se retorne el valor que toma el atributo
    int getanioLanzamiento(){

        return anioLanzamiento;
    }

    //Se crea una funcion con el metodo set, se le asigna un argumento y dentro se aclara que el argumento es igual al atributo ya establecido
    void setPlataformas(const list<string>& _plataforma){

        Plataformas = _plataforma;
    }

    //Se crea el get de la funcion anteriormente creada, para que se retorne el valor que toma el atributo
    list<string>getPlataformas() const{

        return Plataformas;
    }

    /*Se crea el set para el vector que almacena las categorias, como argumento tiene un constante que es la direccion de memoria del vector tipo string
    ya que este nunca va a cambiar, igualmente se compara que este sea igual al que ya se ingreso en los atributos*/

    void setCategorias(const vector<string>& _categoria){

        Categorias = _categoria;
    }

    //Se creal el get de la funcion creada anteriormente, es un vector tipo string, se declara constante ya que nunca cambia y dentro retorna el atributo
    vector<string> getCategorias() const{

        return Categorias;
    }

    //Se crea una funcion que permite al usuario registrar juegos
    void registrarJuego(){

        string plataforma, categoria;

        cout << "Bienvenido a la consola" << endl;
        cout << "A continuacion se le pediran los datos del juego que desea registrar" << endl;

        cout << "Ingrese el nombre del juego: " << endl;
        cin >> nombre;

        cout << "Ingrese el nombre del desarrollador del juego: " << endl;
        cin >> desarrollador;

        cout << "Ingrese el anio de lanzamiento del juego: " << endl;
        cin >> anioLanzamiento;

        //Se hace una validacion para que cada plataforma que ingrese el usuario se guarde en la lista creada para ello y si ingresa 'fin' se sale del bucle
        cout << "Ingrese la plataforma donde se puede jugar ese juego(ingrese 'fin' para terminar): " << endl;
        while (cin >> Plataformas && plataforma != "fin"){
            Plataformas.push_back(plataforma);
        }


        //Se hace una validacion para que cada categoria que ingrese el usuario se guarde en la lista creada para ello y si ingresa 'fin' se sale del bucle
        cout << "Ingrese las categorias del juego(ingrese 'fin' para terminar): " << endl;
        while (cin >> Categorias && categoria != "fin"){
            Categorias.push_back(categoria);
        }

        cout << "Su juego se ha registrado satisfactoriamente" << endl;
    };

    //Se crea la funcion para ordenar la lista de plataformas
    void ordenarPlataformas(){

        sort(Plataformas.begin(), Plataformas.end(),[](const plataforma& a, const plataforma& b){
            return a.plataforma > b.plataforma
        });
    }

    void menu(){

        cout << "Ingrese la opcion que quiere realizar hoy: " << endl;
        cout << "1.Registrar juego" << endl;
        cout << "2.Ordenar plataformas de forma ascendente" << endl;
        cout << "3.Salir" << endl;
    };
 
};

