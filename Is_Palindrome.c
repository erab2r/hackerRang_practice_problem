#include <stdio.h>
#include <string.h>
int is_palindrome(char str[]) {
    int strt = 0;
    int ends = strlen(str)-1;
    while (strt< ends){
        if (str[strt]!=str[ends]) {
            return 0;
        }
        strt++;
        ends--;
    }
    return 1;
}
int main() {   
    char str[1001]; 
    scanf("%s",str);
    int result=is_palindrome(str);
    if (result == 1) {
        printf("Palindrome\n");
    } else {
        printf("Not Palindrome\n");
    }

    return 0;
}
