
#include <stdio.h>
#include <string.h>


int main() {
    

    char str1[50] = "World!";
    char str2[50] = "Hello";
    
    
    /*
     
     Function:
         char *strcat(char *dest, const char *src);
     
     Usage:
         Adds the contents of a string to the end of another string.
     
     Params:
         (char[]) src - the string you want to be added
         (char[]) dest - the place you want the string to be added to.
     
     */
    
    printf("************   strcat   ************\n");
    
    printf("\nBefore:\n");
    printf("First String: %s\nSecond String: %s\n", str1, str2);
    
    strcat(str2, str1);
    
    printf("\nAfter:\n");
    printf("First String: %s\nSecond String: %s\n", str1, str2);
    
    
    
    
    
    /*
     
     Function:
         char *strncat(char *dest, const char *src, size_t n);
     
     Usage:
         Adds the contents of a certain amount of chars in a string to the end of another string.
     
     Params:
         (char[]) src - the string you want to be added.
         (char[]) dest - the place you want the string to be added to.
         (int)    n - the amount of chars you want to be added.
     
     */
    
    printf("\n\n************   strncat   ************\n");
    
    char str3[50] = "Welcome To ";
    
    
    printf("\nBefore:\n");
    printf("First String: %s\nSecond Stringo: %s\nNumber of chars to be added:%d\n", str2, str3,4);
    
    strncat(str3, str2, 4);
    
    printf("\nAfter:\n");
    printf("First String: %s\nSecond String: %s\n", str2, str3);
}
