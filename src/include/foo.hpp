#include <iostream>

class Foo
{
    public:
        Foo()
        {
            std::cout << "Foo constructor" << std::endl;
        }

        ~Foo()
        {
            std::cout << "Foo destructor" << std::endl;
        }

        void print_foo();
};