#include <iostream>
#include <vector>
using namespace std;
vector <int> erase_element (vector<int> vec, int num_del)
{
    vector<int> new_vec;
    for (int i = 0; i < vec.size(); i++)
    {
        if (vec[i] != num_del)
        {
            new_vec.push_back(vec[i]);
        }
    }
    vec = new_vec;
    return vec;
}
int main()
{
    cout << "\033[2J\033[1;1H";
    cout << "This program takes some numbers from user, puts them all\n";
    cout << "into array and suggests user to delete significant element from that array\n ";
    cout << "How many elements will be contain your array?\n";
    int n;
    cin >> n;
    vector <int> vec (n);
    cout << "Input elements...\n";
    for (int i = 0; i < n; i++) {
        cin >> vec [i];
    }
    cout << "Input element to delete\n";
    int num_del;
    cin >> num_del;
    vec = erase_element(vec, num_del);
    cout << "Result:\n";
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << "  ";
    }
}