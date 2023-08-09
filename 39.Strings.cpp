#include <iostream>
#include <cstring>
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
    int maxIndex = 0;
    for (int i = 0; i < 26; i++)
    {
        if (arr[i] > arr[maxIndex])
            maxIndex = i;
    }
    return (maxIndex + 'a');
}

string replaceSpaces(string str)
{
    string ans;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == ' ')
            ans += "%20";
        else
            ans += str[i];
    }
    return ans;
}

// string removeOccurances(string str, string substr)
// {
//     // baabcdaaabcaba // abc
//     string ans;
//     int i = 0, j = 0;
//     while (i < str.length())
//     {
//         while (i < str.length() && str[i] != substr[j])
//         {
//             cout << "ans1 =" << ans << endl;
//             ans += str[i];
//             i++;
//         }
//         while (i < str.length() && j < substr.length() && str[i] == substr[j])
//         {
//             i++;
//             j++;
//         }
//         if (j < substr.length())
//         {
//             cout << "ans2 =" << ans << endl;
//             ans += substr.substr(0, j);
//         }
//         else
//             j = 0;
//     }
//     return ans;
// }
string removeOccurrences(string str, string substr)
{
    string ans;
    int i = 0;

    while (i < str.length())
    {
        bool found = true;

        for (int j = 0; j < substr.length(); j++)
        {
            if (i + j >= str.length() || str[i + j] != substr[j])
            {
                found = false;
                break;
            }
        }

        if (found)
        {
            i += substr.length();
        }
        else
        {
            ans += str[i];
            i++;
        }
    }

    return ans;
}

int main()
{

    // Char Array Operations
    char s1[100], s2[100] = "Hello World";
    cout << "Enter a Char Array with Spaces: ";
    cin.getline(s1, 100); // cin.getline(charArray, size) is used to take input of a char array with spaces
    cout << "Char Array: " << s1 << endl;
    cout << "Char Array Length: " << strlen(s1) << endl;
    cout << "Char Arrays Comparison (Same = 0): " << strcmp(s1, s2) << endl; // returns 0 if equal, <0 if s1<s2, >0 if s1>s2 (alphabetically)
    strcpy(s1, s2);                                                          // copies s2 to s1
    cout << "Char Array Copy: " << s1 << endl;

    cout << endl;

    // String Operations
    string st1, st2 = "Hello World";
    cout << "Enter a String with Spaces: ";
    getline(cin, st1); // getline(cin, s) is used to take input of a string with spaces
    cout << "String: " << st1 << endl;
    cout << "String Length: " << st1.length() << endl;
    cout << "String Comparison (Same = 0): " << st1.compare(st2) << endl; // returns 0 if equal, <0 if s1<s2, >0 if s1>s2 (alphabetically)
    st1 = st2;                                                            // copies s2 to s1
    cout << "String Copy: " << s1 << endl;

    cout << endl;

    string str = "A man, a plan, a canal: Panama";
    string str2 = "  hello world  ";
    string str3 = "testsample"; // e
    string str4 = "baabcdaaabcaba";
    cout << str << endl;
    cout << "is Palindrome?: " << checkPalindrome(str) << endl;
    cout << "Reverse String: " << reverseString(str) << endl;
    cout << "Reverse Words: " << reverseWords(str2) << endl;
    cout << "Max Occuring Char: " << getMaxOccuringChar(str3) << endl;
    cout << "Replace Spaces: " << replaceSpaces(str) << endl;
    cout << "Remove Occurances: " << removeOccurrences(str4, "abc") << endl;
}