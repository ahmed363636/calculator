#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void saisie (float *x, float *y);
float somme (float x, float y);
float soustraction (float x, float y);
float multiplication (float x, float y);
float division (float x, float y);
float puissance(float x, float y);
float racine(float x, float y);
void trigonometrie(float x, float y);
void logarithme(float x, float y);

int main ()
{
    int number;
    float x,y;
    char condition;

    do
    {
    printf("=============Bienvenue dans la calculatrice=============\n");
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
    default : printf("Erreur! operateur non valide\n");
    }

    printf("Si vous voulez quitter tapez q ou Q, sinon pour continuer tapez une autre touche\n");
    scanf(" %c",&condition);
    } while (condition != 'q' || condition != 'Q');
    return 0 ;
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
    int choix;
    float cos, sin, tan, asin, acos, atan, sinh, cosh, tanh;
    printf("Tapez 1 pour choisir x ou 2 pour choisir y\n");
    scanf("%d",&choix);

   switch (choix)
    {
       case 1 :
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
        break;
         case 2 :
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
