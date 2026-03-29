#include <iostream>
const int Max = 5;
// function prototypes
int fill_array(double * ar1, double * ar2);
void show_array(const double * ar1, const double * ar2);  // don't change data
void revalue(double r, double * ar1, double * ar2);

using std::cout;
using std::cin;

int main()
{
    double properties[Max];
    int size = fill_array(properties, properties + Max);
    show_array(properties, properties + size);
    if (size > 0)
    {
        cout << "Enter revaluation factor: ";
        double factor;
        while (!(cin >> factor))    // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; Please enter a number: ";
        }
        revalue(factor, properties, properties + size);
        show_array(properties, properties + size);
    }
    cout << "Done.\n";
    cin.get();
    cin.get();
    return 0;
}

int fill_array(double * ar1, double * ar2)
{
    double temp;
    int i;
    for (i = 0; i < ar2 - ar1; ++i)
    {
        cout << "Enter value #" << (i + 1) << ": ";
        cin >> temp;
        if (!cin)   // bad input
        {
            cin.clear();
            while (cin.get() != '\n')
                continue;
            cout << "Bad input; input process terminated.\n";
            break;
        }
        else if (temp < 0)      // signal to terminate
            break;
        *(ar1 + i) = temp;
    }
    return i;
}

// the following function can use, but not alter,
// the array whose address is ar
void show_array(const double * ar1, const double * ar2)
{
    for (int i = 0; i < ar2 - ar1; ++i)
    {
        cout << "Property #" << (i + 1) << ": $";
        cout << * (ar1 + i) << std::endl;
    }
}

// multiplies each element of ar[] by r
void revalue(double r, double * ar1, double * ar2)
{
    for (int i = 0; i < ar2 - ar1; ++i)
        *(ar1 + i) *= r;
}