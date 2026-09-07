#include <stdio.h>
#include <stdlib.h>

// Driver code
int main()
{
  char str[1000];
  FILE* ptr;

  ptr = fopen("userdata.csv", "r");

  if (ptr == NULL) 
  {
    printf("Error While opening file");
        
    exit(1);
  }
  fgets(str, 1000, ptr);
  printf("%-15s %-5s %-15s\n", "Name", "Age", "DOB");
  printf("-----------------------------------\n");
  
  char name[50];
  int age;
  char dob[20];
  
  while (fgets(str, 1000, ptr) != NULL)
  {
    sscanf(str, "%[^,],%d,%s", name, &age, dob);

    printf("%-15s %-5d %-15s\n", name, age, dob);
  }
  
  fclose(ptr);

  return 0;
}
