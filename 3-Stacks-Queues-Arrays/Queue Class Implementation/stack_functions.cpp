#include "main.h"

void push_to_stack(Stack<char> &word, char str2[]) { // Pass by reference
    int i = 0;
    while (str2[i] != '\0') {
        word.push(str2[i]);
        i++;
    }
};

void check_palindrome(Stack<char> word, bool is_palindrome, char str2[]) {
    int i = 0;
    while (!word.stack_empty()) {
        char w = word.pop();
        if (w != str2[i]) {
            is_palindrome = false;
            cout << "It is not a palindrome !";
            exit(1);
        }
        else if (i == 0) {
            is_palindrome = true;
            cout << "It is a palindrome !";
        }
        i++;
    }
}

void clear_arr(char *str1, char *str2) {
    while (*str1 != '\0') {
        if (*str1 == ' ') {
            str1 +=1;
        }
        else {
            *str2 = *str1;
            str2++;
            str1++;
        }
    }
    *str2 = '\0';
}
