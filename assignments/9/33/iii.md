 1. Zeile 6: `double` sollte `int` sein.
 2. Zeile 7: Arrays (oder Strings) können nicht einfach so kopiert werden. (Es müsste `strcpy` verwendet werden?)
 3. Zeile 6: Pointer kann keinen integer Wert annehmen.
 4. Zeile 7: `p` ist kein Array, deshalb zugriff auf nicht reservierten / vorhergesehenen Speicher.
