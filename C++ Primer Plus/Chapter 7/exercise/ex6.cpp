#include <iostream>
const int Size = 10;

int Fill_array(double ar[], int Size);
void Show_array(double ar[], int size);
void Reverse_array(double ar[], int size);

int main()
{
    double ar[Size];
    int size = Fill_array(ar, Size);
    Show_array(ar, size);
    Reverse_array(ar + 1, size -2);
    Show_array(ar, size);
}

int Fill_array(double ar[], int Size)
{   
    int size = 0;
    while (size < Size)
    {
        std::cout << "Enter " << size + 1 << " number: ";
        if (std::cin >> ar[size])
        {
            ++size;
        }
        else
            break;
    }
    return size;
}

void Show_array(double ar[], int size)
{
    for (int i = 0; i < size; ++i)
        std::cout << "The " << i+1 << " number: " << ar[i] << "\n";
}

void Reverse_array(double ar[], int size)
{
    double ar1[size];
    for (int i = 0; i < size; ++i)
    {
        ar1[i] = ar[i];
    }
    for (int i = 0; i < size; ++i)
    {
        ar[i] = ar1[size - i - 1];
    }
}

#if 0
// 双指针原地交换
void Reverse_array(double ar[], int size)
{
    int left = 0;
    int right = size -1;
    while (left < right)
    {
        double temp = ar[left];
        ar[left] = ar[right];
        ar[right] = temp;
        ++left;
        --right;
    }
}
//更省内存
#endif