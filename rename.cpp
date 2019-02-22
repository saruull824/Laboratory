#include <iostream>
#include <cstdio>
#include <fstream>

using namespace std;

int main(int argc, char** argv)
{
    int a = rename(argv[1], argv[2]);
	return 0;
}