#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <algorithm>
#include <iterator>
#include <unordered_map>
#include <stack>
#include <cstring>
using namespace sol809;
using namespace std;

/*takeaways
  - use two pointers to solve the problem
*/
bool Solution::canStretch(string &s, string &word)
{
  const int m = s.size();
  const int n = word.size();
  int i = 0, j = 0;

  while (i < m && j < n)
  {
    if (s[i++] != word[j++])
      return false;

    /* the counters start with 1 as we already
       found a same char from s and word
    */
    auto cnts = 1, cntw = 1;

    /*count the number of them in this group */
    while (i < m - 1 && s[i] == s[i + 1])
      cnts++, i++;
    while (j < n - 1 && word[j] == word[j + 1])
      cntw++, j++;

    /* word can't be stretched to s */
    if (cnts < cntw || (cnts > cntw && cnts < 3))
      return false;
  }

  return true;
}

int Solution::count(string &s, vector<string> &words)
{
  auto result = 0;
  for (auto word : words)
    if (canStretch(s, word))
      result++;
  return result;
}