#include <iostream>
using namespace std;
void generatesubsets(string s, string curr, int i)
{

    if (i == s.length())
    {
        cout << curr << endl;
        return;
    }
    generatesubsets(s, curr, i + 1);
    generatesubsets(s, curr + s[i], i + 1);
}
int main()
{
    string s;
    cout << "Enter string::" << endl;
    cin >> s;
    generatesubsets(s, "", 0);

    return 0;
}
// the problem in itself is a mystery and you would be able to understand the solution only if u see the below recursion tree
//    https://practice.geeksforgeeks.org/batch/dsa-4/track/DSASP-Recursion/video/MjMzMQ%3D%3D
