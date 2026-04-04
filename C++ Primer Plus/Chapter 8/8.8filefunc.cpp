//filefunc.cpp -- function with ostream & parameter
#include <iostream>
#include <fstream>
#include <cstdlib>

void file_it(std::ostream & os, double fo, const double fe[], int n);
const int LIMIT = 5;
int main()
{
    std::ofstream fout;
    const char * fn = "ep-data.txt";
    fout.open(fn);
    if (!fout.is_open())
    {
        std::cout << "Can't open " << fn << ". Bye.\n";
        exit(EXIT_FAILURE);
    }
    double objective;
    std::cout << "Enter the focal length of your "
                "telescope objective in mm: ";
    std::cin >> objective;
    double eps[LIMIT];
    std::cout << "Enter the focal lengths, in mm, of " << LIMIT
            << " eyepieces:\n";
    for (int i = 0; i < LIMIT; ++i)
    {
        std::cout << "Eyepiece #" << i + 1 << ": ";
        std::cin >> eps[i]; 
    }
    file_it(fout, objective, eps, LIMIT);
    file_it(std::cout, objective, eps, LIMIT);
    std::cout << "Done\n";
}

void file_it(std::ostream & os, double fo, const double fe[], int n)
{
    std::ios_base::fmtflags initial;
    initial = os.setf(std::ios_base::fixed); // save initial formatting state
    os.precision(0);
    os << "Focal length of objective: " << fo << " mm\n";
    os.setf(std::ios::showpoint);
    os.precision(1);
    os.width(12);
    os << "f.l. eyepice";
    os.width(15);
    os << "magnification " << std::endl;
    for (int i = 0; i < n; ++i)
    {
        os.width(12);
        os << fe[i];
        os.width(15);
        os << int (fo/fe[i] + 0.5) << std::endl;
    }
    os.setf(initial);   // restore initial formatting state
}