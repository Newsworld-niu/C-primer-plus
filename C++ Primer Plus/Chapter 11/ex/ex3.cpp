// randwalk.cpp -- using the vector class
// compile with the vect.cpp file
#include <iostream>
#include <cstdlib>      // rand(), srand() prototypes
#include <ctime>        // time() prototype
#include "ex2.1.h"

int main()
{
    using VECTOR::Vector;
    srand(time(0));     // seed random-number generator
    double direction;
    Vector step;
    Vector result(0.0, 0.0);
    unsigned long steps = 0;
    double target;
    double dstep;
    std::cout << "Enter the trial you needed: ";
    int trials = 0;
    std::cin >> trials;
    std::cout << "Enter target distance (q to quit): ";
    while (std::cin >> target)
    {
        std::cout << "Enter step length: ";
        if (!(std::cin >> dstep))
            break;
        std::cout << "Target Distance: " << target << ", Step Size: " << dstep << "\n";
        std::cout << steps << ": (x,y) = (0, 0)\n";
        while (result.magval() < target)
        {
            direction = rand() % 360;
            step.reset(dstep, direction, Vector::POL);
            result = step + result; 
            steps++;
            std::cout << steps << ": (x, y) = " << "(" << result.xval() << ", " << result.yval() << ")\n";
        }
    std::cout << "After " << steps << " steps, the subject "
        "has the following location:\n";
    std::cout << result << std::endl;
    result.polar_mode();
    std::cout << " or\n" << result << std::endl;
    std::cout << "Average outward distance per step = "
            << result.magval() / steps << std::endl;
    steps = 0;
    result.reset(0.0, 0.0);
    std::cout << "Enter target distance (q to quit): ";
}
    std::cout << "Bye!\n";
    std::cin.clear();
    while (std::cin.get() != '\n')
        continue;
}