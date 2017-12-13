1. `gcc -c a.c`
2. `gcc -E a.c` führt nur den Präprozessor aus und wandelt den Quellcode in erweiterten Quellcode um.
3. `gcc a.o b.o c.o -o c.out` (evtl wird noch eine `main.c` datei benötigt, also `gcc a.o b.o c.o main.c -o c.out`)
