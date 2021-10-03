#include <iostream>
using namespace std;
int main()
{
char ch='a';
cout << (char)(((ch - 'a') + 13) % 26 + 'a') << "\n";
return 0;
}
