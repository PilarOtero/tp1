#pragma once

#include "utils.h"

class Lanza: public ArmaCombate {
    private:
        int precision;
    
    public:
        //Constructor
        Lanza(const string& nombre, int daño, int duracion, int nivel_de_uso, float peso, int precision);

        //Getter
        int getPrecision();
    
        //Métodos
        void usar() override;
        void reparar(int daño_agregado, int duracion_agregada) override;
        void mostrarInfo() override;

};