#include <stdio.h>
#include <string.h>

int main(void) {
  char string1[26];
  for (int i = 0; i < 26; i++){
    string1[i] = 97 + i;
  }
  char string2 [] = "abcdefghijklmnopqrstuvwxyz";
  if (strcmp(string1, string2) == 0)
     printf("Lowercase strings are the same\n");
  else
     printf("Lowercase strings are not the same\n");
  for (int i = 0; i < 26; i++){
    string2[i] = string2[i] - 32;
  }
  if (strcmp(string1, string2) == 0)
     printf("Change was not succsseful\n");
  else
     printf("Change was successful\n");
  
  char string3[52];
  strcpy(string3, string1);
  strcat(string3, string2);
  printf("Lowercase: %s\n", string1);
  printf("Uppercase: %s\n", string2);
  printf("Both: %s\n", string3);
}
