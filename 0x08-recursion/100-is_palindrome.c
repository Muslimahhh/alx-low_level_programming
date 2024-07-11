#include <main.h>

// Function prototypes
int is_palindrome(char *s);
int _strlen_recursion(char *s);
int palindrome_check(char *s, int len, int i);

// Main function for testing
int main(void)
{
    char s1[] = "racecar";
    char s2[] = "hello";
    char s3[] = "";
    
    printf("%s is %sa palindrome\n", s1, is_palindrome(s1) ? "" : "not ");
    printf("%s is %sa palindrome\n", s2, is_palindrome(s2) ? "" : "not ");
    printf("%s is %sa palindrome\n", s3, is_palindrome(s3) ? "" : "not ");
    
    return 0;
}

// Function definitions
int is_palindrome(char *s)
{
    int len = _strlen_recursion(s);
    if (len == 0)
        return 1;
    return palindrome_check(s, len - 1, 0);
}

int _strlen_recursion(char *s)
{
    if (*s == '\0')
        return 0;
    return 1 + _strlen_recursion(s + 1);
}

int palindrome_check(char *s, int len, int i)
{
    if (i >= len)
        return 1;
    if (s[len] != s[i])
        return 0;
    return palindrome_check(s, len - 1, i + 1);
}
