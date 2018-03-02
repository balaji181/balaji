#include <stdio.h>
#define max 10

int a[11] = { 10, 14, 19, 26, 27, 31, 33, 35, 42, 44, 0 };
int b[10];

void merging(int l, int m, int h) {
   int l1, l2, i;

   for(l1 = l, l2 = m + 1, i = l; l1 <= m && l2 <= h; i++) {
      if(a[l1] <= a[l2])
         b[i] = a[l1++];
      else
         b[i] = a[l2++];
   }
   
   while(l1 <= m)    
      b[i++] = a[l1++];

   while(l2 <= h)   
      b[i++] = a[l2++];

   for(i = l; i <= h; i++)
      a[i] = b[i];
}

void sort(int l, int h) {
   int m;
   
   if(l < h) {
      mid = (l + h) / 2;
      sort(l, m);
      sort(m+1, h);
      merging(l, m, h);
   } else { 
      return;
   }   
}

int main() { 
   int i;

   printf("List before sorting\n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);

   sort(0, max);

   printf("\nList after sorting\n");
   
   for(i = 0; i <= max; i++)
      printf("%d ", a[i]);
}
