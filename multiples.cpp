# include <stdio.h> 
# include <conio.h>
int main( ) 
{ 
 int i, n, d ; 
 printf("Enter the limit : ") ; 
 scanf("%d", &n) ; 
 printf("\nEnter the number : ") ; 
 scanf("%d", &d) ; 
 printf("\nThe numbers divisible by %d are :\n\n", d) ; 
 for(i = 1 ; i <= n ; i++) 
  if(i % d == 0) 
   printf("%d\t", i) ; 
 getch() ; 
}

