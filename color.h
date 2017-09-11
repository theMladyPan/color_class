#ifndef __SSTREAM__
#define __SSTREAM__
#include <sstream>
#endif

#ifndef __VECTOR__
#define __VECTOR__
#include <vector>
#endif

#ifndef __IOSTREAM__
#define __IOSTREAM__
#include <iostream>
#endif

#ifndef __STDLIB_H__
#define __STDLIB_H__
#include <stdlib.h>
#endif

#ifndef __STRING__
#define __STRING__
#include <string>
#endif

#ifndef __UNISTD_H__
#define __UNISTD_H__
#include <unistd.h>
#endif

#ifndef __COLOR_H__
#define __COLOR_H__

using namespace std;

class Color{
	private:
		unsigned char R,G,B;

	public:
		Color(unsigned char r, unsigned char g, unsigned char b);
		Color();
		string get_hex() const;
		vector<char> get_vector() const;
		void set(unsigned char r, unsigned char g, unsigned char b);
		friend Color operator+ (const Color& farba1, const Color& farba2);
	};

#endif
