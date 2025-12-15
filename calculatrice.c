#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

void fonction_mathematique (float x, float y);
void algebre_et_logique (float x, float y);
void statistique ();
void fonction_logique_numerique ();

void saisie (float *x, float *y);
float somme (float x, float y);
float soustraction (float x, float y);
float multiplication (float x, float y);
float division (float x, float y);
float puissance(float x, float y);
float racine(float x, float y);
void trigonometrie(float x, float y);
void logarithme(float x, float y);
void factoriel(float x, float y);
void exponentiel(float x, float y);
void pourcentage (float x, float y);

int main ()
{
    int number;
    char condition;
    float x,y;

    do
    {
        printf("==========================Bonjour==========================\n");
        printf("==========================Bienvenue à la calculatrice scientifique==========================\n");
        printf("==========================De la commence votre parcours de reussite==========================\n");
        printf("=============maintenant=============\n");
        printf("Vous devez choisir quelle genre d'operation que vous voulez executer\n");
        printf("Si vous voulez les fonctions mathématiques tapez 1\n");
        printf("Si vous voulez les algèbres et la logique tapez 2\n");
        printf("Si vous voulez les statistiques tapez 3\n");
        printf("Si vous voulez les fonctions logiques ou numeriques tapez 4\n");

        printf("Maintenant c'est votre tour pour tapez le nombre souhaite\n");
        scanf("%d",&number);

        printf("=============maintenant=============\n");
        printf("je resoudrai votre probleme cher utilisateur\n");

       switch (number)
       {
         case 1 : fonction_mathematique (x,y);
         break;
         case 2 : algebre_et_logique (x,y);
         break;
         case 3 : 
         break;
         case 4 : 
         break;
         default : printf("Erreur! operateur non valide\n");
       }

       printf("Si vous voulez quitter tapez soit q soit Q, si vous voulez continuer tapez n'importe quelle touche\n");
       scanf(" %c",condition);

    } while (condition != 'q' && condition != 'Q');
    
    return 0;
}



    void fonction_mathematique ()
    {
        int number;
        float x,y;

        printf("=============Vous avez choisi la fonction mathematique=============\n");
        saisie(&x,&y);
        printf("=============maintenant=============\n");
        printf("Vous devez tapez votre operateur que vous vouliez\n");
        printf("Si vous voulez la somme tapez 1\n");
        printf("Si vous voulez la soustraction tapez 2\n");
        printf("Si vous voulez la multiplication tapez 3\n");
        printf("Si vous voulez la division tapez 4\n");
        printf("Si vous voulez la puissance tapez 5\n");
        printf("Si vous voulez la racine tapez 6\n");
        printf("Si vous voulez la trigonometrie tapez 7\n");
        printf("Si vous voulez le logarithme tapez 8\n");
        printf("si vous voulez le factoriel tapez 9\n");
        printf("si vous voulez l'exponentiel tapez 10\n");
        printf("si vous voulez le pourcentage tapez 11\n");

        printf("Maintenant c'est votre tour pour tapez le nombre souhaite\n");
        scanf("%d",&number);

        printf("=============maintenant=============\n");
        printf("Votre resultat souhaite est\n");

        switch (number)
         {
            case 1 : printf("La somme telque a + b = %.2f\n",somme(x,y));
            break;
            case 2 : printf("La soustraction telque a - b = %.2f\n",soustraction(x,y));
            break;
            case 3 : printf("La multiplication telque a * b = %.2f\n",multiplication(x,y));
            break;
            case 4 : printf("La division telque a / b = %.2f\n",division(x,y));
            break;
            case 5 : printf("La puissance telque a^b = %.2f\n",puissance(x,y));
            break;
            case 6 : printf("La racine  = %.2f\n",racine(x,y));
            break;
            case 7 : printf("Pour la trigonometrie\n");
                     trigonometrie(x,y);
            break;
            case 8 : printf("Pour le logarithme\n");
                     logarithme(x,y);
            break;
            case 9 : printf("Pour le factoriel\n");
                     factoriel(x,y);
            break;
            case 10 : printf("Pour l'exponentiel\n");
                     exponentiel(x,y);
            break;
            case 11 : printf("Pour le pourcentage\n");
                     pourcentage(x,y);
            break;
            default : printf("Erreur! operateur non valide\n");
         }
    }


    void saisie (float *x, float *y)
{
    printf("Tapez votre x de votre choix\n");
    scanf("%f",x);

    printf("Tapez votre y de votre choix\n");
    scanf("%f",y);
}

