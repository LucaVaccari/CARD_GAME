#include <iostream>
#include <Card.h>

using namespace std;

int main()
{
    Card first(1, 2);
    first.Print(); cout << "\n";
    Card second(first);
    second.Print(); cout << "\n";
    Card third = first;
    third.Print(); cout << "\n";

    return 0;
}
