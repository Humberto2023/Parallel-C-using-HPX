/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Humberto Munoz Barona
#include <iostream>
#include <string>

/* include namespace std */

    class Student {
        public:
           std:: string name;
            int id;
            void setName(std::string n) 
            {name =n;}
            void setId(int i)
            { id = i;}
            void display()
            { std::cout << name << std::endl << id << std::endl;}
            Student() 
            { std::cout << "Default constructor"<< std::endl;}
            Student(std::string n) 
            {name = n;}
            ~Student() 
            {std::cout << "Destructor called"<< std::endl;}
            
    };
    
 int main()
 {
  Student s1;
  s1.setName("Carlos");
  s1.setId(6);
  s1.display();
  
  return 0;
}