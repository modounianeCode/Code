# 📚 Guide Complet du Langage C

## Table des matières
1. [Bases](#bases)
2. [Types de données](#types-de-données)
3. [Opérateurs](#opérateurs)
4. [Contrôle de flux](#contrôle-de-flux)
5. [Tableaux](#tableaux)
6. [Pointeurs](#pointeurs)
7. [Chaînes de caractères](#chaînes-de-caractères)
8. [Fonctions](#fonctions)
9. [Structures et unions](#structures-et-unions)
10. [Allocation dynamique](#allocation-dynamique)
11. [Fichiers](#fichiers)
12. [Préprocesseur](#préprocesseur)

---

## Bases

### Structure d'un programme C
```c
#include <stdio.h>        // Inclure une bibliothèque standard
#include "monFichier.h"   // Inclure un fichier personnalisé

int main() {
    printf("Hello, World!\n");
    return 0;  // Indique le succès du programme
}
```

### Compilation
```bash
gcc programme.c -o programme     # Compilation basique
gcc -Wall -g programme.c -o prog # Avec warnings et debug
./programme                      # Exécuter le programme
```

---

## Types de données

### Types primitifs
```c
char c = 'A';              // 1 byte, caractère ou petit entier
int x = 42;                // 4 bytes, entier standard
float f = 3.14f;           // 4 bytes, nombre décimal simple précision
double d = 3.14159;        // 8 bytes, nombre décimal double précision
short s = 100;             // 2 bytes, petit entier
long l = 1000000L;         // 4 ou 8 bytes, grand entier
unsigned int u = 42;       // Entier non signé (positif seulement)
```

### Taille des types
```c
sizeof(char)               // Afficher la taille en bytes
```

### Formats d'affichage printf
```c
printf("%d", int_var);              // entier
printf("%f", float_var);            // nombre décimal
printf("%s", string_var);           // chaîne
printf("%c", char_var);             // caractère
printf("%x", int_var);              // hexadécimal
printf("%.2f", float_var);          // 2 décimales
```

---

## Opérateurs

### Arithmétiques
```c
+ - * / %    // Addition, soustraction, multiplication, division, modulo
++ --        // Incrémentation, décrémentation
```

### Comparaison
```c
== != < > <= >=    // Égal, différent, plus petit, etc.
```

### Logiques
```c
&& || !     // ET, OU, NON logiques
```

### Bitwise
```c
& | ^ ~ << >>   // AND, OR, XOR, NOT, décalage gauche/droit
```

### Attribution
```c
= += -= *= /= %=    // Attribution et raccourcis
```

---

## Contrôle de flux

### If-Else
```c
if (condition) {
    // code
} else if (autre_condition) {
    // code
} else {
    // code
}
```

### Switch
```c
switch (variable) {
    case 1:
        // code
        break;
    case 2:
        // code
        break;
    default:
        // code
}
```

### Boucles

#### While
```c
while (condition) {
    // code
}
```

#### Do-While
```c
do {
    // code
} while (condition);
```

#### For
```c
for (int i = 0; i < 10; i++) {
    // code
}
```

#### Break et Continue
```c
break;      // Sortir de la boucle
continue;   // Passer à l'itération suivante
```

---

## Tableaux

### Déclaration et initialisation
```c
int tab[5];                        // Tableau de 5 entiers (non initialisé)
int tab[5] = {1, 2, 3, 4, 5};     // Avec initialisation
int tab[] = {1, 2, 3};            // Taille auto-détectée
char str[20];                      // Tableau de caractères
```

### Accès
```c
tab[0]      // Premier élément (indexation à partir de 0)
tab[i]      // Élément à l'index i
```

### Tableaux multidimensionnels
```c
int matrice[3][4];                          // Matrice 3x4
int matrice[3][4] = {{1,2,3,4}, ...};     // Avec initialisation
matrice[i][j]                              // Accès à l'élément [i][j]
```

### Parcourir un tableau
```c
for (int i = 0; i < 5; i++) {
    printf("%d ", tab[i]);
}
```

---

## Pointeurs

### Déclaration et initialisation
```c
int *p;              // Pointeur vers un entier (non initialisé)
int x = 42;
int *p = &x;         // Pointeur vers x
int *p = NULL;       // Pointeur NULL (sûr, ne pointe nulle part)
```

### Opérateurs
```c
&x      // Adresse de x (opérateur &)
*p      // Valeur pointée par p (déréférencement, opérateur *)
p->member  // Accès à un membre via pointeur (si p pointe une structure)
```

### Pointeurs et tableaux
```c
int tab[5] = {1, 2, 3, 4, 5};
int *p = tab;        // p pointe au premier élément
p[0]                 // Équivalent à tab[0]
*(p+1)               // Équivalent à tab[1]
```

### Pointeur de pointeur
```c
int x = 42;
int *p1 = &x;
int **p2 = &p1;      // Pointeur vers pointeur
**p2                 // Accès à la valeur x
```

### Arithmétique de pointeurs
```c
int *p = tab;
p++;                 // Passer au prochain élément
p += 2;              // Avancer de 2 éléments
int diff = p - tab;  // Différence entre adresses
```

---

## Chaînes de caractères

### Déclaration
```c
char str[20];                      // Tableau de caractères
char str[] = "Hello";              // Chaîne initialisée
char *str = "Hello";               // Pointeur vers chaîne (lecture seule)
```

### Fonctions utiles (string.h)
```c
#include <string.h>

strlen(str)         // Longueur de la chaîne
strcpy(dest, src)   // Copier src dans dest
strcat(str1, str2)  // Concatener str2 à str1
strcmp(str1, str2)  // Comparer deux chaînes (0 = égales)
strchr(str, 'c')    // Chercher le caractère 'c'
strstr(str, "sub")  // Chercher la sous-chaîne "sub"
```

### Lire une chaîne
```c
scanf("%s", str);            // Lire une chaîne (attention aux débordements)
fgets(str, 20, stdin);       // Safer alternative (limite 20 caractères)
gets(str);                   // ❌ DANGEREUX, ne pas utiliser
```

---

## Fonctions

### Déclaration et définition
```c
int ajouter(int a, int b) {
    return a + b;
}

int main() {
    int resultat = ajouter(5, 3);  // Appel
    return 0;
}
```

### Prototypes
```c
int ajouter(int a, int b);  // Déclaration avant main()

int main() {
    printf("%d\n", ajouter(5, 3));
}

int ajouter(int a, int b) {  // Définition
    return a + b;
}
```

### Paramètres par valeur et par référence
```c
void modifParValeur(int x) {
    x = 100;  // Modifie la copie locale, pas l'original
}

void modifParReference(int *x) {
    *x = 100;  // Modifie la valeur pointée
}

int main() {
    int a = 5;
    modifParValeur(a);      // a reste 5
    modifParReference(&a);  // a devient 100
}
```

### Fonction void
```c
void afficher() {
    printf("Hello!\n");
    // Pas de return
}
```

### Récursion
```c
int factorielle(int n) {
    if (n <= 1) return 1;      // Cas de base
    return n * factorielle(n-1);  // Cas récursif
}
```

---

## Structures et unions

### Structures
```c
struct Personne {
    char nom[50];
    int age;
    float taille;
};

// Création et initialisation
struct Personne p1;
p1.age = 30;
p1.taille = 1.75f;

// Ou avec initialisation directe
struct Personne p2 = {"Alice", 28, 1.65f};

// Via pointeur
struct Personne *pp = &p1;
pp->age = 31;  // Équivalent à (*pp).age = 31
```

### Typedef pour simplifier
```c
typedef struct {
    char nom[50];
    int age;
} Personne;

Personne p = {"Bob", 35};  // Sans "struct"
```

### Unions (une seule valeur à la fois)
```c
union Donnee {
    int i;
    float f;
    char c;
};

union Donnee d;
d.i = 42;      // Modifie la mémoire partagée
d.f = 3.14;    // Écrase la valeur précédente
```

---

## Allocation dynamique

### malloc et free
```c
#include <stdlib.h>

int *p = (int*)malloc(sizeof(int));      // Allouer mémoire pour 1 entier
int *tab = (int*)malloc(10 * sizeof(int)); // Tableau de 10 entiers

if (p == NULL) {
    printf("Erreur d'allocation!\n");
    return 1;
}

*p = 42;           // Utiliser la mémoire
free(p);           // Libérer la mémoire
p = NULL;          // Bonne pratique
```

### calloc (initialise à 0)
```c
int *tab = (int*)calloc(10, sizeof(int));  // Alloue et initialise à 0
free(tab);
```

### realloc (redimensionner)
```c
int *tab = (int*)malloc(5 * sizeof(int));
tab = (int*)realloc(tab, 10 * sizeof(int));  // Redimensionner à 10
free(tab);
```

### Allocation de matrice dynamique - Méthode 1 (fragmentée)
```c
int **matrice = (int**)malloc(3 * sizeof(int*));  // 3 lignes
for (int i = 0; i < 3; i++) {
    matrice[i] = (int*)malloc(4 * sizeof(int));   // 4 colonnes
}

// Libération
for (int i = 0; i < 3; i++)
    free(matrice[i]);
free(matrice);
```

### Allocation de matrice dynamique - Méthode 2 (contiguë - RECOMMANDÉE)
```c
int *matrice = (int*)malloc(3 * 4 * sizeof(int));  // Une seule allocation

// Accès: matrice[i*colonne + j]
matrice[0*4 + 0] = 5;
matrice[1*4 + 2] = 10;

free(matrice);  // Une seule libération
```

---

## Fichiers

### Ouverture et fermeture
```c
#include <stdio.h>

FILE *f = fopen("fichier.txt", "r");   // "r" = lecture
// Modes: "w" = écriture, "a" = ajout, "r+" = lecture/écriture

if (f == NULL) {
    printf("Erreur: fichier introuvable!\n");
    return 1;
}

// Utiliser le fichier...

fclose(f);  // Toujours fermer le fichier
```

### Lire
```c
char ligne[100];
fgets(ligne, 100, f);       // Lire une ligne
fscanf(f, "%d", &x);        // Lire formaté

int c = fgetc(f);           // Lire un caractère
```

### Écrire
```c
fprintf(f, "Hello %d\n", 42);  // Écrire formaté
fputs("Texte\n", f);           // Écrire une chaîne
fputc('A', f);                 // Écrire un caractère
```

### Parcourir un fichier
```c
while (fgets(ligne, 100, f) != NULL) {
    printf("%s", ligne);
}
```

### Vérifier la fin du fichier
```c
if (feof(f)) {
    printf("Fin du fichier atteinte!\n");
}
```

---

## Préprocesseur

### Inclusions
```c
#include <stdio.h>      // Bibliothèque standard
#include "monFichier.h" // Fichier personnel
```

### Macro-définitions
```c
#define PI 3.14159
#define MAX(a, b) ((a) > (b) ? (a) : (b))

printf("%f\n", PI);           // Remplacé par 3.14159
int max = MAX(5, 10);         // Remplacé par ((5) > (10) ? (5) : (10))
```

### Compilation conditionnelle
```c
#ifdef DEBUG
    printf("Mode débogage activé\n");
#endif

#if defined(LINUX)
    // Code pour Linux
#elif defined(WINDOWS)
    // Code pour Windows
#endif

#ifndef MAX_SIZE
    #define MAX_SIZE 100
#endif
```

### Undef
```c
#define DEBUG
// ... code ...
#undef DEBUG  // Supprimer la macro
```

---

## 📋 Checklist - Bonnes pratiques

- ✅ Toujours initialiser les pointeurs : `int *p = NULL;`
- ✅ Vérifier le retour de malloc : `if (p == NULL) { ... }`
- ✅ Libérer toute mémoire allouée : `free(p);`
- ✅ Mettre `NULL` après un free : `p = NULL;`
- ✅ Utiliser `fgets()` au lieu de `gets()` pour lire des chaînes
- ✅ Protéger les `#ifndef` dans les fichiers headers
- ✅ Compiler avec `-Wall -g` : `gcc -Wall -g prog.c -o prog`
- ✅ Tester les conditions d'erreur (fopen == NULL, malloc == NULL)
- ✅ Utiliser `const` pour les valeurs non modifiables
- ✅ Commenter le code complexe

---

## ⚠️ Erreurs courantes

| Erreur | Problème | Solution |
|--------|----------|----------|
| Segmentation fault | Accès mémoire invalide | Vérifier les pointeurs et indices |
| Fuite mémoire | Oubli de free() | Libérer toute mémoire allouée |
| Buffer overflow | Débordement de tableau | Vérifier les limites de boucles |
| Pointeur suspendu | Accès après free() | Mettre p = NULL après free(p) |
| Compteur non initialisé | Variable non définie | Initialiser : `int i = 0;` |

---

## 🔗 Ressources complémentaires

### Bibliothèques standard utiles
```c
#include <stdio.h>      // Entrée/sortie (printf, scanf, FILE)
#include <stdlib.h>     // Utilitaires (malloc, free, rand, exit)
#include <string.h>     // Fonctions chaînes (strlen, strcpy, strcmp)
#include <math.h>       // Mathématiques (sqrt, sin, cos, pow)
#include <time.h>       // Temps (time, clock)
#include <ctype.h>      // Tests caractères (isdigit, isalpha)
#include <limits.h>     // Limites des types (INT_MAX, INT_MIN)
#include <assert.h>     // Assertions (assert)
```

---

**Dernière mise à jour : 2026-07-06**
