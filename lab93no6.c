#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int i, j, k;

    printf("Enter characters to remove): ");
    gets(str1);

    printf("Enter the string: ");
    gets(str2);

    printf("\n---Summary---\n");

    for (i = 0; str1[i] != '\0'; i++) {

        int count = 0;
        int len = strlen(str2);

        for (j = 0; j < len; j++) {

            if (str2[j] == str1[i]) {
                count++;

                for (k = j; k < len - 1; k++) {
                    str2[k] = str2[k + 1];
                }

                str2[len - 1] = '\0';
                len--;
                j--;  
            }
        }

        if (count > 0)
            printf("%c removed %d times\n", str1[i], count);
        else
            printf("%c not found\n", str1[i]);
    }

    printf("\nResult: %s\n", str2);

    return 0;
}
