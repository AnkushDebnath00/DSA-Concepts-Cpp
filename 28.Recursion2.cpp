#include <iostream>
#include <vector>
#include <string>
#include <C:\Users\Ankus\OneDrive\Documents\C++\h\Printing.h>
#include <set>
using namespace std;

void generate(int i, int n, string &str, string curr, vector<string> &subseq)
{
    if (i >= n)
    {
        if (curr.size() > 0)
            subseq.push_back(curr);
        return;
    }

    generate(i + 1, n, str, curr, subseq);
    generate(i + 1, n, str, curr + str[i], subseq);
}

int solve(string &str)
{
    int n = str.size();
    vector<string> subseq;

    // generate all subsequences
    generate(0, n, str, "", subseq);

    set<int> s;

    // convert each string to decimal and push into set
    for (int i = 0; i < subseq.size(); i++)
    {
        int num = stoi(subseq[i], 0, 2);
        s.insert(num);
    }

    printVectorString(subseq);
    printVectorSet(s);
    return s.size();
}

int main()
{
    string str;
    cin >> str;

    cout << solve(str);

    return 0;
}