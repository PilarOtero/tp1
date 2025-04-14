#pragma once

#include "utils2.h"

class Barbaro: public Guerrero {
    private:
        int velocidad;
        bool furioso;
    public:
        //Constructor
        Barbaro(const string& nombre, int nivel, int vida, int fuerza, bool experiencia, pair<shared_ptr<Util>, shared_ptr<Util>> armas, const string& habilidad);
        
        //Getters
        int getVelocidad();
        bool getFurioso();

        //Métodos
        void mostrarInfo() override;
        void estaFurioso(int furia);
};