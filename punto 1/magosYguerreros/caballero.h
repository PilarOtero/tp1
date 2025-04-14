#include "utils2.h"

class Caballero: public Guerrero {
    private:
        int nivelDeValentia;
        string tipoDeCaballero;
    public:
        //Constructor
        Caballero(const string& nombre, int nivel, int vida, int fuerza, bool experiencia, pair<shared_ptr<Util>, shared_ptr<Util>> armas, const string& habilidad, int nivelDeValentia, const string& tipoDeCaballero);
        
        //Getters
        int getnivelDeValentia();
        string getTipoDeCaballero();

        //Métodos
        void mostrarInfo() override;
        void usarFuerzaSecreta();
};