//
//  main.cpp
//  28. Implement strStr()
//
//  Created by chenyufeng on 10/4/16.
//  Copyright © 2016 chenyufeng. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int strStr(string haystack, string needle)
{
    long needleLength = needle.length();
    long haystackLength = haystack.length();
    for (long i = 0; i <= haystackLength - needleLength; i++)
    {
        string temp = haystack.substr(i,needleLength);
        if (temp == needle)
        {
            return (int)i;
        }
    }

    return -1;
}

int main(int argc, const char * argv[])
{
    int result = strStr("", "a");
    cout << result;
    return 0;
}
