#include<stdio.h>

int main()
{
   int a, b;

   scanf("%d", &a);
   scanf("%d", &b);

   printf("%d+%d = %d\n", a, b, a+b);
   printf("%d-%d = %d\n", a, b, a-b);
   printf("%d*%d = %d\n", a, b, a*b);
   printf("%d/%d = %d\n", a, b, a/b);
   printf("Remainder = %d\n\n", a%b);

   printf("Display a before increment to a++: %d\n", a);
   printf("Display a while increment to a++: %d\n", a++);
   printf("Display a after increment to a++: %d\n\n", a);

   printf("Display a before increment to ++a: %d\n", a);
   printf("Display a while increment to ++a: %d\n", ++a);
   printf("Display a after increment to ++a: %d\n\n", a);

   printf("Display a before discrement to a--: %d\n", a);
   printf("Display a while discrement to a--: %d\n", a--);
   printf("Display a after discrement to a--: %d\n\n", a);

   printf("Display a before discrement to --a: %d\n", a);
   printf("Display a while discrement to --a: %d\n", --a);
   printf("Display a after discrement to --a: %d\n\n", a);

   return 0;

}
