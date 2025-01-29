#include <stdio.h>

struct patient {
    char name[50];
    int e_id;
    char e_gender;
};

int main() {
    struct patient ptn[5];

    FILE *fp;
    fp = fopen("patient_details.txt", "w");

    if (fp == NULL) {
        printf("Unable to create file.\n");
        return 1;
    }

    printf("Enter details of 5 patients:\n");

    for (int i = 0; i < 5; i++) {
        
        printf("Name: \n");
        scanf("%s", ptn[i].name);
        printf("Patient ID: \n");
        scanf("%d", &ptn[i].e_id);
        printf("Gender: \n");
        scanf(" %c", &ptn[i].e_gender); // Corrected format specifier for char
        fprintf(fp, "%s %d %c\n", ptn[i].name, ptn[i].e_id, ptn[i].e_gender);
    }

    fclose(fp);

    fp = fopen("patient_details.txt", "r");

    if (fp == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    printf("\nPatients Details:\n");
    printf("---------------------------------------------------\n");
    printf("| %-20s | %-10s | %-15s |\n", "Name", "Patient ID", "Gender");
    printf("---------------------------------------------------\n");

    for (int i = 0; i < 5; i++) {
        fscanf(fp, "%s %d %c", ptn[i].name, &ptn[i].e_id, &ptn[i].e_gender);
        printf("| %-20s | %-10d | %-15c |\n", ptn[i].name, ptn[i].e_id, ptn[i].e_gender);
    }

    printf("---------------------------------------------------\n");
    fclose(fp);
    return 0;
}
