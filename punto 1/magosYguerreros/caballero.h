#include "utils2.h"

class Caballero: public Guerrero {
    private:
        string armaSecreta;
        string tipoDeCaballero;
    public:
        //Constructor
        Caballero(const string& nombre, int nivel, int vida, int fuerza, bool experiencia, pair<shared_ptr<Util>, shared_ptr<Util>> armas, const string& habilidad, const string& armaSecreta, const string& tipoDeCaballero);
        
        //Getters
        string getArmaSecreta();
        string getTipoDeCaballero();

        //Metodos
        void mostrarInfo() override;
        void usarFuerzaSecreta();
};