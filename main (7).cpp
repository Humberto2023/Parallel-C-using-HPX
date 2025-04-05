/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Humberto Munoz Barona
#include <iostream>
#include <cmath>
int main()
{
   char oper;
   double a; 
   double b; 
   double calculation;
   
   for (int i = 0; i < 5; i++)
   { std::cout << i << "";
        
     std::cout << "_________________ CALCULATOR ___________________\n";
 
     std::cout << "Enter an operator from (+, -, *, /): ";
     std::cin  >> oper;
   
     std::cout << "Enter #1: ";
     std::cin  >> a;
   
     std::cout << "Enter #2: ";
     std::cin  >> b;
   
    if (oper == '+')
    {
      calculation = a + b;
      std::cout << "Calculation: " << calculation <<  '\n';
    }
    else if (oper == '-')
    {   
      calculation = a - b;
      std::cout << "Calculation: " << calculation <<  '\n';
    }     
    else if (oper == '*')
    {   
      calculation = a * b;
      std::cout << "Calculation: " << calculation <<  '\n';
    } 
    else if (oper == '/')
    {  
        if (b != 0)
        {
        calculation = a /b; 
        std::cout << "Calculation: " << calculation <<  '\n';
        }
        else
          std::cout << "Calculation is undefined: " << NAN <<  '\n';
    }
    
    else 
       std::cout << "That is not a valid operator: \n";
        
   std::cout <<"_________________________________________________";
   }
 return 0;
}