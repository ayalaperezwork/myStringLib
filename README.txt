Library with some used functions
This functions exist in C-librearies, but are created like a challenge.
Doesn't has some special, only that y did it.
Library has:

int mycpy(char * src, char * trg, int n)
This function receive two pointers:
*src  that point to the array with the string to be copied
*trg  that point to the array where will be copied the string
and an integer that limit the max number of chars for the array to be copied
The function will copy char by char the elements from the source
array (pointed with *src) to the target array.
if the source string has more chars than the target space, the source string
will be cutted to the target length, specified by the integer 'n'.
If the operation is completed, the function will getback 0.
If the operation is not completed getback:
   2 if the copy are cutted because source length
   1 if other kind of error hapend
   
int mycmp(char * str1, char * str2)
This function make the comparison between two strings pointed by str1 and str2.
Comparison are sensitive, that is, 'A' and 'a' are not equal.
if the strings are equal, the function will get back 0.
if the function are not equal, will getback 1.

int mysttoi(const char * str)
This function convert a number string to its integer decimal value.
Will get back 0 if the convertion is success, 1 if the convertion can't be done.

int mysttoiHex(const char *str)
This function convert a number string to its integer hexagesimal value.
Will get back 0 if the convertion is success, 1 if the convertion can't be done.

long mystrtol(const char *str, char ** endptr, int base)

