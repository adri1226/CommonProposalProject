#include <memory>
#include <iostream>

#include <DDS.hpp>

int main(int argc, char *argv[])
{
  std::cout << "OTRA APP" << std::endl;

  DDS dds(0, 2);

  while(true)
  {
    int i = 0;
  }

  return 0;
}
