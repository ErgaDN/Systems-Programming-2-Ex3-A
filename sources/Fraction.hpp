#ifndef FRACTION_HPP
#define FRACTION_HPP

#include <iostream>

using namespace std;

namespace ariel
{

    class Fraction
    {
    private:
        int _nom;
        int _den;

        Fraction _simplify() const;

    public:
        Fraction();
        Fraction(int nom, int den);
        // Fraction(int nom);
        Fraction(float num);
        // Fraction(const Fraction &other); // copy ctor
        // ~Fraction();

        // int getNom();
        // int getDen();
        // void setNom(int nom);
        // void setDen(int den);

        /*Arithmetic operations on a Fraction*/
        const Fraction operator+(const Fraction &other) const;
        const Fraction operator-(const Fraction &other) const;
        const Fraction operator*(const Fraction &other) const;
        const Fraction operator/(const Fraction &other) const;

        /*Arithmetic operations on a float*/
        const Fraction operator+(const float &num) const;
        const Fraction operator-(const float &num) const;
        const Fraction operator*(const float &num) const;
        const Fraction operator/(const float &num) const;

        /*Friends arithmetic operations*/
        friend const Fraction operator+(const float &num, const Fraction &frac);
        friend const Fraction operator-(const float &num, const Fraction &frac);
        friend const Fraction operator*(const float &num, const Fraction &frac);
        friend const Fraction operator/(const float &num, const Fraction &frac);

        /*Equality check*/
        bool operator==(const Fraction &other) const;
        bool operator==(const float &other) const;
        friend bool operator==(const float &other, const Fraction &frac);
        bool operator!=(const Fraction &other) const;
        bool operator!=(const float &other) const;
        friend bool operator!=(const float &other, const Fraction &frac);

        /*Ratio between Fractions*/
        bool operator>(const Fraction &other) const;
        bool operator<(const Fraction &other) const;
        bool operator>=(const Fraction &other) const;
        bool operator<=(const Fraction &other) const;

        /*Ratio between Fraction and float*/
        bool operator>(const float &other) const;
        bool operator<(const float &other) const;
        bool operator>=(const float &other) const;
        bool operator<=(const float &other) const;

        /*friend Ratio between Fraction and float*/
        friend bool operator>(const float &num, const Fraction &other);
        friend bool operator<(const float &num, const Fraction &other);
        friend bool operator>=(const float &num, const Fraction &other);
        friend bool operator<=(const float &num, const Fraction &other);

        /*Additional operations on fractions*/
        friend Fraction &operator+=(Fraction &frac, const Fraction &other);
        friend Fraction &operator-=(Fraction &frac, const Fraction &other);
        friend Fraction &operator*=(Fraction &frac, const Fraction &other);
        friend Fraction &operator/=(Fraction &frac, const Fraction &other);

        friend Fraction &operator+=(Fraction &frac, const float &num);
        friend Fraction &operator-=(Fraction &frac, const float &num);
        friend Fraction &operator*=(Fraction &frac, const float &num);
        friend Fraction &operator/=(Fraction &frac, const float &num);

        const Fraction operator+() const;
        const Fraction operator-() const;

        Fraction &operator++();         // Prefix (++n)
        Fraction &operator--();         // Prefix (++n)
        const Fraction operator++(int); // Postfix (n++)
        const Fraction operator--(int); // Postfix (n++)

        /*output - input*/
        friend ostream &operator<<(ostream &ost, const Fraction &frac);
        friend istream &operator>>(istream &ist, const Fraction &frac);
    };
}

#endif