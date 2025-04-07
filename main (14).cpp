/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Humberto Munoz Barona
#include <iostream>
#include <string>

/* include namespace std */

    class Student {
         private:std:: string name;
            int id;
            float gpa;
            
        public:
            void setName(std::string n) 
            {name =n;}
            
            void setId(int i)
            { id = i;}
            
            void display()
            { std::cout << name << std::endl << id << std::endl << gpa << std::endl;}
            
            void setGPA(float GPA) 
            {gpa = GPA;}
            
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
  s1.setGPA(3.83);
  s1.display();
  
  return 0;
}