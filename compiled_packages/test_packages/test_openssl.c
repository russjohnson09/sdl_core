#include <iostream>
#include <openssl/sha.h>

using namespace std;
int main()
{
    cout << "Hello, World!";
    return 0;
}


//https://www.linuxtopia.org/online_books/an_introduction_to_gcc/gccintro_54.html

//Note that programs using C++ object files must always be linked with g++, in order to supply the appropriate C++ libraries. Attempting to link a C++ object file with the C compiler gcc will cause "undefined reference" errors for C++ standard library functions:


//g++ test_openssl.c -o test_openssl.o




//g++ -g -x c++ -Wall test_openssl.c -o test_openssl.o

