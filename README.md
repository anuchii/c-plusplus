# 📘 Cplusplus

Ziel dieses Plans ist es, **stressfrei und gut vorbereitet** in das zweite Semester zu starten.  
Der Fokus liegt auf **Verständnis, sauberem Code und praxisnaher Anwendung** – genau so, wie es in der Lehrveranstaltung erwartet wird.

⏱️ Zeitaufwand: ca. **5–7 Stunden pro Woche**  
 Prinzip: **Lesen → Ausprobieren → Üben → Reflektieren**

---

## 🎯 Lernziele
Nach dieser Vorbereitung kannst du:
- Konsolenanwendungen in **C++** schreiben
- **objektorientierte Konzepte** sicher anwenden
- **STL & moderne C++ Features** nutzen
- Grundlagen der **Nebenläufigkeit** erklären
- einfache **Unit Tests** schreiben und den Sinn von Tests erklären

---

# 🗺️ Lernplan (6 Wochen)

## 🔹 Woche 1 – C++ Basics & Grundlagen
**Ziel:** Sicherheit im Umgang mit C++ Syntax und Struktur

### Inhalte
- Aufbau eines C++ Programms
- `main()`, Header (`.h`) & Source (`.cpp`)
- Datentypen & Funktionen
- Referenzen vs Pointer
- `const` korrekt einsetzen

### Praxis
- Kleine Konsolenprogramme schreiben
- Pointer & Referenzen vergleichen
- `const` bewusst einsetzen

---

## 🔹 Woche 2 – Klassen & Objekte
**Ziel:** Einstieg in objektorientiertes Denken

### Inhalte
- `class` vs `struct`
- Attribute & Methoden
- Konstruktor & Destruktor
- `public`, `private`

### Praxis
- Eigene Klassen erstellen
- Objekte erzeugen und verwenden
- Lebensdauer von Objekten beobachten

---

## 🔹 Woche 3 – Vererbung & Polymorphismus
**Ziel:** Zentrales OOP-Konzept verstehen (prüfungsrelevant)

### Inhalte
- Vererbung (`:`)
- `virtual`, `override`
- Basisklasse vs Subklasse
- Polymorphismus mit Referenzen & Pointern

### Praxis
- Gemeinsame Schnittstellen nutzen
- Methoden polymorph aufrufen

---

## 🔹 Woche 4 – STL, Templates & moderne Features
**Ziel:** Produktives Arbeiten mit C++

### Inhalte
- `std::vector`, `std::map`
- `std::algorithm` (`sort`, `find`)
- Templates (anwenden, nicht erfinden)
- Lambda-Ausdrücke

### Praxis
- Container befüllen & verarbeiten
- STL statt manueller Schleifen nutzen

---

## 🔹 Woche 5 – Nebenläufigkeit (Basics)
**Ziel:** Grundlagen der parallelen Programmierung verstehen

### Inhalte
- `std::thread`
- `join()`
- `std::mutex`
- Race Conditions (theoretisch)

### Praxis
- Mehrere Threads starten
- Gemeinsame Daten absichern

---

## 🔹 Woche 6 – Softwaretests & TDD
**Ziel:** Sauberer, professioneller Code

### Inhalte
- Warum Softwaretests wichtig sind
- Unit Test vs Integration Test
- Test Driven Development (TDD)
- Überblick über Testframeworks (Catch2 / GoogleTest)

### Praxis
- Einfache Unit Tests schreiben
- Testfälle logisch begründen

---

# 🧪 Übungsbeispiele (LV-Niveau)

## 🧩 Übung 1 – Klassen & Objekte
**Thema:** OOP-Grundlagen

### Aufgabe
Implementiere eine Klasse `Book` mit:
- Titel
- Autor
- Seitenanzahl

### Anforderungen
- Konstruktor zur Initialisierung
- Methode `printInfo()`
- Zwei Bücher im `main()` erzeugen

**Lernziel:** Objektorientiertes Design & saubere Klassenstruktur

---

## 🧩 Übung 2 – Vererbung & Polymorphismus
**Thema:** Zentrales OOP-Konzept

### Aufgabe
- Basisklasse `Shape` mit `virtual double area()`
- Abgeleitete Klassen `Rectangle` und `Circle`
- Polymorpher Aufruf über `Shape&` oder `Shape*`

**Lernziel:** Polymorphismus verstehen und korrekt einsetzen

---

## 🧩 Übung 3 – STL & Algorithmen
**Thema:** Moderne C++ Nutzung

### Aufgabe
- `std::vector<int>` mit Zufallszahlen
- Sortieren
- Größtes Element finden
- Gerade Zahlen mit Lambda ausgeben

**Lernziel:** STL & Lambdas sinnvoll einsetzen

---

## 🧩 Übung 4 – Threads & Mutex
**Thema:** Nebenläufigkeit

### Aufgabe
- Zwei Threads erhöhen gemeinsam einen Zähler
- Einmal **ohne Mutex**
- Einmal **mit Mutex**
- Unterschied erklären

**Lernziel:** Race Conditions & Synchronisation verstehen

---

## 🧩 Übung 5 – Unit Tests
**Thema:** Softwaretests

### Aufgabe
Gegeben:
```cpp
int add(int a, int b);
