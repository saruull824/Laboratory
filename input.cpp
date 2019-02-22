#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char** argv) {

  std::ofstream ofs (argv[1], std::ofstream::app);
  ofs << argv[2];

  ofs.close();

  return 0;
}

