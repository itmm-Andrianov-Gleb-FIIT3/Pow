#include <stdio.h>
int main() {
   int a, b;
   float div;
   scanf_s("%d %d", &a, &b);
   div = ((float)(a) / (b));
   printf("%.2f\n", div);
   if (div == -0) {
	   system("cls");
	   printf("0");
   }
   system("pause");
   return 0;
}
