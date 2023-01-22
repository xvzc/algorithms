#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

int main()
{
  int a, sum = 0;
  scanf("%d", &a);
  string temp;
  cin >> temp;
  for (int i = 0; i < a; i++)
  {
    sum += (int)temp[i] - 48;
  }
  printf("\n%d", sum);
}
