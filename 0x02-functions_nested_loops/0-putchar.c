#include "main.h"

/**
 * main- prints '_putchar'
 * Return: Always 0 
*/

int main(void) 
{  
    char word[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
    
    unsigned int i;
    
    for (i = 0; i < sizeof(word); i++)
    {
        putchar(word[i]);
    }
    -putchar('\n');
    
    return 0;
}
