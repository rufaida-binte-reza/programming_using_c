#include<stdio.h>

int main()
{
   int a, b;

   scanf("%d", &a);
   scanf("%d", &b);

   printf("a+b = %d\n", a+b);
   printf("a-b = %d\n", a-b);
   printf("a*b = %d\n", a*b);
   printf("a/b = %d\n", a/b);
   printf("a%b = %d\n\n", a%b);

   printf("Display a before increment to a++ = %d\n", a);
   printf("Display a while increment to a++ = %d\n", a++);
   printf("Display a after increment to a++ = %d\n\n", a);

   printf("Display a before increment to ++a = %d\n", a);
   printf("Display a while increment to ++a = %d\n", ++a);
   printf("Display a after increment to ++a = %d\n\n", a);

   printf("Display a before discrement to a-- = %d\n", a);
   printf("Display a while discrement to a-- = %d\n", a--);
   printf("Display a after discrement to a-- = %d\n\n", a);

   printf("Display a before discrement to --a = %d\n", a);
   printf("Display a while discrement to --a = %d\n", --a);
   printf("Display a after discrement to --a = %d\n\n", a);


   return 0;

}
