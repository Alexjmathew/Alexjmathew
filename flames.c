
#include <stdio.h>
#include<string.h>

int main() {
    char name1[100], name2[100];

    printf("Enter your name: ");
    scanf("%s", name1);

    printf("Enter your partners name: ");
    scanf("%s", name2);

    int count1 = 0, count2 = 0;
    count1 = strlen(name1);
    count2 = strlen(name2);

    int remainingLetters = count1 + count2;
    char relationships[] = "FLAMES";
    int index = (remainingLetters % 6) - 1;
    if (index < 0) {
        index = 5;
    }
    char relationship = relationships[index];

    switch (relationship) {
        case 'F':
            printf("Friends\n");
            break;
        case 'L':
            printf("Lovers\n");
            break;
        case 'A':
            printf("Affectionate\n");
            break;
        case 'M':
            printf("Marriage\n");
            break;
        case 'E':
            printf("Enemies\n");
            break;
        case 'S':
            printf("Siblings\n");
            break;
    }

    return 0;
}
