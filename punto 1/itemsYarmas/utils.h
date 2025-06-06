#pragma once

#include <iostream>

using namespace std;

//INTERFAZ
class Util {
    public: 
        //Getters
        virtual string getNombre() = 0;
        virtual int getDaño() = 0;
        virtual int getDuracion() = 0;
        
        //Metodos
        virtual void usar() = 0;
        virtual void mostrarInfo() = 0;
        virtual void evolucionar(int daño_agregado, int duracion_agregada) = 0;
        virtual void involucionar(int daño_reducido, int duracion_reducida) = 0;

        //Destructor
        virtual ~Util() = default;
};

//CLASE ABSTRACTA DERIVADA DE LA INTERFAZ
class ItemMagico: public Util {
    protected:
        string nombre;
        int daño;
        int duracion;
        int nivel;
        string poder;
        bool magiaActiva;

    public:
        //Constructor
        ItemMagico(const string& nombre, const string& poder, int daño, int duracion, int nivel, bool magiaActiva);

        //Getters
        virtual string getNombre() override;
        virtual int getDaño() override;
        virtual int getDuracion() override;
        virtual string getPoder();
        virtual bool getMagiaActiva();

        //Métodos
        virtual void usar() override;
        virtual void mostrarInfo() override = 0;
        virtual void evolucionar(int daño_agregado, int duracion_agregada) override;
        virtual void involucionar(int daño_reducido, int duracion_reducida) override;
        virtual void romper();
};

//CLASE ABSTRACTA DERIVADA DE LA INTERFAZ
class ArmaCombate: public Util{
    protected:
        string nombre;
        int daño;
        int duracion;
        int nivel;
        float peso;
    
    public:
        ArmaCombate(const string& nombre, int daño, int duracion, int nivel_de_uso, float peso);
                
        //Getters
        virtual string getNombre() override;
        virtual int getDaño() override;
        virtual int getDuracion() override;
        virtual float getPeso();
    
        //Métodos
        virtual void usar() override = 0;
        virtual void mostrarInfo() override = 0;
        virtual void evolucionar(int daño_agregado, int duracion_agregada) override;
        virtual void involucionar(int daño_reducido, int duracion_reducida) override;
        virtual void reparar(int daño, int duracion) = 0;
};

