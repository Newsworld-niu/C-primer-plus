#include <iostream>

int main()
{
    using namespace std;
    cout << "Please enter an automobile gasoline consumption figure: ";
    double mpg;
    cin >> mpg;

    double lkm =  62.14 * 3.875 / (mpg);
    cout << lkm;
    return 0; 
}