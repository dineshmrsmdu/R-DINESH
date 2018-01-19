#include <stdio.h>
#include <string.h>
void main(int argc, char *argv[])
{
 size_t maxlen = 0, len;
 int i;
 int longest;
 for (i = 1; i < argc; i++) 
  {
  len = strlen(argv[i]);
  if (len > maxlen) 
  longest = argv[i];
 }
printf("longest string is %s. \n", longest);
}
