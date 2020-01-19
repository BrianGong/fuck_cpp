#include <iostream>
using std::cout ;
using std::endl ;

template<typename T , int val1,int val2>
class Array
{
    public:
    T v;
    Array(int inval)
    {
        v = val1;
    }
};

 int main()
 {
     Array<double,3,6> arr(1);
     cout << arr.v<< endl;
 }