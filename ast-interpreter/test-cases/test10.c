extern int GET();
extern long MALLOC(int);
extern void FREE(long);
extern void PRINT(int);

int main() {
   int a;
   int b;
   a = 0;
   while (a < 10) {
      a = a + 1;
   }
   if (a > 10) b = 10;
   else b = 20;
   PRINT(b);
}
