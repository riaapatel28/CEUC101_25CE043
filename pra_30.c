
#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of items in the inventory\n");
    scanf("%d", &n);
    if (n <= 0) {
        printf("\nPlease enter a valid number\n");
    } else {

        float a[n];

        printf("\nProvide the prices of these items.\n");
        for (int i = 0; i < n; i++) {

            scanf("%f", &a[i]);
        }

        float *p;
        p = a;

        float tem;

        for (int i = 0; i < n - 1; i++) {

            for (int j = 0; j < n - i - 1; j++) {

                if (*(a + j) > *(a + j + 1)) {

                    tem = *(a + j);
                    *(a + j) = *(a + j + 1);
                    *(a + j + 1) = tem;
                }
            }
        }

        printf("\n the sorted prices:");
        for (int i = 0; i < n; i++) {

            printf("%g   ", *(a + i));
        }
    }
    return 0;
}
