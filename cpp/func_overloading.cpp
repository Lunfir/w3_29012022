#include <iostream>


struct Point
{
    double x;
    double y;
};

template <typename T>
T sum(T a, T b)
{
    std::cout << __PRETTY_FUNCTION__ << " "; // __FUNCTION__

    return a + b;
}

template <typename T, typename Y, typename X>
T sum(Y a, X b)
{
    std::cout << __PRETTY_FUNCTION__ << " "; // __FUNCTION__

    return a + b;
}

int sum(int a, int b, int c)
{
    return a + b + c;
}


int main()
{
    //std::cout << "sum(int a, int b, int c)  : " << sum(12, 23, 34) << std::endl;
    Point a;
    Point b;

    a.x = 12;
    a.y = 1;

    b.x = 23;
    b.y = 12;

    std::cout << "sum(int a, int b)         : " << sum<int>(12, 23) << std::endl;
    std::cout << "sum(double a, double b)   : " << sum<double>(12.23, 23.12) << std::endl;
    std::cout << "sum(float a, double b)    : " << sum<int, float, double>(12.23f, 23.12) << std::endl;
    

    // std::cout << "sum(Point a, Point b)     : " << sum(a, b) << std::endl;

    return 0;
}
