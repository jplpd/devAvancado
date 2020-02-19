#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *p;

   p = malloc(sizeof(int));

   if (p == NULL) {
       printf("deu pau\n");
       exit(1);
   }

   return 0;
}