#include <stdio.h>
#include <string.h>

int main() {
    char nama[10][20] = {
        "Ali", "Ani", "Tono", "Bayu", "Amir",
        "Ani", "Budi", "Tini", "Ucok", "Paijo"
    };
    char temp[20];
    int i, j;

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9 - i; j++) {
            if (strcmp(nama[j], nama[j+1]) > 0) {
                strcpy(temp, nama[j]);
                strcpy(nama[j], nama[j+1]);
                strcpy(nama[j+1], temp);
            }
        }
    }

    printf("Hasil sorting:\n");
    for (i = 0; i < 10; i++) {
        printf("%s\n", nama[i]);
    }
    return 0;
}

