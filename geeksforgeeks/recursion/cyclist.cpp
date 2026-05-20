#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, p, m;
    cin >> n >> k >> p >> m;
    vector<int> deck(n);
    for (int &num : deck)
      cin >> num;

    int energyToConsume = deck[p - 1];
    int energyConsumed = 0;

    if (p > k)
    {
      // we will count how much energy is need to move this p index element to the k window
      vector<int> store(deck.begin(), deck.begin() + p - 1);

      sort(store.begin(), store.end());
      int need = p - k;
      for (int i = 0; i < need; i++)
      {
        energyConsumed += store[i];
      }
    }
    // now our p is inside this k th window inside of which we will this Pth elemet and move this to the end of the deck
    vector<int> rest;
    for (int i = 0; i < n; i++)
    {
      if (i != p - 1)
        rest.push_back(deck[i]);
    }
    sort(rest.begin(), rest.end());

    int cycleBlockers = max(0, n - k);

    int cycleEnergy = energyToConsume;

    for (int i = 0; i < cycleBlockers; i++)
    {
      cycleEnergy += rest[i];
    }

    int leftEnergy = m - energyConsumed;
    if (leftEnergy < energyToConsume)
    {
      cout << 0 << "\n";
    }
    else
    {
      leftEnergy -= energyToConsume;
      cout << 1 + (leftEnergy / cycleEnergy) << "\n";
    }
  }
}
