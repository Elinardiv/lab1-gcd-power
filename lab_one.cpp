#include <iostream>
using namespace std;


int gcd(int a, int b) {
	while(b){
		a %= b;
		swap(a,b);
	}
	return a;
}

int main() {
	long long a,b;
	
	cout << "Никитин Савелий Сергеевич, группа 020303-АИСа-о25" << endl;
	
	cin >> a >> b;
	
	int n = 0;
	
	while (a != 1){
		long long c = gcd(a, b);
		if (c == 1){
			cout << -1;
			return 0;
		}
		a /= c;
		n++;
	}
	
	cout << n;
	return 0;
}