#include <stdio.h>

int main(){

    int my_int;
    double my_double;
    char my_char;
    char my_string[20];

    printf("Enter an integer number: ");
    scanf("%d", &my_int);
    printf("Your number in hexadecimal system is %x (%#x) \n", my_int, my_int);

    printf("Enter a double number: ");
    scanf("%lf", &my_double);
    printf("Your number is %E \n", my_double);

    printf("Enter one character: ");
    getchar();
    scanf("%c", &my_char);
    getchar();
    printf("Your character is %c and its value is equal to %x \n", my_char, my_char);

    printf("Enter your string consist of two words: ");
    fgets(my_string, sizeof(my_string), stdin);
    puts(my_string);

    return 0;
}