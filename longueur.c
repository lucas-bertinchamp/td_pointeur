#include <stdio.h>

int len_chaine(char* chaine) {
    char* adresse = chaine;
    int l = 0;
    while (*adresse != '\0'){
        l++;
        adresse++;
    }
    return l;
}

int main () {

    char chaine[100];

    printf("Entrez une chaine :");
    scanf("%[^\n]", chaine);

    int a = len_chaine(chaine);
    printf("La longueur de la chaine est : %d\n", a);
    return a;

}
