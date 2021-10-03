#include <iostream>
using namespace std;
int main()
{
char ch[] = "venividivici";
int i = 0;
while (ch[i] != '\0') { cout << (char)(((ch[i] - 'a') + 13) % 26 + 'a'); i++; }
cout << "\n";
return 0;
}
