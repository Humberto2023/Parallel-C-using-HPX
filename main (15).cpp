/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
// Humberto Munoz Barona
#include <iostream>
#include<array>
#include<algorithm>
#include<numeric>
#include <ctime>

  // function to swap two numbers
  void swap(int &a, int &b) 
    {
        int temp = a;
        a = b;
        b = temp;
    }
    
 int main() {
     char choice;
    
    do {// Seed the by current time so that each time you run - you'll get different values
    
    std::srand(std::time(nullptr));
    
    // Define the size of the array
    int N;
    std::cout << "Enter a whole number as the size of the array: ";
    std::cin >> N;
    
    if (N < 0){ 
    
      std::cout << "That is not a valid operator: \n";
      std::cout <<"_________________________________________________"; 
    
    }
    // Create an array to store the random numbers
      int *randomarray = new int[N];
    
    // Generate random numbers and store them in the array
    for (int i = 0; i < N; ++i) {
        randomarray[i] = std::rand() % 100; // Generates random numbers between 0 and 99
    }
    
    // Calculate the sum of the elements in the array
    
    int sum = 0;
    for (int i = 0; i < N; ++i) {
        sum +=randomarray[i];
    }
    
    // Calculate the average
    double average = sum / N;

    // Print the random numbers before swap
    std::cout << "Random numbers: "<< std:: endl;
    for (int i = 0; i < N; ++i) {
      std::cout <<  randomarray[i] << "" << std:: endl;
    }
   
    // Print the sum and the average of the random numbers
    std::cout << "Sum: "<< sum << std:: endl;
    std::cout << "Average: " << average << std::endl;
   
    swap(randomarray[0], randomarray[N-1]);
    
  // Print the random numbers after swap
  
    std::cout << "Random numbers: "<< std:: endl;
    for (int i = 0; i < N; ++i) {
      std::cout <<  randomarray[i] << "" << std:: endl;
    }
   
    delete[] randomarray;
    
    std::cout << "Do you want to repeat with a new array? (y/n): ";
    std::cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    std::cout << "Exiting program." << std:: endl;
    
    return 0;
}