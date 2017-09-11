#include "color.h"

using namespace std;

Color::Color(unsigned char r, unsigned char g, unsigned char b){
	R=r;
	G=g;
	B=b;
	}
Color::Color(){
	R=0;G=0;B=0;
	}

string Color::get_hex() const {
	ostringstream temp;
	if (R<16) {
		temp <<0;
		}
	temp << std::hex << (int)R;
	if (G<16) {
		temp <<0;
		}
	temp << std::hex << (int)G;
	if (B<16) {
		temp <<0;
		}
	temp << std::hex << (int)B;
	return temp.str();
	}

vector<char> Color::get_vector() const{
	vector<char> result;
	result.push_back(R);
	result.push_back(G);
	result.push_back(B);
	return result;
	}

void Color::set(unsigned char r, unsigned char g, unsigned char b){
	if(r>=0 && r<256){
		R=r;
		}
	if(g>=0 && g<256){
		G=g;
		}
	if(b>=0 && b<256){
		B=b;
		}
	}

Color operator+ (const Color &farba1, const Color &farba2){
	return Color((farba1.get_vector()[0]+farba2.get_vector()[0])/2, (farba1.get_vector()[1]+farba2.get_vector()[1])/2, (farba1.get_vector()[2]+farba2.get_vector()[2])/2)
	;
	}
