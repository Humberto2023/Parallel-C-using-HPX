/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Humberto Munoz Barona
#include <iostream>
int main()
{
int comboNumber;
std::cout<<"Welcome to Small Sliders, May I take your order?\n";
std::cin>> comboNumber;
if(comboNumber == 1)
std::cout<< "Your order is $6.59";
else if(comboNumber == 2)
std::cout<< "Your order is $8.79";
else if(comboNumber == 3)
std::cout<< "Your order is $10.44";
else if(comboNumber == 4)
std::cout<< "Your order is $13.19";
else
std::cout<< "Your order is $5.27";
return 0;
}
