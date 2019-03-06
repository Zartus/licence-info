#include <stdio.h>
#include <math.h>

#define ORDRE 10
#define PRECISION pow(10, -10)

int main() 
{
    double tableau[ORDRE][ORDRE];
    int ordreUtil;
    int symCount = 0;
    printf("Enter Ordre of your matrix: ");
    scanf("%d", &ordreUtil);

    for(int i = 0; i < ordreUtil; i++) // INITIALISE LE TABLEAU
    {
        printf("Ligne %d: ", i+1);
        for(int j = 0; j < ordreUtil; j++)
        {
            scanf("%lf", &tableau[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < ordreUtil; i++) // Cherche a savoir si la matrice est symétrique
    {
        for(int j = i+1; j < ordreUtil; j++)
        {// egal si précis a 10-10
            if (fabs(tableau[i][j] - tableau[j][i]) < PRECISION)
            {
                symCount += 1;
            }
        }
    }
    if (symCount == (ordreUtil*ordreUtil))  // OU ALORS BOOLEEN (1/0), val change si prob
    {
        printf("La matrice est symétrique\n");
    }
    return 0;
}