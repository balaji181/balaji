int check_vowel(char a)
{
    if (a >= 'A' && a <= 'Z')
       a = a + 'a' - 'A';   /* Converting to lower case or use a = a + 32 */
 
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u')
       return 1;
 
    return 0;
}
