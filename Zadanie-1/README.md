# Program: „Moduł statystyk – funkcja get_stats”
Program napisany w języku C, który wczytuje z klawiatury tablicę liczb całkowitych, a następnie oblicza wartość minimalną, maksymalną oraz średnią arytmetyczną elementów tablicy. Obliczenia wykonywane są w osobnej funkcji get_stats, a wyniki zwracane są przez wskaźniki.

---

## Informacje techniczne
- **Język:** C  
- **Edytor:** Microsoft Visual Studio Code  
- **Kompilator:** Clang (`clang -Wall`)  
- **System:** Windows  

> 💡 Program skompilowany przy użyciu kompilatora Clang. Korzystałem z edytora MS Visual Studio Code.

---

## Kompilacja
Aby skompilować program, w terminalu uruchom:

```bash
clang -Wall Lab9.c
````


---
## Uruchomienie programu
Po kompilacji uruchom plik wykonywalny:

```bash
Lab9.exe
```
Program poprosi o podanie liczby elementów tablicy, a następnie o wprowadzenie odpowiedniej liczby liczb całkowitych. Następnie zwróci wynik.

---

### Przykłady działania

```
C:\Users\X\Desktop\homework>Lab9.exe
3
2 4 10
min=2 max=10 avg=5.33
```
```
C:\Users\X\Desktop\homework>Lab9.exe
3
26 46 99
min=26 max=99 avg=57.00

```

---

## Działanie programu

1. Program wczytuje liczbę elementów tablicy n.
2. Dynamicznie alokuje pamięć dla tablicy liczb całkowitych przy użyciu malloc.
3. Wczytuje n liczb całkowitych do tablicy.
4. Wywołuje funkcję get_stats, która:
- przechodzi po tablicy,
- wyznacza minimum i maksimum,
- oblicza średnią arytmetyczną elementów.
5. Program wypisuje wyniki w postaci: min=... max=... avg=....
6. Na końcu zwalnia zaalokowaną pamięć przy użyciu free.

---
## 👤 Autor

* **Imię / Pseudonim:** Piotr
* **Rok:** 2025
* **Środowisko:** Visual Studio Code + Clang

```
