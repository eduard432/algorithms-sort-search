#ifndef FRACCION_H
#define FRACCION_H

#include <iostream>

class Fraccion {
    private:
        int denominador;
        int numerador;
    public:
        Fraccion();
        Fraccion(int numerador, int denominador);
        float getValor() const;

        friend std::ostream& operator<<(std::ostream& os, const Fraccion& f);

        bool operator<(const Fraccion& otra) const;
        bool operator>(const Fraccion& otra) const;
        bool operator<=(const Fraccion& otra) const;
        bool operator>=(const Fraccion& otra) const;
        bool operator==(const Fraccion& otra) const;
        bool operator!=(const Fraccion& otra) const;

        int getNumerador() const { return numerador; }
        int getDenominador() const { return denominador; }
};

#endif