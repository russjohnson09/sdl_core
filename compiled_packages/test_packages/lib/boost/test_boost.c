#include <iostream>
#include <openssl/sha.h>


#include <boost/asio/bind_executor.hpp>
#include <boost/asio/ip/tcp.hpp>
#include <boost/asio/placeholders.hpp>
#include <boost/asio/ssl/stream.hpp>
#include <boost/asio/strand.hpp>
#include <boost/beast/core.hpp>
#include <boost/beast/websocket.hpp>
#include <boost/beast/websocket/ssl.hpp>
#include <boost/make_shared.hpp>
#include <boost/thread/thread.hpp>

using namespace std;
int main()
{
    cout << "Hello, World!";
    return 0;
}


//https://www.linuxtopia.org/online_books/an_introduction_to_gcc/gccintro_54.html

//Note that programs using C++ object files must always be linked with g++, in order to supply the appropriate C++ libraries. Attempting to link a C++ object file with the C compiler gcc will cause "undefined reference" errors for C++ standard library functions:


//g++ test_boost.c -o test_boost.o

//g++ -I/usr/local/Cellar/boost/1.69.0_2/include/boost test_boost.c -o test_boost.o


//g++ -g -x c++ -Wall test_boost.c -o test_boost.o
