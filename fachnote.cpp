#include <stdexcept>
#include "fachnote.h"

fachnote::fachnote(const std::string& f, const benotung& n)
    : fach(f), note(n)
{
    if (f.length() == 0)
    {
        throw std::invalid_argument("Fachname nicht vorhanden.");
    }
}
