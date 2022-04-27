#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol809;

/*
Example:
Input:
S = "heeellooo"
words = ["hello", "hi", "helo"]
Output: 1
Explanation:
We can extend "e" and "o" in the word "hello" to get "heeellooo".
We can't extend "helo" to get "heeellooo" because the group "ll" is not size 3 or more.
*/

tuple<string, vector<string>, int>
testFixture1()
{
  return make_tuple("heeellooo", vector<string>{"hello", "hi", "helo"}, 1);
}

void test1()
{
  auto f = testFixture1();
  cout << "Expect to see " << to_string(get<2>(f)) << endl;
  Solution sol;
  cout << sol.count(get<0>(f), get<1>(f)) << endl;
}

main()
{
  test1();

  return 0;
}