#include<iostream>
#include<iomanip>
using namespace std;

int main(){	
	double nb,rpy,ppy,in,tt;
	cout << "Enter initial loan: ";
	cin >> nb;
	cout << "Enter interest rate per year (%): ";
	cin >> rpy;
	cout << "Enter amount you can pay per year: ";
    cin >> ppy;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	int i=0;
	double s;
	while(nb>0){
	cout << fixed << setprecision(2); 
	i++;
	cout << setw(13) << left << i;
	cout << setw(13) << left << nb;
	in = (nb*rpy)/100;
	nb += in;
	cout << setw(13) << left << in;
	tt = nb;
	cout << setw(13) << left << tt;
	if(ppy-tt>=0){
	    s += ppy;
	    ppy = tt;
	}
	cout << setw(13) << left << ppy;
	if(ppy==tt){
	    ppy += s;
	}
	nb -= ppy;
	if(nb<=0){
	    nb = 0;
	}
	cout << setw(13) << left << nb;
	cout << "\n";	
	}
	return 0;
}