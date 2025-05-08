#include <stdio.h>

void odd_even() {
    int n;
    scanf("%d",&n);
    int a[1000],i;
    int count_of_even = 0, count_of_odd = 0;
    for (i=0;i<n; i++) {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0) {
            count_of_even++;
        } else {
            count_of_odd++;
        }
    }
    printf("%d %d\n",count_of_even,count_of_odd);
}
int main() {
    odd_even();
    return 0;
}
