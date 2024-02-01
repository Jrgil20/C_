#include <stdio.h>
#include <string.h>
int main() 
{
   char str1[100] = "This is ", str2[] = "programiz.com";
   // concatenates str1 and str2
   // the resultant string is stored in str1.
   strcat(str1, "programiz.com");

   printf("%s",str1);
   return 0;
}
