/*
eine private Membervariable note vom Typ int
einen öffentlichen expliziten Konstruktor benotung(int) zum Initialisieren der Membervariablen
Werfen Sie bei unzulässiger Note eine Ausnahme vom Typ std::invalid_argument mit "unzulaessige Note " und der falschen Note als Fehlertext (zulässig sind die Noten 10, 13, 17, 20, 23, 27, 30, 33, 37, 40, 50)
zwei öffentliche konstante statische Membervariablen beste und schlechteste vom Typ benotung mit der besten bzw. schlechtesten Note
eine öffentliche Memberfunktion int int_value(), die die im Objekt gekapselte Note liefert
eine öffentliche Memberfunktion bool ist_bestanden(), die true liefert, wenn der Wert der gekapselten Note kleiner oder gleich 40 ist, sonst false
eine befreundete Funktion bool operator==(benotung, benotung), die true liefert, wenn beide Objekte die gleiche Noten kapseln, sonst false
welche Memberfunktionen erzeugt der Compiler zusätzlich implizit in benotung? Implementiert er die in diesem Fall korrekt?
*/
/*
 * benotung.h
 *
 * Beispielprogramm Klasse.
 *
 * Autor: tekkimariani.com
 * Erstellt am: 2.8.2019
 */
/*
Welche Memberfunktionen erzeugt der Compiler zusätzlich implizit in benotung?
Implementiert er die in diesem Fall korrekt?
Desturktor
Copy
Move
Ja, denke korrekt.
*/
#ifndef BENOTUNG_H
#define BENOTUNG_H
class benotung final
{
    private:
        int note;

    public:
        explicit benotung(int);
        //
        explicit benotung(int, int); // Extraaufgabe

        friend bool operator==(const benotung&, const benotung&);
        friend bool operator<(const benotung&, const benotung&); // Extraaufgabe

        const static benotung beste;
        const static benotung schlechteste;

        int int_value() const;
        bool ist_bestanden() const;
};
#endif
