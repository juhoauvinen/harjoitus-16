/***********************************************
*Harjoitus 16
*Juho Auvinen
*Kuvaus:
*Tee ohjelma, joka kysyy henkilotietosi ja tallentaa ne tietueeseen.
*Tietueeseen talletetaan seuraavat tiedot:
*etunimi (merkkijono; C:n merkkitaulukko)
*sukunimi (merkkijono; C:n merkkitaulukko)
*koulumatka (reaaliluku)
*osoite (merkkijono; C:n merkkitaulukko)
*postinumero (merkkijono; C:n merkkitaulukko)
*kengannumero (kokonaisluku)
*
*Ohjelma tulostaa lopuksi tietueen tiedot naytölle.
*
*Versio: 1.0
*PVM: 22.10.-14
************************************************/

#include <iostream>
using namespace std;

struct HENK
{
	char etunimi[50], sukunimi[50], osoite[89], postinumero[50];
	float matka;
	int kenkä;
};

int main()
{
	HENK henk1;

	cout << "Anna etunimi" << endl;
	cin.get(henk1.etunimi, 50);
	cin.get();

	cout << "Anna sukunimi" << endl;
	cin.get(henk1.sukunimi, 50);
	cin.get();

	cout << "Anna koulumatka" << endl;
	cin >> henk1.matka;
	cin.get();

	cout << "Anna osoite" << endl;
	cin.get(henk1.osoite, 50);
	cin.get();

	cout << "Anna postinumero" << endl;
	cin.get(henk1.postinumero, 50);
	cin.get();

	cout << "Anna kengannumero" << endl;
	cin >> henk1.kenkä;
	cin.get();

	cout << endl;

	cout << henk1.etunimi << " " << henk1.sukunimi << endl
		<< henk1.osoite << endl
		<< henk1.postinumero << endl
		<< henk1.matka << " km" << endl
		<< henk1.kenkä << endl;
}