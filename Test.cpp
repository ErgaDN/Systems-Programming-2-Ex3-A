#include "doctest.h"
#include "sources/Fraction.hpp"
#include <iostream>

using namespace ariel;
using namespace std;

TEST_CASE("constructors")
{
    CHECK_NOTHROW(Fraction());
    CHECK_THROWS(Fraction(1, 0));
    CHECK_NOTHROW(Fraction(-1, 1));
    CHECK(Fraction(1, 2) == Fraction(0.5));
    CHECK(Fraction(1, 2) == Fraction(-1, -2));
}

TEST_CASE("Arithmetic operations on a Fraction")
{
    Fraction a(1, 2), b(3, 4);
    CHECK(a + b == Fraction(5, 4));
    CHECK(a - b == Fraction(-1, 4));
    CHECK(a * b == Fraction(3, 8));
    CHECK(a / b == Fraction(2, 3));
}

TEST_CASE("Arithmetic operations on a float")
{
    Fraction a(1, 6);
    CHECK(a + 0.1 == Fraction(4, 15));
    CHECK(a - 0.1 == Fraction(1, 15));
    CHECK(a * 0.1 == Fraction(1, 60));
    CHECK(a / 0.1 == Fraction(5, 3));
}

TEST_CASE("Friends arithmetic operations")
{
    Fraction a(1, 6);
    CHECK(0.1 + a == Fraction(4, 15));
    CHECK(0.1 - a == Fraction(1, 15));
    CHECK(0.1 * a == Fraction(1, 60));
    CHECK(0.1 / a == Fraction(5, 3));
}

TEST_CASE("Equality check")
{
    CHECK(Fraction(4, 18) == Fraction(2, 9));
    CHECK(Fraction(1, 20) == 0.05);
    CHECK(0.95 == Fraction(19,20));
    CHECK(1.45 != Fraction(1,3));
    CHECK(Fraction(1,2) != 3.4);
    CHECK(Fraction(1,2) != Fraction(1,3));
}

TEST_CASE("Ratio between Fractions")
{
    Fraction a(1, 5), b(1, 7), c(2, 10);
    CHECK((a > b) == true);
    CHECK((b < b) == false);
    CHECK((a >= c) == true);
    CHECK((c <= b) == false);
}

TEST_CASE("Ratio between Fraction and float")
{
    Fraction a(1, 5), b(1, 7);
    CHECK((a > 0.1) == true);
    CHECK((0.5 < b) == false);
    CHECK((a >= 0.2) == true);
    CHECK((b <= 2.5) == false);
}

TEST_CASE("Additional operations on fractions")
{
    Fraction temp(1.25), a(1, 10), b(1.2), c(1, 3), d(6, 5);
    a += temp;
    CHECK(a == Fraction(1.35));

    b -= temp;
    CHECK(b == Fraction(-1, 20));

    c *= temp;
    CHECK(c == Fraction(5, 12));

    d /= temp;
    CHECK(d == Fraction(24, 25));

    CHECK(temp == Fraction(5, 4));
}

TEST_CASE("Prefix & Postfix")
{
    Fraction a(1, 5), b(1, 7);

    Fraction c = a++;
    CHECK(c == Fraction(1, 5));
    CHECK(a == (Fraction(1, 5) + 1));

    Fraction d = ++b;
    CHECK(d == Fraction(8,7));
    CHECK(b == Fraction(8,7));    
}