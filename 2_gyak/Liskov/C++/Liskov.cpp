#include <iostream>

using namespace std;

class Madarak {
		
public:
	void repul(){
		cout << "repulok ..." << endl;
	}

};

class Pingvin: public Madarak {

};

class Sas : public Madarak {

};

int main ( int argc, char **argv ){
     
	Pingvin pingvin;
	Sas sas;

	pingvin.repul();
	sas.repul();

	return 0;
}

