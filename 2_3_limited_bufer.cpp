#include <iostream>
#include <vector>
using namespace std;
int main()
{
    cout << "\033[2J\033[1;1H";
    vector<int> vec (5);
    int input = 0; // определяет, в какой индекс кладем значение
    int output = 0; // определяет, c какого индекса выводим значения массива
    bool flag_p = false; // определяет, был ли хоть раз достигнут предел массива
    int numb;
    while (true){
        cin >> numb;
        if (flag_p == true && numb != -1) { output++;}
        if (numb != -1)
        {
            vec[input] = numb;
            if (input == vec.size()-1) // перескок при заполнении последнего элемента массива
            {
                input = -1;
                output = 0;
                flag_p = true;
            }
            input ++;
        }
        else {
            for (int i = output; i < vec.size(); i++)
            {
                cout << vec [i] << " ";
            }
            if (output > 0) {
                for (int i = 0; i < output; i++)
                {
                    cout << vec[i] << " ";
                }
            }
        }
    }
}