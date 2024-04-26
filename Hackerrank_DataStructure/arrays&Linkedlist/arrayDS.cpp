#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
#include <cctype>
#include <locale>

/*
 * Complete the 'reverseArray' function below.
 *
 * The function is expected to return an INTEGER_ARRAY.
 * The function accepts INTEGER_ARRAY a as parameter.
 */

vector<int> reverseArray(vector<int> a)
{
    vector<int> b;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        b.push_back(a[i]);
    }
    return b;
}
