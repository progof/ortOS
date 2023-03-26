#include "guess_x.hpp"

int GetRandomNumber(int min_num, int max_num)
{
  int num = min_num + rand() % (max_num - min_num + 1);
  return num;
}

void guess_x()
{
  srand(time(NULL));

  int min = 0;
  int max = 100;
  int n, x;

  cout << "\n\tThe name of the program => [Guess X]\n" << endl;

  while (true)
  {
    x = GetRandomNumber(min, max);

    cout << "Random number is: " << x << endl;
    cout << "Enter the integer in range from " << min << " to " << max << ":" << endl;
    cin >> n;

    if (n == x)
    {
      cout << "You win, integer: " << n << endl;
      break;
    }

    if (n < min || n > max)
    {
      cout << "Wrong range! Try again" << endl;
      continue;
    }

    cout << "Upss... :(" << endl;
    if (n > x)
    {
      max = n;
      min = x;
    }
    else
    {
      max = x;
      min = n;
    }
  }
}