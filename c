#include <stdio.h>
#include <string.h>

void authenticate(char *username, char *password) {
    char buffer[20];
    strcpy(buffer, username);
    if (strcmp(buffer, "admin") == 0 && strcmp(password, "password123") == 0) {
        printf("Login successful!\n");
    } else {
        printf("Invalid username or password\n");
    }
}

int main() {
    char username[100];
    char password[100];

    printf("Enter username: ");
    fgets(username, 100, stdin);
    username[strcspn(username, "\n")] = 0; // remove newline character

    printf("Enter password: ");
    fgets(password, 100, stdin);
    password[strcspn(password, "\n")] = 0; // remove newline character

    authenticate(username, password);

    return 0;
}
