#include <stdio.h>
#include <locale.h>
int main() {
	setlocale(LC_ALL,"rus");
   int a, b;
   float div;
   printf("¬ведите a и b: ");
   scanf_s("%d %d", &a, &b);
   div = ((float)(a) / (b));
   system("cls");
   printf("%.2f\n", div);
   if (div == -0) {
	   system("cls");
	   printf("0\n");
   }
   system("pause");
   return 0;
}
