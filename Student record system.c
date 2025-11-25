#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float percentage;
};

int main() {
    struct Student s[100];
    int n = 0, choice, r, found;

    while (1) {
        printf("\n--- Student Record System ---\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search by Roll No\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter Roll No: ");
            scanf("%d", &s[n].roll);
            printf("Enter Name: ");
            scanf("%s", s[n].name);
            printf("Enter Percentage: ");
            scanf("%f", &s[n].percentage);
            n++;
        }
        else if (choice == 2) {
            printf("\n--- All Students ---\n");
            for (int i = 0; i < n; i++) {
                printf("Roll: %d | Name: %s | %%: %.2f\n",
                       s[i].roll, s[i].name, s[i].percentage);
            }
        }
        else if (choice == 3) {
            printf("Enter Roll No to search: ");
            scanf("%d", &r);
            found = 0;
            for (int i = 0; i < n; i++) {
                if (s[i].roll == r) {
                    printf("Found: %s %.2f\n", s[i].name, s[i].percentage);
                    found = 1;
                    break;
                }
            }
            if (!found) printf("No record found!\n");
        }
        else {
            break;
        }
    }
    return 0;
}
