**Ausgangssituation:**

````c
// Beispielinhalte für 100 und 103:
SZ 100: 43
SZ 103: 19
SZ 400: ADD 103, 100

PC: 400
````

**Vorgang:**

 - `FETCH:` Inhalt von `SZ 400` aus Speicherwerk über `RM` nach `IR` holen
 - `DECODE:` Erkennen und zerlegen des Befehls:
   - `ADD` Addition zweier Werte
   - `103` Zielregister
   - `100` Ursprungsregister
   - Aufgabe: Inhalt von `SZ 100` auf Inhalt von `SZ 103` zu addieren und
     in `SZ 103` speichern
 - `EXECUTE:`
   - `(E)`
     - Lade Inhalt von `SZ 103` (19) über `RM` nach `AR1`
     - Lade Inhalt von `SZ 100` (43) über `RM` nach `AR2`
   - `(V)` Führe `ADD` von `AR1` (19) und `AR2` (43) aus (19 + 43 = 62)
   - `(A)` Schreibe Ergebnis (62) über `WM` nach `SZ 103`
   - Befehlszähler `PC` auf nächsten Wert setzen

**Schlusszustand:**

 ````c
 SZ 100: 43
 SZ 103: 62
 SZ 400: ADD 103, 100

 PC: 401
 ````
