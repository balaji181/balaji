
#include<stdio.h>

int main() {
   int a[20], i, n, s;

   printf("\nEnter no of elements :");
   scanf("%d", &n);

  
   for (i = 0; i < n; i++)
      scanf("%d", &a[i]);

  
   s = a[0];

   for (i = 0; i < n; i++) {
      if (a[i] < s) {
         s = a[i];
      }
   }

   
   printf("\nSmallest Element : %d", s);

 
}
