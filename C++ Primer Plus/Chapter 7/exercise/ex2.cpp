#include <iostream>
int array_input(double []);
double array_display(double [],int n);
double average_calculation(double sum , int n);

int main()
{
    double golf_scores[10];
    int n = array_input(golf_scores);
    double sum = array_display(golf_scores, n);
    std::cout << "\nThe average of your golf scores: " 
    << average_calculation(sum, n) << std::endl;
}

int array_input(double ar[])
{
    int i = 0;
    double scores;
    std::cout << "Please enter yout golf scores:\n";
    while (i < 10)
    {
        std::cout << i + 1 << ": ";
        if ((std::cin >> scores) && (scores >= 0))
        {
            ar[i] = scores;
            ++i;
        }
        else
        {
            break;
        }
    }
    return i;
}

double array_display(double ar[], int n)
{
    double sum = 0;
    for (int i = 0; i < n; ++i)
    {
        std::cout << ar[i] << " ";
        sum += ar[i];
    }
    return sum;
}

double average_calculation(double sum, int n)
{
    return sum / n;
}

#if 0
const int MaxScores = 10;          // 将数组容量改为const ，方便以后修改

int array_input(double ar[]);
void array_display(const double ar[], int n);               // 不需要修改array的地方，就用constant，避免损坏array
double average_calculation(const double ar[], int n);

int main()
{
    double golf_scores[MaxScores];
    int count = array_input(golf_scores);

    if (count > 0)                                              // 考虑到有count = 0 的情形
    {
        array_display(golf_scores, count);
        std::cout << "\nThe average of your golf scores: "
                  << average_calculation(golf_scores, count)
                  << std::endl;
    }
    else
    {
        std::cout << "No scores were entered." << std::endl;
    }

    return 0;
}

int array_input(double ar[])
{
    int i = 0;
    double score;
    std::cout << "Please enter up to " << MaxScores << " golf scores. "
              << "Enter a negative number to stop." << std::endl;

    while (i < MaxScores && std::cin >> score)
    {
        if (score < 0)
            break;
        ar[i++] = score;                    // 学习写法，和我写的性能无差异（目前来说）
    }

    return i;
}

void array_display(const double ar[], int n)
{
    std::cout << "Scores: ";
    for (int i = 0; i < n; ++i)
    {
        std::cout << ar[i];
        if (i < n - 1)
            std::cout << " ";
    }
    std::cout << std::endl;
}

double average_calculation(const double ar[], int n)        // 我写的代码违反单一职责原则，对于小规模的程序，可读性往往更重要
{
    double sum = 0.0;
    for (int i = 0; i < n; ++i)
        sum += ar[i];
    return n > 0 ? sum / n : 0.0;                   // condition ? expression 1 : expression 2   // 一定要考虑到特殊情形
}
#endif