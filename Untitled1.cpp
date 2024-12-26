#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Nhap vao mot chuoi bat ky: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    int length = strlen(str);
    printf("Chuoi vua nhap: %s\n", str);
    printf("Do dai cua chuoi: %d\n", length);

    return 0;
}

