#include <iostream>

using namespace std;

class Madarak {
		
};

class RepuloMadar: public Madarak {

public:
	void repul(){
		cout << "repul ..." << endl;
	}

};

class Sas: public RepuloMadar {

};

class Pingvin : public Madarak {

};

int main ( int argc, char **argv ){
     
	Pingvin pingvin;
	Sas sas;

//	pingvin.repul();
	sas.repul();

	return 0;
}
