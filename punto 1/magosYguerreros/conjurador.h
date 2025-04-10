#pragma once

#include "utils2.h"

class Conjurador: public Mago {
    private:
        bool tieneConjuros;
        string conjuroSecreto;
    public:
        //Constructor
        Conjurador(const string& nombre, int nivel, int vida, int fuerza, const string& poder, bool experiencia, pair<shared_ptr<Util>, shared_ptr<Util>> armas, const string& conjuroSecreto);
        
        //Getters
        string getConjuroSecreto();
        bool getTieneConjuros();
        
        //Metodos
        void mostrarInfo() override;
 
};