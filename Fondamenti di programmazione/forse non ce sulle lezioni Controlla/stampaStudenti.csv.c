#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int result;
    FILE* f = fopen("Studenti.csv", "r");
    
    do {
        result = fscanf(f, "%130[^;\n]", str);
        
        if(result == 0)
        {
            result = fscanf(f, "%*c");
        }
        else
        {
            //whatever you want to do with your value
            printf("%s\n", str);
        }
        
    } while(result != EOF);

    return 0;
    
}
