#include <iostream>

using namespace std;

int main() {
	int N,fact;
	cin >> N;	
	fact=N;
	while(N>1)
	{
	    N--;
		fact=fact*N;
	}	
	cout<<fact;
}

