#include <iostream>
using namespace std;

class TUPAKKA {
public:
void Ali() { cout << "inside the function Tupakka.Ali()\n"; }
} Tupakka;

int main()
{
cout << "Start of main()\n";
Tupakka.Ali();
cout << "End of main()\n";
return 0;
}
