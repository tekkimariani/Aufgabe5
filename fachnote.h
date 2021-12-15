/*
 * fachnote.h
 * Autor: tekkimariani.com
 */
#ifndef FACHNOTE_H
#define FACHNOTE_H

#include <string>
#include <memory> // ?? 
#include "benotung.h"

class fachnote final
{
    public:
        const std::string fach;
        const benotung note;
        fachnote(const std::string&, const benotung&);
        // überlegen Sie, welche impliziten Memberfunktionen Sie mit = delete unterdrücken müssen
        fachnote(const fachnote&) = delete;
        fachnote& operator=(const fachnote&) = delete;
        fachnote(fachnote&&) = delete;
        fachnote& operator=(fachnote&&) = delete;
};
#endif
