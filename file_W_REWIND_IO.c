// C program to implement
// rewind()
#include <stdio.h>
#include <stdlib.h>

// Driver code
int main()
{
  // String declared
    char str[200];
  
      // File Pointer declared
    FILE* ptr;

      // File opened
    ptr = fopen("Hello.txt", "w+");
  
      // Puts data inside the file
    fputs("Welcome to GeeksforGeeks\n", ptr);
	
	fputs("Welcome to GeeksforGeeks Again", ptr);

      // File closed
    fclose(ptr);

      // File open to read
    ptr = fopen("Hello.txt", "r+");
    while (fgets(str, 200, ptr) != NULL) {
        puts(str);
    }
	
	puts("\n\n");
    
      // Rewind function called
      // Sets ptr to beginning
    rewind(ptr);
	
	fgets(str, 200, ptr);
	
    while (fgets(str, 200, ptr) != NULL) {
        puts(str);
    }

    fclose(ptr);
    return 0;
}