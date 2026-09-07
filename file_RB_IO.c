#include <stdio.h>
#include <stdlib.h>
struct Num 
{
    int n1, n2;
};

int main()
{
  int n;
  struct Num obj;
  FILE* fptr;
  if ((fptr = fopen("WB_HELLO", "rb")) == NULL) 
  {
    printf("Error! opening file");
        
    // If file pointer will return NULL
    // Program will exit.
    exit(1);
  }
    
  for (n = 1; n < 10; ++n) 
  {
    fread(&obj, sizeof(struct Num), 1, fptr);
    printf("n1: %d\tn2: %d\n", obj.n1, obj.n2);
  }
  
  fclose(fptr);
  return 0;
}