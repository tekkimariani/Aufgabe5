/*
 * benotung.cpp
 *
 * Beispielprogramm Klasse.
 *
 * Autor: tekkimariani.com
 * Erstellt am: 16.11.2020
 */
#include "benotung.h"
#include <stdexcept>


const benotung benotung::beste = benotung{10};
const benotung benotung::schlechteste = benotung{50};


benotung::benotung(int n)
: note(n) // ??
{
    switch (n)
    {
        case 10:
        case 13:
        case 17:
        case 20:
        case 23:
        case 27:
        case 30:
        case 33:
        case 37:
        case 40:
        case 50:
            break;
        default:
            throw std::invalid_argument("unzulässige Note " + std::to_string(note));
    }
}

benotung::benotung(int n, int m)
    : note((n + m) / 2)
{

    switch (n)
    {
        case 10:
        case 13:
        case 17:
        case 20:
        case 23:
        case 27:
        case 30:
        case 33:
        case 37:
        case 40:
        case 50:
            switch (m)
            {
                case 10:
                case 13:
                case 17:
                case 20:
                case 23:
                case 27:
                case 30:
                case 33:
                case 37:
                case 40:
                case 50:
                    break;
                default:
                    throw std::invalid_argument("unzulässige Note " + std::to_string(m));
            }
            break;
        default:
            throw std::invalid_argument("unzulässige Note " + std::to_string(n));
    }
}

bool operator==(const benotung& lhs, const benotung& rhs)
{
    return lhs.note == rhs.note;
}

bool operator<(const benotung& lhs, const benotung& rhs)
{
    return lhs.note < rhs.note;
}

int benotung::int_value() const
{
    return this->note;
}
bool benotung::ist_bestanden() const
{
    return this->note <= 40;
}
