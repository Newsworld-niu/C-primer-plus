// strctptr.cpp -- functions with pointer to structure arguments
#include <iostream>
#include <cmath>

// structure polar
struct polar
{
    double distance;        // distance from origin
    double angle;           // direction from origin
};
struct rect
{
    double x;               // horizontal distance from origin
    double y;               // vertical distance from origin
};

// prototypes
void rect_to_polar(const rect * pxy, polar * pda);
void show_polar(const polar * pda);

int main()
{
    rect rplace;
    polar pplace;

    std::cout << "Enter the x and y values: ";
    while (std::cin >> rplace.x >> rplace.y)
    {
        rect_to_polar(&rplace, &pplace);    // pass addresses
        show_polar(&pplace);                // pass address
        std::cout << "Next two numbers (q to quit) : ";
    }
    std::cout << "Done.\n";
    return 0;
}

// show polar coordinates, converting angle to degrees
void show_polar (const polar * pda)
{
    const double Rad_to_deg = 57.29577951;

    std::cout << "distance = " << pda->distance;
    std::cout << ", angle = " << pda->angle * Rad_to_deg;
    std::cout << " degrees\n";
}

// convert rectangular to polar coordinates
void rect_to_polar(const rect * pxy, polar * pda)
{
    pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
    pda->angle = atan2(pxy->y, pxy->x);
}