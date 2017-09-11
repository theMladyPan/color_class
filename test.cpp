#include "color.h"

#ifndef __VECTOR__
#define __VECTOR__
#include <vector>
#endif

using namespace std;

int main(int argc, char ** argv){
	if (argc==4){
		Color farba;
	//const Color farba2(11,22,33);
	//cout << farba2.get_hex()<<endl;

		string exe_name = argv[0];
		vector<string> args;
		args.assign(argv+1, argv+argc);

		char R=0,G=0,B=0;

		for(vector<string>::iterator it = args.begin();it!=args.end();it++){
			if (*it=="-r") {
				R = atoi((*(++it)).c_str());
			}else if (*it == "-g") {
				G = atoi((*(++it)).c_str());
			}else if (*it == "-b") {
				B = atoi((*(++it)).c_str());
			}
		}

		farba.set(R,G,B);
		cout << "Farba [RGB]: " << farba.get_hex() << endl;
	}else{ //ak nemas argumenty
		vector<Color*> *colors=new vector<Color*>;
		for(int i=0;i<1000000;i++){
			colors->push_back(new Color(i++%256,i--+127%256,i+127/2%256));
			}
		cout << "Velkost vektora: " << colors->size() << endl;
		cout << "(posledny-100) element: " << colors->at(999999-100)->get_hex() <<endl;
		cout << "posledny element: " << colors->back()->get_hex() << endl;
		cout << "posledny + predposledny element: " << (*(colors->back())+*(colors->at(999999-100))).get_hex() <<endl;
		/*for(vector<Color*>::iterator it = colors->begin();it!=colors->end();it++){
			cout << "Farba: " << (*it)->get_hex() << endl;
			}*/
		};

	return 0;
}
