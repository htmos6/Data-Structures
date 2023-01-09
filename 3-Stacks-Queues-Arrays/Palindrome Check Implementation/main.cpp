#include "main.h"


int main()  {
    Stack<char> word;
    int i=0;
    char str1[50];
    char str2[50];
    bool is_palindrome = 0;

    cin.getline(str1, 50, '\n');
    clear_arr(str1, str2); // Clear spaces of the str1 --> transfer to the array str2
                           // Name of the char arrays gives us directly beginning addresses of the arrays
    push_to_stack(word, str2); // pass by reference is used.
    check_palindrome(word, is_palindrome, str2);
    // Example:  a man a plan a canal panama
    // It is a palindrome !
    return 0;
}


