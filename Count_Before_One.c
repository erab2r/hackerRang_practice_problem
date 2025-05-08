#include <stdio.h>
int count_before_one(int a[],int n) {
    int count = 0;
    int i,j;
    for (i=0;i<n;i++) {
        if (a[i]==1) {
            break;
        }
        count++;
    }
    return count;
}
int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for (i=0;i<n;i++) {
        scanf("%d",&a[i]);
    }
    int result = count_before_one(a,n);
    printf("%d\n", result);
    return 0;
}
