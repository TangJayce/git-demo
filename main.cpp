#include <iostream>

using namespace std;

void function_A()
{
    cout << "finish A" << endl;
}

void function_B()
{
    cout << "finish B" << endl;
}

void function_C()
{
    cout << "finish C" << endl;
}

void function_conflict()
{
    cout << "Adil run" << endl;
}

int main()
{
    cout << "Hello, World!" << endl;
    function_A();
    function_B();
    function_C();
    function_conflict();
    return 0;
}
