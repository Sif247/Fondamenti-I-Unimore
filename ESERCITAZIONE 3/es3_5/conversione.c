#include <stdlib.h>

char* converti(unsigned int n) {
    
    unsigned int temp = n;
    int num_cifre = 0;
    while (temp != 0) {
        temp /= 10;
        num_cifre++;
    }

    
    char* result = (char*)malloc((num_cifre + 1) * sizeof(char)); // +1 per il terminatore '\0'
    if (result == NULL) {
        return NULL; 
    }

    
    for (int i = num_cifre - 1; i >= 0; i--) {
        result[i] = (char)((n % 10) + '0');
        n /= 10;
    }
    result[num_cifre] = '\0';

    return result;
}
