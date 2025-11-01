#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const int boyut = 5;
const int tplgemi = 3;
int sinirhak = 10;

void gemiyerlestir(char tahta[boyut][boyut],int tplgemi) {
	int baslastr = rand() % (boyut-tplgemi);
	int baslastn = rand() % (boyut);
	for (int i = 0; i < tplgemi; i++)
	{
		tahta[baslastr+i][baslastn] = 'G';
	}
}

void tahtayzdr(char tahta[boyut][boyut]) {
	cout << "  0 1 2 3 4" << endl;
	for (int i = 0; i < boyut; i++)
	{
		cout << i << " ";
		for (int j = 0; j < boyut; j++)
		{
			if (tahta[i][j] == 'G') {
				cout << "~" << " ";
			}
			else if (tahta[i][j] == 'X' || tahta[i][j] == 'O') {
				cout << tahta[i][j] << " ";
			}
			else {
				cout << tahta[i][j] << " ";
			}
			
		}
		cout << endl;
	}
	
}

int main() {
	srand(time(0));
	char rakiptahtasi[boyut][boyut];
	int satir;
	int sutun;
	int vurulangemi=0;
	
	for (int i = 0; i < boyut; i++)
	{
		for (int j = 0; j < boyut; j++)
		{
			rakiptahtasi[i][j] = '~';
		}

	}
	gemiyerlestir(rakiptahtasi, tplgemi);
	
	cout << "--AMIRAL BATTIYA HOS GELDİNİZ!--" << endl;
	cout << "~~OYUN BASLIYOR~~" << endl << endl;
	cout << "---Amiral Batti (5x5) ---" << endl;

	while (vurulangemi < tplgemi ) {

		
		if (sinirhak == 0) {
			cout << endl;
			cout << "--- OYUNU KAYBETTİNİZ!!!!---";
			return 0;
		}
		tahtayzdr(rakiptahtasi);
		cout << endl;
		cout << "satir girin :";
		cin >> satir;
		
		while (satir < 0 || satir>4) {
			cout << "lutfen (0-4) araliginda bir deger girin :";
			cin >> satir;
		
			
		}
		cout << endl;
		cout << "sutun girin :";
		cin >> sutun;
		
		while (sutun < 0 || sutun>4) {
			cout << "lutfen (0-4) araliginda bir deger girin :";
			cin >> sutun;
			
		}
		if (rakiptahtasi[satir][sutun] == 'G') {
			cout << endl;
			
			cout << "---ISABET!---" << endl ;
			
			rakiptahtasi[satir][sutun] = 'X';
			
			vurulangemi = vurulangemi + 1;
			cout << "bulma odulu : +1 hak\n";
			cout << "kalan hak sayisi : ("<< sinirhak <<"+1)" << " " << sinirhak + 1;
			sinirhak = sinirhak + 1;
			cout << endl << endl;
		}
		
		else if (rakiptahtasi[satir][sutun] == 'X' || rakiptahtasi[satir][sutun] == 'O') {
			cout << endl;
			cout << "---ZATEN BURAYA ATIS YAPILDI!---" << endl;
			cout << "kalan hak sayisi :" << sinirhak;
			
		}
		else {
			cout << endl;
			cout << "---ISKA!---" << endl;;
			rakiptahtasi[satir][sutun] = 'O';
			sinirhak = sinirhak - 1;
			cout << "kalan hak sayisi :" << sinirhak<<endl<<endl;
		}
		
	}
	
	if (vurulangemi == tplgemi) {
		cout << endl;
		cout << "---TEBRIKLER OYUNU KAZANDINIZ !!!!---";
	}
	
	return 0;
}

