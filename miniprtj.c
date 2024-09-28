#include <stdio.h>
#include <string.h>
typedef struct
{
    char titre[100];
    char auteur[100];
    int prix;
    int quantite;
} Livre;
int count = 0;
Livre stock[100];
void ajouter()
{
    printf("Saiser le titre de livre: \n");
    scanf("%s", stock[count].titre);
    printf("Saiser le auteur de livre : \n");
    scanf("%s", stock[count].auteur);
    printf("Saiser le prix de livre :\n ");
    scanf("%d", &stock[count].prix);
    printf("Saiser le quantite de livre :\n ");
    scanf("%d", &stock[count].quantite);
    count++;
}
void affichageStock()
{
    for (int i = 0; i <= count; i++)
    {
        printf("-------------------------------------------\n");
        printf("livre nombre %s  :,titre %s \n ", stock[i].titre);
        printf("livre nombre %s :,auteur %s \n ", stock[i].auteur);
        printf("livre nombre %d  :,prix %s \n ", stock[i].prix);
        printf("livre nombre %d  :,quantite %s\n ", stock);
    }
}
void affichagelivre(int i)
{

    printf("-------------------------------------------\n");
    printf("livre nombre %s  :,titre %s \n ", stock[i].titre);
    printf("livre nombre %s :,auteur %s \n ", stock[i].auteur);
    printf("livre nombre %d  :,prix %s \n ", stock[i].prix);
    printf("livre nombre %d  :,quantite %s\n ", stock[i].quantite);
}

void serchLivre(char serch[500])
{

    for (int i = 0; i <= count; i++)
    {
        if (strcpm(stock[i].titre, serch) == 0)
        {
            printf("les information du livre est : \n");
            affichagelivre(i);
        }
        else
        {
            printf(" le livre recherhce n est existe \n ");
        }
    }
}
int main()
{
    int choix;
    char serchTitre[50];
    do
    {
        printf("1 : Ajouter un livre au stock.\n");
        printf("2 : Afficher tous les livres disponibles : \n");
        printf("3 : Rechercher un livre par son titre : \n");
        printf("4 : Mettre à jour la quantité d'un livre : \n");
        printf("5 : Supprimer un livre du stock : \n");
        printf("6 : Afficher le nombre total de livres en stock : \n");
        printf("7 : Quiter le programe : \n");

        printf("entrez votre choix :");
        scanf("%d", &choix);
        break;
        switch (choix)
        {
        case 1:
            ajouter();
            break;
        case 2:
            affichageStock();
            break;
        case 3:
            printf("donne moi title pour faire la recherche \n");
            scanf("%s", &serchTitre);
            for (int i = 0; i <= count; i++)
            {
                if (strcmp(stock[i].titre, serchTitre) == 0)
                {
                    printf("les information du livre est : \n");
                    affichagelivre(i);
                }
                else
                {
                    printf(" le livre recherhce n est existe \n ");
                } 
            }
            break;
        case 7:
            printf(" bye bye\n");
            break;
        }
        printf("---------------------------\n");
    } while (choix != 7);

    return 0;
}