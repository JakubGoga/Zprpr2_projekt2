#include <stdio.h>

void n(zaznamy){

}

int main() {
    FILE *subor = NULL;
    char vstup;
    int zaznamy;

    do{
        scanf("%c",&vstup);
        if(vstup == '\n' || vstup == ' '){
            scanf("%c",&vstup);
        }
    switch (vstup) {
        case 'n': {
            n(zaznamy);
            break;
        }
        case 'z': {
            break;
        }
        case 'p': {
            break;
        }
        case 'a': {
            break;
        }
        case 'v': {
            break;
        }
        case 'h': {
            break;
        }
        case 'r': {
            break;
        }

        default: printf("Zadali ste nespravny vstup \n");
            break;
        }
    }while(vstup != 'k');
    return 0;
}
