# PodstawyC-

Repozytorium ze zadaniami z programowania w C++ (pierwszy rok studiow). Kazde zadanie jest w osobnym pliku `.cpp`, pogrupowane wedlug rozdzialow tematycznych — od podstaw jezyka, przez petle, tablice i funkcje, az po wskazniki, struktury i pliki.


## Struktura

| Folder | Temat |
|--------|-------|
| `pierwszy/` | Pierwszy program w C++ |
| `drugi/` | Instrukcja warunkowa |
| `rozdzial3/` | Instrukcja `switch` |
| `rozdzial4/` | Petle `while` i `do-while` |
| `rozdzial5/` | Petle `for` |
| `rozdzial6/` | Tablice |
| `rozdzial7/` | Tablice znakowe |
| `rozdzial8/` | Funkcje |
| `rozdzial9/` | Rekurencja i przeciazenie funkcji |
| `rozdzial10/` | Wskazniki |
| `rozdzial11/` | Struktury |
| `rozdzial12/` | Operacje na plikach |

Pliki maja nazwy `zadanie1.cpp`, `zad_pcie2.cpp` itd.

## Jak uruchomic program

### 1. Wejdz do folderu z zadaniem

```powershell
cd "C:\Users\Mlodszy Dzekson\Desktop\C++\rozdzial3"
```

### 2. Skompiluj

```powershell
g++ zad_pcie1.cpp -o zad_pcie1.exe
```

### 3. Uruchom

```powershell
.\zad_pcie1.exe
```

Program wyswietli komunikaty w konsoli — wpisuj dane zgodnie z instrukcjami na ekranie.

### Przyklad (rozdzial 3, zadanie 1)

```powershell
cd "C:\Users\Mlodszy Dzekson\Desktop\C++\rozdzial3"
g++ zad_pcie1.cpp -o zad_pcie1.exe
.\zad_pcie1.exe
```

## Rozdzial 12 — pliki tekstowe

Zadania z `rozdzial12/` korzystaja z pliku `dane.txt`. **Uruchamiaj je z tego folderu**, zeby program znalazl plik:

```powershell
cd "C:\Users\Mlodszy Dzekson\Desktop\C++\rozdzial12"
g++ zad_pcie1.cpp -o zad_pcie1.exe
.\zad_pcie1.exe
```

## Uwagi

- Wiekszosc programow wymaga danych z klawiatury.
- Zadania z `rand()` (losowanie) moga dawac rozne wyniki przy kazdym uruchomieniu.
- Po kompilacji powstaje plik `.exe` w tym samym folderze — nie trafia on do repozytorium (jest w `.gitignore`).
