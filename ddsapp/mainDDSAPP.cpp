#include <memory>
#include <iostream>

#include <DDS.hpp>

int main(int argc, char *argv[])
{
  std::cout << "OTRA APP" << std::endl;

  auto dds = std::make_shared<DDS>(0, 2);

  while(true)
  {
    int i = 0;
  }

  return 0;
}
