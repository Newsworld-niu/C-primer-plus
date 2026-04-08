#include <iostream>
#include <cstring>
template <class T>
T maxn(T ar[], int n);

template<>
char * maxn(char * pt[], int n);

int main()
{
    int ar1[6] = {1, 2, 3, 4, 9, 8};
    double ar2[4] = {1.5, 7.5, 1.6, 4.1};
    char * ar[5] = {"Hello", "News", "World" , "Diccg", "NO"};
    std::cout << maxn(ar1, 6) << std::endl;
    std::cout << maxn(ar2, 4) << std::endl;
    std::cout << maxn(ar, 5) << std::endl;
}

template<class T>
T maxn(T ar[], int n)
{
    decltype(ar[0]) m = ar[0];
    for (int i = 0; i < n; ++i)
    {
        if (ar[i] > m)
            m = ar[i]; 
    }
    return m;
}

template<>
char * maxn(char * pt[], int n)
{
    char * m = pt[0];
    for (int i = 0; i < n; ++i)
    {
        if (strlen(pt[i]) > strlen(m))
            m = pt[i]; 
    }
    return m;
}