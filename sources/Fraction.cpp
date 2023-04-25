#include "Fraction.hpp"

using namespace std;

namespace ariel
{
    Fraction::Fraction() : _nom(0), _den(1) {}
    Fraction::Fraction(int nom, int den) : _nom(nom), _den(den) {}
    // Fraction::Fraction(int nom) : _nom(nom), _den(1) {}
    Fraction::Fraction(float num) {}
    // Fraction::Fraction(const Fraction &other) // copy ctor
    // {
    // }

    /*Arithmetic operations on a Fraction*/
    const Fraction Fraction::operator+(const Fraction &other) const
    {
        return Fraction();
    }
    const Fraction Fraction::operator-(const Fraction &other) const
    {
        return Fraction();
    }
    const Fraction Fraction::operator*(const Fraction &other) const
    {
        return Fraction();
    }
    const Fraction Fraction::operator/(const Fraction &other) const
    {
        return Fraction();
    }

    /*Arithmetic operations on a float*/
    const Fraction Fraction::operator+(const float &num) const
    {
        return Fraction();
    }
    const Fraction Fraction::operator-(const float &num) const
    {
        return Fraction();
    }
    const Fraction Fraction::operator*(const float &num) const
    {
        return Fraction();
    }
    const Fraction Fraction::operator/(const float &num) const
    {
        return Fraction();
    }

    /*Friends arithmetic operations*/
    const Fraction operator+(const float &num, const Fraction &frac)
    {
        return Fraction();
    }
    const Fraction operator-(const float &num, const Fraction &frac)
    {
        return Fraction();
    }
    const Fraction operator*(const float &num, const Fraction &frac)
    {
        return Fraction();
    }
    const Fraction operator/(const float &num, const Fraction &frac)
    {
        return Fraction();
    }

    /*Equality check*/
    bool Fraction::operator==(const Fraction &other) const 
    {
        return true;
    }
    bool Fraction::operator==(const float &other) const 
    {
        return true;
    }
    bool operator==(const float &other, const Fraction &frac) // friend function
    {
        return true;
    }
    bool Fraction::operator!=(const Fraction &other) const 
    {
        return true;
    }
    bool Fraction::operator!=(const float &other) const 
    {
        return true;
    }
    bool operator!=(const float &other, const Fraction &frac) // friend function
    {
        return true;
    }

    /*Ratio between Fractions*/
    bool Fraction::operator>(const Fraction &other) const
    {
        return true;
    }
    bool Fraction::operator<(const Fraction &other) const
    {
        return true;
    }
    bool Fraction::operator>=(const Fraction &other) const
    {
        return true;
    }
    bool Fraction::operator<=(const Fraction &other) const
    {
        return true;
    }

    /*Ratio between Fraction and float*/
    bool Fraction::operator>(const float &other) const
    {
        return true;
    }
    bool Fraction::operator<(const float &other) const
    {
        return true;
    }
    bool Fraction::operator>=(const float &other) const
    {
        return true;
    }
    bool Fraction::operator<=(const float &other) const
    {
        return true;
    }

    /*friend Ratio between Fraction and float*/
    bool operator>(const float &num, const Fraction &other)
    {
        return true;
    }
    bool operator<(const float &num, const Fraction &other)
    {
        return true;
    }
    bool operator>=(const float &num, const Fraction &other)
    {
        return true;
    }
    bool operator<=(const float &num, const Fraction &other)
    {
        return true;
    }

    /*Additional operations on fractions*/
    Fraction &operator+=(Fraction &frac, const Fraction &other)
    {
        return frac;
    }
    Fraction &operator-=(Fraction &frac, const Fraction &other)
    {
        return frac;
    }
    Fraction &operator*=(Fraction &frac, const Fraction &other)
    {
        return frac;
    }
    Fraction &operator/=(Fraction &frac, const Fraction &other)
    {
        return frac;
    }

    Fraction &operator+=(Fraction &frac, const float &num)
    {
        return frac;
    }
    Fraction &operator-=(Fraction &frac, const float &num)
    {
        return frac;
    }
    Fraction &operator*=(Fraction &frac, const float &num)
    {
        return frac;
    }
    Fraction &operator/=(Fraction &frac, const float &num)
    {
        return frac;
    }

    const Fraction Fraction::operator+() const
    {
        return Fraction();
    }
    const Fraction Fraction::operator-() const
    {
        return Fraction();
    }

    Fraction &Fraction::operator++()         // Prefix (++n)
    {
        return *this;
    }
    Fraction &Fraction::operator--()         // Prefix (++n)
    {
        return *this;
    }
    const Fraction Fraction::operator++(int) // Postfix (n++)
    {
        return Fraction();
    }
    const Fraction Fraction::operator--(int) // Postfix (n++)
    {
        return Fraction();
    }

    /*output - input*/
    ostream &operator<<(ostream &ost, const Fraction &frac)
    {
        return ost;
    }
    istream &operator>>(istream &ist, const Fraction &frac)
    {
        return ist;
    }

}
