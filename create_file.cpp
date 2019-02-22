#include <iostream>
#include <fstream>      // std::ofstream

int main(int argc, char** argv) {

  std::ofstream ofs (argv[1], std::ofstream::out);

  ofs.close();

  return 0;
}