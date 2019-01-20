#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
  cout<< "Executing <shell_script.sh> " << endl;
  std::string command("./shell_script.sh");
  int a, b;
  cout<<"Taking paramenters from C++\n";
  cout<<"Enter first number: ";
  cin>>a;
  cout<<"Enter second number: ";
  cin>>b;
  std::string s1 = std::to_string(a);
  std::string s2 = std::to_string(b);
  command.append(" ");
  command.append(s1);
  command.append(" ");
  command.append(s2);
  int i, ret = system(command.c_str());
  i=WEXITSTATUS(ret);
  cout<<"Value printing in C++= "<<i<<"\n";
  return 0;
}
