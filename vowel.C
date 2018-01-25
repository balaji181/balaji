#include <stdio.h>
 
int main()
{
  char A;
 
  printf("Enter a character\n");
  scanf("%c", &A);
 
  if (A == 'a' || A == 'A' || A == 'e' || A == 'E' || A == 'i' || A == 'I' || A =='o' || =='O' || A== 'u' || A== 'U')
    printf("%c is a vowel.\n", A);
  else
    printf("%c is not a vowel.\n", A);
 
  return 0;
}
