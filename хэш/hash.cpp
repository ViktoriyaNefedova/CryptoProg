#include <iostream>
#include <cryptopp/cryptlib.h>
#include <cryptopp/hex.h>
#include <cryptopp/files.h>
#define CRYPTOPP_ENABLE_NAMESPACE_WEAK 1
#include <cryptopp/md5.h>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    using namespace CryptoPP;
	string digest;
    Weak::MD5 hash;
    FileSource("1.txt", true, new HashFilter(hash, new HexEncoder(new StringSink (digest))));
    cout<<"Hash: "<< digest << endl;
    return 0;
}