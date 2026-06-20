#include <stdio.h>

struct Contact {
    char name[50];
    long long phone;
};

int main() {

    struct Contact c[3];

    for(int i=0;i<3;i++) {
        printf("Enter Name and Phone: ");
        scanf("%s %lld",c[i].name,&c[i].phone);
    }

    printf("\nContacts:\n");

    for(int i=0;i<3;i++) {
        printf("%s - %lld\n",
        c[i].name,c[i].phone);
    }

    return 0;
}