float somme (float x, float y)
{
    float somme;

    somme = x + y;

    return somme;
}

float soustraction (float x, float y)
{
    float soustraction;

    soustraction = x - y;

    return soustraction;
}

float multiplication (float x, float y)
{
    float multiplication;

    multiplication = x * y;

    return multiplication;
}

float division (float x, float y)
{
    float division;

    if( y == 0 )
    {
        printf("Erreur! Division par zero.\n");
        exit(1);
    }
    else
    {
        division = x / y;
    }

    return division;
}

float puissance(float x, float y)
{
    float puissance;

    puissance = pow(x, y);

    return puissance;
}

float racine(float x, float y)
{
    float racine;
    int choix;

    printf("Tapez 1 pour racine carree et 2 pour racine cubique et 3 ou la racine n ieme\n");
    scanf("%d",&choix);

    switch (choix)
    {
        case 1 : racine = sqrt(x);
        break;
        case 2 : racine = cbrt(x);
        break;
        case 3 : racine = pow(x, 1.0/y);
        break;
        default : printf("Erreur! operateur non valide\n");
    }

    return racine;
}

void trigonometrie(float x, float y)
{
    int choix, unit;
    float cos, sin, tan, asin, acos, atan, sinh, cosh, tanh;
    printf("Tapez 1 pour choisir x ou 2 pour choisir y\n");
    scanf("%d",&choix);

   switch (choix)
    {
       case 1 :
       printf("Tapez 1 si vous voulez le calcule par radian ou 2 pour degre\n");
       scanf("%d",&unit);
       if (unit == 2)
       {
           x = x * (M_PI / 180.0);
       }    
            cos = cosf(x);
            printf("Le cosinus de x est %.2f\n", cos);
            sin = sinf(x);
            printf("Le sinus de x est %.2f\n", sin);
            tan = tanf(x);
            printf("La tangente de x est %.2f\n", tan);
            asin = asinf(x);
            printf("L'arcsinus de x est %.2f\n", asin);
            acos = acosf(x);
            printf("L'arccosinus de x est %.2f\n", acos);
            atan = atanf(x);
            printf("L'arctangente de x est %.2f\n", atan);
            sinh = sinhf(x);
            printf("L'hyperbolique sinus de x est %.2f\n", sinh);
            cosh = coshf(x);
            printf("L'hyperbolique cosinus de x est %.2f\n", cosh);
            tanh = tanhf(x);
            printf("L'hyperbolique tangente de x est %.2f\n", tanh);

        else if (unit == 1)
        { cos = cosf(x);
            printf("Le cosinus de x est %.2f\n", cos);
            sin = sinf(x);
            printf("Le sinus de x est %.2f\n", sin);
            tan = tanf(x);
            printf("La tangente de x est %.2f\n", tan);
            asin = asinf(x);
            printf("L'arcsinus de x est %.2f\n", asin);
            acos = acosf(x);
            printf("L'arccosinus de x est %.2f\n", acos);
            atan = atanf(x);
            printf("L'arctangente de x est %.2f\n", atan);
            sinh = sinhf(x);
            printf("L'hyperbolique sinus de x est %.2f\n", sinh);
            cosh = coshf(x);
            printf("L'hyperbolique cosinus de x est %.2f\n", cosh);
            tanh = tanhf(x);
            printf("L'hyperbolique tangente de x est %.2f\n", tanh);
}

        break;
         case 2 :
            printf("Tapez 1 si vous voulez le calcule par radian ou 2 pour degre\n");
            scanf("%d",&unit);
            if (unit == 2)
            {
                y = y * (M_PI / 180.0);
            }   
            cos = cosf(y);
            printf("Le cosinus de y est %.2f\n", cos);
            sin = sinf(y);
            printf("Le sinus de y est %.2f\n", sin);
            tan = tanf(y);
            printf("La tangente de y est %.2f\n", tan);
            asin = asinf(y);
            printf("L'arcsinus de y est %.2f\n", asin);
            acos = acosf(y);
            printf("L'arccosinus de y est %.2f\n", acos);
            atan = atanf(y);
            printf("L'arctangente de y est %.2f\n", atan);
            sinh = sinhf(y);
            printf("L'hyperbolique sinus de y est %.2f\n", sinh);
            cosh = coshf(y);
            printf("L'hyperbolique cosinus de y est %.2f\n", cosh);
            tanh = tanhf(y);
            printf("L'hyperbolique tangente de y est %.2f\n", tanh);
            else if (unit == 1)
            {
                cos = cosf(y);
                printf("Le cosinus de y est %.2f\n", cos);
                sin = sinf(y);
                printf("Le sinus de y est %.2f\n", sin);
                tan = tanf(y);
                printf("La tangente de y est %.2f\n", tan);
                asin = asinf(y);
                printf("L'arcsinus de y est %.2f\n", asin);
                acos = acosf(y);
                printf("L'arccosinus de y est %.2f\n", acos);
                atan = atanf(y);
                printf("L'arctangente de y est %.2f\n", atan);
                sinh = sinhf(y);
                printf("L'hyperbolique sinus de y est %.2f\n", sinh);
                cosh = coshf(y);
                printf("L'hyperbolique cosinus de y est %.2f\n", cosh);
                tanh = tanhf(y);
                printf("L'hyperbolique tangente de y est %.2f\n", tanh);
            }
        break;
        default : printf("Erreur! operateur non valide\n"); 
    }
}

