#include <iostream>

using namespace std;

class Mammals {
	public:
		void fn1() {
			cout << "I am mammal" << endl;
		}
};

class MarineAnimals {
	public:
		void fn2() {
			cout << "I am a marine animal" << endl;
		}
};

class BlueWhale : public Mammals, public MarineAnimals {
	public:
		void fn3() {
			cout << "I belong to both the categories: Mammals as well as Marine Animals" << endl;
		}
};

int main()
{
	Mammals mm;
	MarineAnimals ma;
	BlueWhale bw;
	mm.fn1(); /* func of Mammals by obj of Mammals */
	ma.fn2(); /* func of MarineAnimals by obj of MarineAnimals */
	bw.fn3(); /* func of BlueWhale by obj of BlueWhale */
	bw.fn1(); /* func of Mammals by obj of BlueWhale */
	bw.fn2(); /* func of MarineAnimals by obj of BlueWhale */
	return 0;
}
