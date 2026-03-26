#include <iostream>
void array_input(double []);
void array_display(double []);
double average_calculation(double []);

int main()
{
    
    array_input(golf_scores);
    array_display(golf_scores);
    std::cout << "\nThe average of your golf scores: " 
    << average_calculation(golf_scores) << std::endl;
}
