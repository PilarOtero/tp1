#pragma once

#include "utils.h"

class HachaDoble: public ArmaCombate {
    private:
        bool afilada;
    public:
        //Constructor
        HachaDoble(const string& nombre, int daño, int duracion, int nivel_de_uso, float peso);
        
        //Getter
        bool getAfilada();
    
        //Métodos
        void usar() override;
        void reparar(int daño_agregado, int duracion_agregada) override;
        void mostrarInfo() override;

};