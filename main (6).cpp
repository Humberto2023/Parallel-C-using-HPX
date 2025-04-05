/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
void swap(int &a, int &b)
{
        int temp = a;
        a = b;
        b = temp;
}

int main()
{
    int x, y;
      x = 10,  y = 20;
      
      std:: cout << "original x and y: "<< x << " " << y << std::endl;
      swap(x,y);
      
      std:: cout << " new values for x and y: " << x << " " << y;
    
    return 0;
}