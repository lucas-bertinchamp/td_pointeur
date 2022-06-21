#include <stdio.h>

int len_chaine(char* chaine) {
    char* adresse = chaine;
    int l = 0;
    while (*adresse != '\0'){
        l++;
        adresse = adresse + 1;
    }
    return l;
}

int main () {

    char chaine[100];

    printf("Entrez une chaine :");
    scanf("%[^\n]", chaine);

    char* adresse = &chaine;
    printf("%p\n", adresse);

    int a = len_chaine(adresse);
    printf("La longueur de la chaine est : %d\n", a);
    return a;

}
