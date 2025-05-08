#include <stdio.h>

int main() {
    int n, i, j, hash;
    scanf("%d", &n);
    for(i=1;i<= n;i++) {
        for(j=1;j<=n-i;j++) {
            printf(" ");
        }
        hash=2*i-1;
        for(j=1;j<=hash;j++) {
            if (i % 2 == 1)
                printf("#");
            else
                printf("-");
        }
        printf("\n");
    }
    for (i=n-1;i>=1;i--) {
        for (j=1;j<=n-i;j++) {
            printf(" ");
        }
        hash=2*i-1;
        for (j=1;j<=hash;j++) {
            if (i % 2 == 1)
                printf("#");
            else
                printf("-");
        }
        printf("\n");
    }

    return 0;
}
