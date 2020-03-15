#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
int count=0, i, sealev=0;
for(i=0; i<n; i++)
{
    if(s.at(i)=='U')
    {
        sealev++;
        if(sealev==0)
        {
            count++;
        }
    }
    else
    {
        sealev--;
    }
}
return count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string s;
    getline(cin, s);

    int result = countingValleys(n, s);

    fout << result << "\n";

    fout.close();

    return 0;
}
