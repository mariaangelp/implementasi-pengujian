#include <stdio.h>
#include <string.h>

struct User {
    char username[20];
    char password[20];
};

void resetPassword(struct User user) {
    printf("Reset password for user %s\n", user.username);

    char oldPassword[20];

    printf("Enter password: ");
    scanf("%s", oldPassword);

    if (strcmp(oldPassword, user.password) == 0) {
        printf("Enter new password: ");
        scanf("%s", user.password);
        printf("Password changed successfully\n");
    } else {
        printf("Incorrect password\n");
    }
}

int main(int argc, char const *argv[])
{
    struct User user = {"mariaangel", "12345678"};
    resetPassword(user);
    return 0;
}
