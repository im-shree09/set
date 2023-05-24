// #include <stdio.h>
// #include <string.h>
  
// // Driver code
// int main()
// {
//     char temp[100];
//     char str[] = "hello";
//     strcpy(temp, str);
//     printf("%s", temp);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char* temp = (char*)malloc(sizeof(char) * 100);
    char* str = "hello";
    // strcpy(temp, str);
    strcpy_s(temp, sizeof(temp), str);
    printf("%s", temp);
    free(temp); // Remember to free the allocated memory
    return 0;
}

