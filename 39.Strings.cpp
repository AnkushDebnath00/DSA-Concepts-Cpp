#include <iostream>
#include <string>
#include <vector>
#include <C:\Users\Ankus\OneDrive\Documents\C++\h\Printing.h>
using namespace std;

bool isPalindromeWord(vector<char> str)
{
    int left = 0, right = str.size() - 1;
    while (left < right)
    {
        if (str[left] != str[right])
            return false;
        left++;
        right--;
    }
    return true;
}
bool checkPalindrome(string &s)
{
    // A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

    vector<char> str;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            str.push_back(s[i] + 'a' - 'A');
        else if (isalnum(s[i]))
            str.push_back(s[i]);
    }
    return (isPalindromeWord(str));
}

string reverseString(string s)
{
    int left = 0, right = s.length() - 1;
    while (left < right)
        swap(s[left++], s[right--]);
    return s;
}
string reverseWords(string s)
{
    string ans;
    int left = 0, right;
    int n = s.length();
    while (left < n)
    {
        while (left < n && s[left] == ' ')
            left++;
        right = left + 1;
        while (right < n && s[right] != ' ')
            right++;
        string word = s.substr(left, right - left); // substr(starting index, length)
        if (ans.length() == 0)
            ans = word;
        else if (word.length() != 0 && ans.length() != 0)
            ans = word + " " + ans;
        left = right + 1;
    }
    return ans;
}

char getMaxOccuringChar(string s)
{
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            arr[s[i] - 'a']++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            arr[s[i] + 'a' - 'A']++;
        }
    }
    int maxVal = 0, res = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > maxVal)
        {
            maxVal = arr[i];
            res = i;
        }
    }
    return (res + 'a');
}

int main()
{
    string str = "A man, a plan, a canal: Panama";
    string str2 = "  hello world  ";
    string str3 = "testsample"; // e
    cout << str << endl;
    cout << "is Palindrome?: " << checkPalindrome(str) << endl;
    cout << "Reverse String: " << reverseString(str) << endl;
    cout << "Reverse Words: " << reverseWords(str2) << endl;
    cout << "Max Occuring Char: " << getMaxOccuringChar(str3) << endl;
}