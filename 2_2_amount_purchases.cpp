#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "\033[2J\033[1;1H";
    vector<float> prices = {12.3, 3.4, 5.8, 12.6, 4.3, 0.7};
    vector<int> purchases = {1, 1, 5, 3, 3, 0};
    cout << "We have this list of prices:\n";
    for (int i = 0; i < prices.size(); i++)
    {
        cout << prices[i] << "  ";
    }
    cout << "\nAnd we have such list of purchases:\n";
    for (int i = 0; i < purchases.size(); i++)
    {
        cout << purchases[i] << "  ";
    }
    float sum = 0;
    for (int i = 0; i < purchases.size(); i++)
    {
        if (purchases[i] >= 0 && purchases[i] <= prices.size() - 1)
        {
            sum += prices[purchases[i]];
        }
    }
    cout << "\nTotal cost of purchases is  " << sum;
}