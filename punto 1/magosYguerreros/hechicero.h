#pragma once

#include "utils2.h"

class Hechicero: public Mago {
    private:
        int edad;
    
    public:
        //Constructor
        Hechicero(const string& nombre, int nivel, int vida, int fuerza, const string& poder, bool experiencia, pair<shared_ptr<Util>, shared_ptr<Util>> armas, int edad);  

        //Getter
        int getEdad();
        
        //Método
        void mostrarInfo() override;
                

};