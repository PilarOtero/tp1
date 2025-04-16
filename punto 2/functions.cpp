#include "functions.h"
#include "personajeFactory.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int generar_numero(int min, int max){
    //Genero un número aleatorio entre min y max -> int numero = min + rand() % (max - min + 1)
    return (min + rand() % (max - min + 1));
}

//Creo un arma random
unique_ptr<Util> generarArmaRandom(bool esGuerrero){
    if (esGuerrero){
        //Número random entre 0 y 4 porque existen 5 armas de combate
        switch(generar_numero(0,4)){
            case 0:
                return PersonajeFactory:: crearArma(Armas:: espada);
            case 1:
                return PersonajeFactory:: crearArma(Armas:: garrote);
            case 2:
                return PersonajeFactory:: crearArma(Armas:: hachaSimple);
            case 3:
                return PersonajeFactory:: crearArma(Armas:: hachaDoble);
            case 4:
                return PersonajeFactory:: crearArma(Armas:: lanza);
            default:
                return nullptr;
        }
    }
    else {
        //Número random entre 0 y 3 porque existen 4 items magicos
        switch(generar_numero(0,3)){
            case 0:
                return PersonajeFactory:: crearArma(Armas:: amuleto);
            case 1:
                return PersonajeFactory:: crearArma(Armas:: baston);
            case 2:
                return PersonajeFactory:: crearArma(Armas:: pocion);
            case 3:
                return PersonajeFactory:: crearArma(Armas:: libroDeHechizos);
            default:
                return nullptr;
            }
    } 
    return nullptr;
}

//Creo un personaje random (con armas)
shared_ptr<Personaje> generarPersonajeRandom(bool esGuerrero, pair<unique_ptr<Util>, unique_ptr<Util>> armas){
    if (esGuerrero){
        //Random entre 0 y 4 ya que tengo 5 tipos de guerrero (5 clases derivadas)
        switch(generar_numero(0,4)){
            case 0:
                return  make_shared<Gladiador>("Gladiador", 5, 100, 600, true, move(armas), "Correr a tal velocidad que no puede ser visto", 50, true, 15);
            case 1:
                return make_shared<Paladin>("Paladin", 7, 100, 400, true, move(armas),"Uso de Garrote", 3);    
            case 2:
                return make_shared<Caballero>("Caballero", 6, 100, 300, false, move(armas),"Uso de Espada", 100, "Caballero de la Luz");
            case 3:
                return make_shared<Barbaro>("Barbaro", 3, 100, 300, true, move(armas), "Uso de Hacha");
            case 4:
                return make_shared<Mercenario>("Mercenario", 4, 100, 150, true, move(armas), "Disparar en el blanco", 90);
            default:
                return nullptr;
        }
    }
    else{
        //Random entre 0 y 4 poque hay 4 clases derivadas de Mago
        switch(generar_numero(0,3)){
            case 0:
                return make_shared<Brujo>("Brujo", 5, 100, 20, "Fuego", true, move(armas), true,"Fuego");    
            case 1:
                return make_shared<Conjurador>("Conjurador", 6, 100, 25, "Agua", false, move(armas), "Alzamiento de los Muertos");
            case 2:
                return make_shared<Hechicero>("Hechicero", 7, 100, 30, "Rayo", true, move(armas), 80);
            case 3:
                return make_shared<Nigromante>("Nigromante", 8, 100, 35, "Oscuridad", false, move(armas), 70, 100);
            default:
                return nullptr;
        }
    }
    return nullptr;
}

void generadorPersonajes(int n, bool esGuerrero, vector<shared_ptr<Personaje>>& personajes){ //con n = cantidad de personajes 
    //Genero las armas que serán asignadas al personaje
    for (int i = 0; i < n; i++){
        int cantidad_armas = generar_numero(0,2);
        
        //Creo el vcetor de armas de cada personaje
        pair<unique_ptr<Util>, unique_ptr<Util>> armas = {nullptr,nullptr};

        if (cantidad_armas == 0){
            armas.first = nullptr;
            armas.second = nullptr;
        }
        else if (cantidad_armas == 1){
            armas.first = generarArmaRandom(esGuerrero);
            armas.second = nullptr;
        }
        else{
            armas.first = generarArmaRandom(esGuerrero);
            armas.second = generarArmaRandom(esGuerrero);
        }

        shared_ptr<Personaje> personaje = generarPersonajeRandom(esGuerrero, move(armas));
        if (personaje) personajes.push_back(personaje);
        if (!personaje){
            cout << "No se pudo crear el personaje" << endl;
        }
    }
}

void mostrarArmasPersonajes(const vector<shared_ptr<Personaje>>& personajes){
    //Por cada uno de los personajes al vector, muestro la información de sus armas
    for (const auto& personaje : personajes){
        cout << "Armas del " << personaje->getNombre() << endl;
        if (personaje->getArmas().first){
            cout << "- Arma 1 -> " << personaje->getArmas().first->getNombre() << endl;
            cout << "   - Daño -> " << personaje->getArmas().first->getDaño() << endl;
            cout << "   - Duración -> " << personaje->getArmas().first->getDuracion() << endl;
        }

        if (personaje->getArmas().second){
            cout << "- Arma 2 -> " << personaje->getArmas().second->getNombre() << endl;
            cout << "   - Daño -> " << personaje->getArmas().second->getDaño() << endl;
            cout << "   - Duración -> " << personaje->getArmas().second->getDuracion() << endl;
        }

        if (!personaje->getArmas().first && !personaje->getArmas().second){
            cout << "- No tiene armas" << endl;
        }
        cout << "----------------------" << endl;
    }
}







 




