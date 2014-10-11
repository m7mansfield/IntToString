///////////////////////////////////////
//This function takes an integer and///
//converts it to type string.       ///
///////////////////////////////////////

#include <iostream>
#include <string>

std::string IntToString(int x)
{
  std::string tmp(""), ans("");
  while(x > 0)
  {
    tmp += (x % 10) + 48;
    x /= 10;
  }
  for(int i = tmp.size() - 1; i >= 0; i--)
  {
    ans += tmp[i];
  }
  return ans;
}
