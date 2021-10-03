#include <iostream>
using namespace std;
class outo_algoritmi_luokka
{
private:
	int luku;
public:
	void kysy_outo_algoritmi_luku();
	void nayta_outo_algoritmi_luvut();
};
void outo_algoritmi_luokka::kysy_outo_algoritmi_luku()
{
	cout << "Syötä kokonaisluku (1 tai yli ja 1000000 tai ali): ";
	cin >> luku;
	if (luku < 1) { cout << "Virhe! Pitää olla 1 tai yli ja 1000000 tai alle!\n"; exit(1); }
	if (luku > 1000000) { cout << "Virhe! Pitää olla 1000000 tai alle ja yli 1!\n"; exit(1); }	

}
void outo_algoritmi_luokka::nayta_outo_algoritmi_luvut()
{
	cout << luku << " ";	
	while (luku != 1)
	{
			
		if (luku % 2 == 0) { luku = luku / 2; }
		else { luku = luku * 3 + 1; }
		cout << luku << " ";
	}
	cout << endl;
}
int main()
{
	outo_algoritmi_luokka outo_algoritmi_olio;
	outo_algoritmi_olio.kysy_outo_algoritmi_luku();
	outo_algoritmi_olio.nayta_outo_algoritmi_luvut();
//	cout << outo_algoritmi_olio.luku;
	return 0;
}
