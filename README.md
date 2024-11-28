# Piscine 42

## Description

La **Piscine 42** est une expérience immersive de quatre semaines conçue pour initier les étudiants aux bases de la programmation en C, ainsi qu'à l'environnement de développement spécifique de l'école 42. Cette période intensive permet d'acquérir des compétences fondamentales en programmation, en gestion de projet, et en collaboration.

## Objectifs pédagogiques

Pendant la Piscine, les participants apprennent :
- Les bases de la programmation en C.
- La gestion de la mémoire et les pointeurs.
- La manipulation des fichiers et des répertoires en ligne de commande.
- La structuration d’un projet logiciel.
- L’apprentissage en autonomie et le travail collaboratif.

## Structure de la Piscine

La Piscine est organisée autour de plusieurs types d’activités :
- **Exercices quotidiens** : Résolution de problèmes progressifs en C.
- **Rushs** : Projets collaboratifs réalisés en équipe.
- **Examens** : Tests hebdomadaires pour évaluer les compétences acquises.

## Contenu typique

Voici un aperçu des concepts abordés :
1. **Jour 00** : Initiation au shell et premiers pas en C.
2. **Jour 01** : Boucles, conditions, et manipulation de chaînes.
3. **Jour 02** : Tableaux, fonctions, et premières allocations mémoire.
4. **Jour 03** : Fonctions récursives, tri et algorithmes simples.
5. **Jour 04** : Gestion de fichiers, structures, et plus encore.
6. **Examens hebdomadaires** : Tests en temps limité sur des problèmes similaires aux exercices.

## Exemple de code

Voici un exemple de fonction réalisée pendant la Piscine :

```c
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int	main(void)
{
	ft_putstr("Bonjour, 42 !\n");
	return (0);
}
```

## Installation et configuration

Pour compiler et exécuter vos fichiers pendant la Piscine :
1. Créez un fichier avec l'extension `.c`.
2. Compilez-le avec `gcc` :
   ```bash
   gcc -Wall -Wextra -Werror your_file.c -o output
   ```
3. Exécutez votre programme :
   ```bash
   ./output
   ```

## Collaboration et peer-learning

L'un des aspects les plus importants de la Piscine est le **peer-learning**, où les étudiants sont encouragés à :
- Poser des questions et échanger des idées avec leurs pairs.
- Utiliser les ressources disponibles (manuels, forums internes).
- Partager leurs apprentissages et expériences.

## Auteur

**Nathan** - Étudiant à l'école 42.  
Participation à la Piscine en [mois/année].

---

Tu peux adapter ce README avec des informations spécifiques à ta Piscine (comme les dates, les projets spécifiques, ou des anecdotes personnelles). Si tu veux des modifications ou des détails supplémentaires, fais-moi signe ! 😊
