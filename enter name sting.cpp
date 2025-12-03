




#include<stdio.h>
#include<string.h>

int main()
{
    char name[20], full_name[50];

    printf("Enter name: ");
    scanf("%s", name);

    printf("Name is: %s\n", name);

    getchar(); // to clear newline left by scanf

    printf("Enter full name: ");
    scanf("%[^\n]", full_name);

    printf("\nFull name is: %s\n", full_name);

    return 0;
}

