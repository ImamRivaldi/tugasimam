#include <iostream>
#include <conio.h>
using namespace std;

int main () {
	int LuasRumah;
	
	double LuasParket = 193*1215;
	
	double Box = LuasParket*8/1000000;
	
	double JumlahBox, Parket, Pasang, Total;
	cout<<"Luas Rumah        :  ";
	cin>>LuasRumah;
	cout<<"-------------------------------- \n";
	
	cout<<"Luas Rumah        : "<<LuasRumah<<" m2"<<endl;
	cout<<"Luas 1 Box Parket : "<<Box<<" m2"<<endl;
	
	JumlahBox = LuasRumah/Box;
	cout<<"Jumlah Box Parket : "<<JumlahBox<<endl;
	
	Parket = JumlahBox * 500;
	cout<<"Biaya Parket(Rp)  : "<<Parket<<endl;
	
	Pasang = LuasRumah * 20;
	cout<<"Biaya Pasang(Rp)  : " <<Pasang<<endl;
	
	Total = Parket + Pasang;
	cout<<"Total Biaya(Rp)   : " <<Total<<endl;
}
