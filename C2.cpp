#include <iostream>
#include <string>
using namespace std;

int main(){
	double x=2.00,n;
	double y=0;
	cout << "Enter number that you want to plus : ";
	cin >> n;
	if(n<2){
		cout << "\n\nThe answer is error";
		return 0;
	}
	while(n!=1){
		cout << "1/" << x;
		if(n>2){
			cout << " + ";
		}
		y=y+(1/x);
		x=x+1;
		n=n-1;
	}
	cout << "\n\nThe answer is = " << y;
	return 0;
}
