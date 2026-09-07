
#include <stdio.h>
#include <stdlib.h>

// Driver code
int main()
{
    // File Pointer declared
    FILE* ptr;

      // File opened
    ptr = fopen("W_HELLO.csv", "w+");

      // Failed Condition
    if (ptr == NULL) {
        printf("Error Occurred While writing to a text "
               "file !");
        exit(1);
    }

      // Data to be inserted
    char str[] = "This is all the Data to be inserted in "
                 "File by GFG.";

      // Puts data inside the file
    fputs(str, ptr);
  
      // File closed
    fclose(ptr);

      // Data is finally Inserted
    printf("Data Written Inside the file\n\n");

    return 0;
}