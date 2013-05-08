#include <iostream>

using namespace std;

template<int n>
class factorial {
    public:
        enum { RESULT = n * factorial<n-1>::RESULT };
};

template<>
class factorial<1> {
    public:
        enum { RESULT = 1 };
};

int main()
{
    int f = factorial<10>::RESULT;
    cout << "Factorial 10: " << f << endl;
    return 0;
}