void logarithme(float x, float y)
{
    float log,log10;
    log = logf(x);
    printf("Le logarithme naturel de x est %.2f\n", log);
    log10 = log10f(y);
    printf("Le logarithme base 10 de y est %.2f\n", log10);
}

void factoriel(float x, float y)
{
    int i, number;
    float factoriel = 1;
    printf("Tapez 1 si vous vouliez utilisez x ou 2 si vous vous voulez utilisez y\n");
    scanf("%d",&number);

    switch (number)
    {
        case 1 :
        for (i = 1; i <= x; i++)
        {
            factoriel = factoriel * i;
        }
         printf("%.2f ! = %.2f\n", x, factoriel);
        break;
        case 2 : 
        for (i = 1; i <= y; i++)
        {
            factoriel = factoriel * i;
        }
         printf("%.2f ! = %.2f\n", y, factoriel);
        break;
        default : printf("Non, recommencez encore une fois");
    }
}

void exponentiel (float x, float y)
{
    float exponentiel;
    int number;

    printf("Tapez 1 si vous voulez x ou tapez 2 si vous voulez y");
    scanf("%d",&number);

    switch (number)
    {
        case 1 : exponentiel = exp(x);
        printf("l'exponentiel de %.2f est %.2f\n", x, exponentiel);
        break;
        case 2 : exponentiel = exp(y);
        printf("l'exponentiel de %.2f est %.2f\n", y, exponentiel);
        break;
    }
}

void pourcentage (float x, float y)
    {
        float pourcentage;
        int number;

        printf("Tapez 1 si vous voulez x ou tapez 2 si vous voulez y");
        scanf("%d",&number);

        switch (number)
        {
            case 1 : pourcentage = x / 100;
            printf("Le pourcentage de %.2f est %.2f\n", x, pourcentage);
            break;
            case 2 : pourcentage = y / 100;
            printf("Le pourcentage de %.2f est %.2f\n", y, pourcentage);
            break;
        }
    }

    void valabsolue (float x, float y)
    {
        float valabsolue;
        int number;

        printf("Tapez 1 si vous voulez x ou tapez 2 si vous voulez y");
        scanf("%d",&number);

        switch (number)
        {
            case 1 : valabsolue = fabsf(x);
            printf("La valeur absolue de %.2f est %.2f\n", x, valabsolue);
            break;
            case 2 : valabsolue = fabsf(y);
            printf("La valeur absolue de %.2f est %.2f\n", y, valabsolue);
            break;
        }
    }



    /*void algebre_et_logique ()
    {}

    void statistique ()
    {}

    void fonction_logique_numerique ()
    {}
    