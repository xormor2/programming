#include <iostream>
using namespace std;
int main()
{
char ch[] = "venividivici";
int i = 0;
while (ch[i] != '\0') { cout << (char)(((ch[i] - 'a') + 3) % 26 + 'a'); i++; } //rotate right by 3 letters of the alphabet/characters
cout << "\n";
return 0;
}
