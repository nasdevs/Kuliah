#include <iostream>
#include <limits>
#include <float.h>
#include <wchar.h>
using namespace std;
// Nasrullah, github.com/nasdevs
int main() {
   cout << "========================================" << endl;
   cout << "=====Ukuran dan Jangkauan Tipe Data=====" << endl;
   cout << "========================================" << endl;
   cout << "char" << endl;
   cout << "\tUkuran : " << sizeof(char) << endl;
   cout << "\tJangkauan : " << CHAR_MIN << " - " << CHAR_MAX << endl;
   cout << "----------------------------------------" << endl;
   cout << "unsigned char" << endl;
   cout << "\tUkuran : " << sizeof(char) << endl;
   cout << "\tJangkauan : " << 0 << " - " << UCHAR_MAX << endl;
   cout << "----------------------------------------" << endl;
   cout << "int" << endl;
   cout << "\tUkuran : " << sizeof(int) << endl;
   cout << "\tJangkauan : " << INT_MIN << " - " << INT_MAX << endl;
   cout << "----------------------------------------" << endl;
   cout << "short int" << endl;
   cout << "\tUkuran : " << sizeof(short int) << endl;
   cout << "\tJangkauan : " << SHRT_MIN << " - " << SHRT_MAX << endl;
   cout << "----------------------------------------" << endl;
   cout << "unsigned int" << endl;
   cout << "\tUkuran : " << sizeof(unsigned int) << endl;
   cout << "\tJangkauan : " << 0 << " - " << UINT_MAX << endl;
   cout << "----------------------------------------" << endl;
   cout << "long int" << endl;
   cout << "\tUkuran : " << sizeof(long) << endl;
   cout << "\tJangkauan : " << LONG_MIN << " - " << LONG_MAX << endl;
   cout << "----------------------------------------" << endl;
   cout << "unsigned long int" << endl;
   cout << "\tUkuran : "  << sizeof(unsigned long int) << endl;
   cout << "\tJangkauan : " << 0 << " - " << ULONG_MAX << endl;
   cout << "----------------------------------------" << endl;
   cout << "float" << endl;
   cout << "\tUkuran : " << sizeof(float) << endl;
   cout << "\tJangkauan : " << FLT_MIN << " to " << FLT_MAX << endl;
   cout << "----------------------------------------" << endl;
   cout << "double" << endl;
   cout << "\tUkuran : " << sizeof(double) << endl;
   cout << "\tJangkauan : " << DBL_MIN << " - " << DBL_MAX << endl;
   cout << "----------------------------------------" << endl;
   cout << "wchar_t" << endl;
   cout << "\tUkuran : " << sizeof(wchar_t) << endl;
   cout << "\tJangkauan : " << WCHAR_MIN << " - " << WCHAR_MAX << endl;
   cout << "----------------------------------------" << endl;
   
   return 0 ;
}
