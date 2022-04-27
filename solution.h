
#ifndef SOLUTION_H
#define SOLUTION_H

#include "node.h"
#include <vector>
#include <queue>
#include <unordered_map>
#include <string>
#include <stack>

using namespace std;
namespace sol809
{

  class Solution
  {
  private:
    bool canStretch(string &s, string &word);
  public:
    int count(string &s, vector<string> &words);
  };
}
#endif