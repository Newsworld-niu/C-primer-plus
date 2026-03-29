#include <iostream>

const int Field_Max = 47;
const int Field_number = 5;
const int Mega_Max = 27;
const int Mega_number = 1;

long double probability(int Max, int number);

int main()
{
    std::cout << "Probability: " << probability(Field_Max,Field_number) * probability(Mega_Max, Mega_number);
}

long double probability(int Max, int number)
{
    double probability1 = 1;
    for (int i = 0; i < number; ++i)
            probability1 = probability1 * (number - i) / (Max - i);
    return probability1;
}

#if 0 
// 另一种写法
long double probability(unsigned numbers, unsigned picks)
{
    long double result = 1.0;   // here come some local variables
    long double n;
    unsigned p;

    for (n = numbers , p = picks; p > 0; --n, --p)
        result = result * p / n;
    return result;
}
#endif