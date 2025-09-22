#include "Fraccion.h"

Fraccion::Fraccion() {
    numerador = 0;
    denominador = 1;
}

Fraccion::Fraccion(int numerador, int denominador) {
    this->numerador = numerador;
    this->denominador = denominador;
}

float Fraccion::getValor() const {
    return numerador / denominador;
}

std::ostream& operator<<(std::ostream& os, const Fraccion& f) {
    os << f.numerador << "/" << f.denominador;
    return os;
}

bool Fraccion::operator<(const Fraccion& otra) const {
    int prod1 = numerador * otra.denominador;
    int prod2 = otra.numerador * denominador;
    
    if ((denominador > 0) == (otra.denominador > 0)) {
        return prod1 < prod2;
    } else {
    }
}

bool Fraccion::operator>(const Fraccion& otra) const {
    return otra < *this;  // Reutilizamos el operador <
}

bool Fraccion::operator<=(const Fraccion& otra) const {
    return (*this < otra) || (*this == otra);
}

bool Fraccion::operator>=(const Fraccion& otra) const {
    return (*this > otra) || (*this == otra);
}

bool Fraccion::operator==(const Fraccion& otra) const {
    // Dos fracciones son iguales si a/b == c/d => a*d == c*b
    return (numerador * otra.denominador) == (otra.numerador * denominador);
}

bool Fraccion::operator!=(const Fraccion& otra) const {
    return !(*this == otra);
}