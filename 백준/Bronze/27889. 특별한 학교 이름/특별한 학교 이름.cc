#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
    
  string s;
    
  cin >> s;
    
  if (s == "NLCS")
    cout << "North London Collegiate School";
  else if (s == "BHA")
    cout << "Branksome Hall Asia";
  else if (s == "KIS")
    cout << "Korea International School";
  else
    cout << "St. Johnsbury Academy";
    
  return 0;
}