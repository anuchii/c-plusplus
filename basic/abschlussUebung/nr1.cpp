/*
* 	1.	Name speichern (String)
    •	Frage den Benutzer nach seinem Namen.
    •	Speichere ihn in einer string-Variable.
    •	Begrüße ihn anschließend mit einer kurzen Ausgabe.
    2.	Zufallszahl erzeugen (Numbers)
    •	Erzeuge eine Zufallszahl zwischen 1 und 5.
    •	Diese Zahl soll später als Position in einem Array dienen.
    3.	Array verwenden (Arrays + Characters)
    •	Lege ein Array mit 5 Buchstaben an, z. B.:
    •	A, B, C, D, E
    •	Wähle mithilfe der Zufallszahl einen dieser Buchstaben aus.
    4.	Raten lassen (char + Boolean)
    •	Frage den Benutzer, welchen Buchstaben (A–E) er vermutet.
    •	Lies die Eingabe als char ein.
    •	Vergleiche die Eingabe mit dem zufällig gewählten Buchstaben.
    •	Speichere das Ergebnis in einer bool-Variable (richtig/falsch).
    5.	Ergebnis ausgeben
    •	Wenn der Benutzer richtig geraten hat → positive Meldung ausgeben.
    •	Wenn er falsch geraten hat → richtigen Buchstaben anzeigen.
 */
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    string name;
    int running = 1;
    cout << "Your name: ";
    getline(cin, name);
    cout << "Hello, " << name << "!" << endl;
    constexpr short  minValue = 1;
    constexpr short maxValue =  5;
    srand(time(0));
    short position =  (rand() % (maxValue - minValue + 1)) ;
    while (running) {
        char letters [] = {'A', 'B', 'C', 'D', 'E'};
        cout << "Which letter you choose? (A, B, C, D, E): ";
        char choosenLetter;
        cin >> choosenLetter;
        if (choosenLetter == letters[position]) {
            cout << "You won!👑" << endl;
            running = 0;
        } else{
            cout << "Ups, this is not the letter 😼"  << endl;
            cout <<"the letter was: " << letters[position] << endl;

        }
    }

    return 0;

}