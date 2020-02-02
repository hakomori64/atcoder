#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


int main() {
	char a, b;
	cin >> a >> b;
	string aa(b - '0', a);
	string bb(a - '0', b);
	cout << (aa < bb ? aa : bb) << endl;
	return 0;
}
