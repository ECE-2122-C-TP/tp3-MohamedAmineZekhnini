#include <stdio.h>
int Exercice3(void) {
    int c = 0, p = 3;
    printf("Entrez un entier :\n");
    scanf("%d", &c);
    if (c % p == 0)
    {
        printf("%d est un multiple de 3\n", c);
    }
    if (c >= 10)

    {
        printf("%d est superieur ou égal à 10\n", c);
    }
}

int Exercice2(void) {
    int largeur = 0, longueur = 0;
    printf("Entrez la largeur et la longueur :\n");
    scanf("%d %d", &largeur, &longueur);
    printf("Le perimetre de ce rectangle vaut %d\n", (largeur+longueur)*2);
    printf("L'aire de ce rectangle vaut %d", (largeur*longueur));
    return 0;
}
int Exercice1(void) {
    int entier1=0, entier2=0;
    printf("Entrez les valeurs de entier1 et entier2 :\n");
    scanf("%d %d", &entier1, &entier2);
    if (entier1 > entier2)
    {
        printf("%d",entier1);
    }
    else
    {
        printf("%d",entier2);

    }
    return 0;
}
#define AGE_ENFANT 12
#define AGE_JEUNE 17
#define AGE_ETUDIANT 27
#define AGE_SENIOR 65

int Exercice4(void) {
    int age = 0, etudiant = 0;
    printf("Entrez votre age :\n");
    scanf("%d", &age);
    printf("Saisissez 1 si vous etes etudiant :\n");
    scanf("%d", &etudiant);
    if (age <= AGE_ENFANT)
    {
        printf("le tarif est de 4 euros");

    }
    else if (age <= AGE_JEUNE || (etudiant == 1 && age <= AGE_ETUDIANT))
    {
        printf("Le tarif est de 6");
    }
    else if (age >= AGE_SENIOR)
    {
        printf("le tarif est de 6");
    }
    else
    {
        printf("Le tarif est de 9");
    }
    return 0;
}
int Exercice5(void) {
    int b=0;
    printf("Entrez le numéro de la boisson :\n");
    scanf("%d", &b);
    if (b==1)
    {
        printf("Vous avez pris un jus");
    }
    else if (b==2)
    {
        printf("Vous avez pris un soda");
    }
    else if (b==3)
    {
        printf("Vous avez pris de l'eau");
    }
    else if (b==10)
    {
        printf("Vous avez pris un thé");
    }
    else if (b==11)
    {
        printf("Vous avez pris un café");
    }
    else
    {
        printf("Vous avez tapé un numero inexistant");
    }
    return 0;
}
int Exercice6(void) {
    float note1 = 0, note2 = 0, note3 = 0;
    do {
        printf("Entrez les notes:\n");
        scanf("%f %f %f", &note1, &note2, &note3);
    }
    while (note1 < 0 || note1 > 20 || note2 < 0 || note2 > 20 || note3 < 0 || note3 > 20);
    float moyenne = (note1 + note2 + note3) / 3;
    printf("La moyenne des notes est %f", moyenne);
    return 0;
}
int Exercice7(void) {
    int nbClasse=0,i=1,nbEleves=0,totalEleves=0;
    printf("Saisir le nombre de classes ouvertes:\n");
    scanf("%d",&nbClasse);
    for (i = 1; i<=nbClasse; i++)
    {
        printf("Saisir le nombre d'éleves de la classe %d",i);
        scanf("%d",&nbEleves);
        totalEleves=totalEleves+nbEleves;
    }
    printf("le nombre total d'éleves est %d",totalEleves);
    return 0;
}
int Exercice8(void) {
    int k=0;
    do {
        printf("saisir un entier à la fois multiple de 7 et multiple de 2:\n");
        scanf("%d",&k);
    }
    while( !(k % 2 == 0 && k % 7 == 0) );
    return 0;
}
int Exercice9(void) {
    int pierre = 0,x=1,y=0;
    printf("Saisir le nombre de pierres disponible:\n");
    scanf("%d",&pierre);
    while (pierre>=(x*x)+y)
    {
        if (pierre == (x*x)+y)
        {
            printf("Il est possible de construire %d étages\n",x);
        }
        y=y+(x*x);
        x=x+1;
    }
    printf("Il est possible de construire %d étages\n",x-1);
    return 0;
}
int Exercice10(void) {
    int r=0,o=0,t=0;
    while (r>=0) {
            printf("Saisir un entier positif:\n");
            scanf("%d", r);
            if (r<0)
            {
                printf("La moyenne des nombres saisis est %d",t/o);
                return 0;
            }
            t = t+r;
            o = o+1;
    }
    return 0;
}
int main() {
    //Exercice1();
    //Exercice2();
    //Exercice3();
    //Exercice4();
    //Exercice5();
    //Exercice6();
    //Exercice7();
    //Exercice8();
    //Exercice9();
    //Exercice10();

    return 0;
}
