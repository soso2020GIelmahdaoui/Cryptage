#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void crypter(char message, int decalage) {
    int i;
    for (i = 0; i < strlen(message); i++) {
        if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = ((message[i] - 'A' + decalage) % 26) + 'A';
        } else if (message[i] >= 'a' && message[i] <= 'z') {
            message[i] = ((message[i] - 'a' + decalage) % 26) + 'a';
        }
    }
}

void decrypter(charmessage, int decalage) {
    crypter(message, 26 - decalage);
}

int main() {
    char message[100];
    int decalage;

    printf("Entrez le message � crypter: ");
    fgets(message, sizeof(message), stdin);
    message[strcspn(message, "\n")] = '\0';

    printf("Entrez le d�calage: ");
    scanf("%d", &decalage);

    crypter(message, decalage);
    printf("Message crypt�: %s\n", message);

    decrypter(message, decalage);
    printf("Message d�crypt�: %s\n", message);

    return 0;
}
