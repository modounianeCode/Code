# Comparaison : exo3.c vs exo3.1.c

## 📌 Objectif
Addition de deux matrices dynamiques en C avec deux approches d'allocation mémoire différentes.

---

## 🔍 Comparaison détaillée

### 1️⃣ **Allocation mémoire**

#### exo3.c - Allocation fragmentée (Tableau de pointeurs)
```c
int** allouer_dynamiquement(int ligne, int colonne){
    int **tab;
    tab = malloc(ligne * sizeof(int*));           // 1 allocation pour les pointeurs
    for (int i = 0; i < ligne; i++)
    {
        tab[i] = malloc(colonne * sizeof(int));   // ligne allocations pour les données
    }
    return tab;
}
```
- **Total d'allocations** : 1 + ligne = `ligne + 1`
- **Structure mémoire** : Les lignes sont dispersées en mémoire (fragmentée)

#### exo3.1.c - Allocation contiguë (Bloc unique)
```c
int* allouer_matrice_continu(int ligne, int colonne){
    return (int*)malloc(ligne * colonne * sizeof(int));  // 1 seule allocation
}
```
- **Total d'allocations** : 1
- **Structure mémoire** : Bloc continu en mémoire (idéal pour le cache CPU)

---

### 2️⃣ **Accès aux éléments**

#### exo3.c
```c
somme[i][j]              // Syntaxe array-of-arrays
// Equivalent à: *(*(somme + i) + j)
// Double déréférencement (deux accès mémoire)
```

#### exo3.1.c
```c
somme[i * colonne + j]   // Formule linéaire
// Accès direct par décalage
// Un seul accès mémoire
```

---

### 3️⃣ **Remplir une matrice**

#### exo3.c
```c
void remplirMatrice(int nLigne, int nColonne, int tab[nLigne][nColonne]){
    for (int i = 0; i < nLigne; i++)
    {
        for (int j = 0; j < nColonne; j++)
        {
            scanf("%d", *(tab+i)+j);  // Arithmétique de pointeurs
        }
    }
}
```

#### exo3.1.c
```c
void remplirMatrice(int nLigne, int nColonne, int *tab){
    for (int i = 0; i < nLigne; i++)
    {
        for (int j = 0; j < nColonne; j++)
        {
            scanf("%d", &tab[i * nColonne + j]);  // Index simple
        }
    }
}
```

---

### 4️⃣ **Libération mémoire**

#### exo3.c
```c
// Libération complexe (ligne + 1 free)
for (int i = 0; i < matLigne; i++)
    free(somme[i]);      // Libérer chaque ligne
free(somme);             // Libérer le tableau de pointeurs
```

#### exo3.1.c
```c
// Libération simple (1 free)
free(somme);             // Libérer le bloc continu
```

---

## 📊 Tableau comparatif

| Critère | exo3.c | exo3.1.c |
|---------|--------|----------|
| **Allocations malloc** | `ligne + 1` | 1 |
| **Deallocations free** | `ligne + 1` | 1 |
| **Fragmentation mémoire** | ❌ Haute | ✅ Nulle |
| **Localité spatiale** | ❌ Pauvre | ✅ Excellente |
| **Performance cache** | ❌ Mauvaise | ✅ Optimale |
| **Syntaxe d'accès** | `tab[i][j]` | `tab[i*col+j]` |
| **Complexité code** | Moyenne | Simple |
| **Flexibilité** | ✅ Meilleure | Bonne |
| **Risque fuite mémoire** | ❌ Plus élevé | ✅ Moins élevé |

---

## 🎯 Résultats de test

**Entrée :**
```
2 2
1 2
3 4
5 6
7 8
```

**Sortie (identique pour les deux) :**
```
Matrice 1 :    Matrice 2 :    Addition :
1|2|           5|6|           6|8|
3|4|           7|8|           10|12|
```

---

## 💡 Quand utiliser quoi ?

### **exo3.c (Tableau de pointeurs)** - À utiliser si :
- ✅ Besoin de flexibilité (lignes de tailles différentes)
- ✅ Travail avec des matrices creuses
- ✅ Modifications fréquentes de la structure

### **exo3.1.c (Bloc continu)** - À utiliser si :
- ✅ Matrice régulière (toutes les lignes même taille) ⭐ **RECOMMANDÉ**
- ✅ Performance critique
- ✅ Code simple et maintenable
- ✅ Allocation/déallocation fréquentes

---

## 🚀 Conclusion

**exo3.1.c est la meilleure approche** pour les matrices régulières car :
1. Plus rapide (meilleure utilisation du cache CPU)
2. Code plus simple et moins d'erreurs
3. Moins de risque de fuite mémoire
4. Plus efficace en termes d'allocations

La version exo3.c reste utile dans les cas où la flexibilité est nécessaire.

---

## 📝 Compilation et exécution

```bash
# Compiler exo3.c
gcc exo3.c -o exo3

# Compiler exo3.1.c
gcc exo3.1.c -o exo3.1

# Exécuter avec les mêmes données
./exo3
./exo3.1
```
