#include <iostream>
#include <math.h>
using namespace std;

int KM (long int aa, long int bb){
	if ((log10(aa)<=1)||(log10(bb)<=1)){
		return aa*bb;
	}
	else{
	int n,m;
	int a,b,c,d;
	n = (int) log10(aa);
	n = n+1;
	double n2;
	n2 = n/2;
	b = aa% (int) pow(10.0,n2);
	a = (aa-b)/pow(10.0,n2);
	m = (int) log10(bb);
	m = m+1;
	double m2;	
	m2 = m/2;
	d = bb% (int) pow(10.0,m2);
	c = (bb-d)/pow(10.0,m2);	
	
//cout<< a <<endl;
//cout<< b <<endl;
//cout<< c <<endl;
//cout<< d <<endl;

	int ac = KM(a,c);
	int bd = KM(b,d);
	int mid;
	mid = KM(a+b,c+d)-ac-bd;
//cout << "mid:  "<< mid << endl;
    int sum = (pow(10.0,n)*ac+pow(10.0,n2)*mid+bd);
//cout<< "sum:  "<< pow(10.0,n)<< endl;		
//cout<< "next" << endl;
	return sum;
	}
}

int main(){
long int aa = 1234;
long int bb = 5678;
	
cout<< "Karatsuba_Multiplication" << endl;	
cout<< "AA=" << aa <<endl;
cout<< "BB=" << bb <<endl;	
cout<< KM(aa,bb) << endl;
	return 0;
}

