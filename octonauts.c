#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Function to convert a string to lowercase
void toLowerCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }
}

int main() {
    printf("Enter the character's name: ");
    char name[100];
    
    // Read input and remove trailing newline
    if (fgets(name, sizeof(name), stdin)) {
        name[strcspn(name, "\n")] = '\0';  // Remove newline if present
    }

    toLowerCase(name); // Convert to lowercase for case-insensitivity

    printf("Here are the details of %s:\n", name);

    if (strcmp(name, "kwazii") == 0) {
        printf("Kwazii is a cat with a pirate accent. He is a daredevil and a master of many skills. He is a great friend to have on adventures.\n");
    } else if (strcmp(name, "peso") == 0) {
        printf("Peso is a penguin who is the medic of the group. He is a kind and caring character who is always ready to help.\n");
    } else if (strcmp(name, "barnacles") == 0) {
        printf("Barnacles is a bear who is the captain of the Octonauts. He is a natural leader and always puts the safety of his crew first.\n");
    } else if (strcmp(name, "tweak") == 0) {
        printf("Tweak is an otter who is the engineer of the group. She is a creative character who is always coming up with new inventions.\n");
    } else if (strcmp(name, "dashi") == 0) {
        printf("Dashi is a dog who is the photographer of the group. She is a tech-savvy character who is always capturing the action.\n");
    } else {
        printf("Sorry, we don't have any information on that character.\n");
    }

    return 0;
}
