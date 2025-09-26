#include <stdio.h>
#define MAX_ARGS 5		
#define ARGS(x, ...) do {\
   printf("%d\n", ##__VA_ARGS__); \
} while (0)
int main() {
   ARGS(1, 2, 3); 		
   ARGS(1, 0, 3, 4, 5, 6);	
   return 0;
}
