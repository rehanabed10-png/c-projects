#include <stdio.h>

int main() {
    char books[5][30] = {
        "C Programming",
        "Data Structures",
        "Operating System",
        "DBMS",
        "Computer Networks"
    };

    printf("Library Books:\n");

    for(int i=0;i<5;i++) {
        printf("%d. %s\n",i+1,books[i]);
    }

    return 0;
}