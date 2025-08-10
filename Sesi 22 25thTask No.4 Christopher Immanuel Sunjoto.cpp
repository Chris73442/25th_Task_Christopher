#include <stdio.h>
#include <string.h>

struct mhs {
    int nim;
    float gpa;
    char name[20];
};

int main() {
    struct mhs data[10] = {
        {101, 3.2, "Budi"},
        {102, 3.8, "Andi"},
        {103, 3.2, "Ani"},
        {104, 3.5, "Tono"},
        {105, 3.8, "Bayu"},
        {106, 2.9, "Paijo"},
        {107, 3.5, "Amir"},
        {108, 3.2, "Tini"},
        {109, 3.0, "Ucok"},
        {110, 3.5, "Ali"}
    };

    int i, j, min;
    struct mhs temp;

    for (i = 0; i < 9; i++) {
        min = i;
        for (j = i + 1; j < 10; j++) {
            if (data[j].gpa < data[min].gpa ||
               (data[j].gpa == data[min].gpa && strcmp(data[j].name, data[min].name) < 0)) {
                min = j;
            }
        }
        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }

    printf("Hasil sorting:\n");
    for (i = 0; i < 10; i++) {
        printf("%d %.2f %s\n", data[i].nim, data[i].gpa, data[i].name);
    }
    return 0;
}

