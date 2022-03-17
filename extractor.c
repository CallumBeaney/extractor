#include <stdio.h>
#include <stdlib.h>

#define BUFFLEN 2500

int main(void)
{
    printf("\nTHERE IS A TOTAL OF ____ IMAGES ON THE SERVER.\nEACH IMAGE AROUND ___KB; TOTAL COLLECTION SIZE = __GB\nPLEASE INPUT THE RANGE OF IMAGES YOU WISH TO DOWNLOAD RANGING FROM 1 TO ____\n");

    int lower, upper;
    printf("START number:\n\n");
    scanf("%i", &lower);
    printf("END number:\n\n");
    scanf("%i", &upper);
    
    if (upper > 10396 || lower < 1){
        printf("Numbers must be in range");
        return 1;
    }

    int filecounter = lower;
    char buffer[BUFFLEN];
    char *prefix = "https://www.website.cloud/full/";
    
    while (filecounter <= upper)
    {
        sprintf(buffer, "wget %s%i.jpg", prefix, filecounter);
        system(buffer);
        printf("%s\n", buffer);
        filecounter++;
    }
}
