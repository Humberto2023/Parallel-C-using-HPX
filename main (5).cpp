/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Humberto Munoz Barona
#include <iostream>

int main()
{
   int N;
   int sum;
   sum = 0; 
   
   std::cout << "Enter a whole number N: ";
   std::cin  >> N;
   
   for (int i = 0; i < N; i++)
     sum = sum +i;
   std::cout <<" The sum of numbers from 1 to N is" << sum << std::endl;
  return 0;
}