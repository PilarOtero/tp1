#pragma once 

#include "utils2.h"

class Brujo: public Mago {
    private:
        bool veElFuturo;
        string tipoDeMagia;
    
    public:
        //Constructor
        Brujo(const string& nombre, int nivel, int vida, int fuerza, const string& poder, bool experiencia, pair<shared_ptr<Util>, shared_ptr<Util>> armas_brujo, bool veElFuturo, const string& tipoDeMagia);
        
        //Getter
        bool getVeElFuturo();
        string getTipoDeMagia();

        //Métodos
        void mostrarInfo() override;
};