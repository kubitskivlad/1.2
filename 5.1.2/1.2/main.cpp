//
//  main.cpp
//  1.2
//
//  Created by Kubitski Vlad on 20.10.15.
//  Copyright (c) 2015 Kubitski Vlad. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;
bool staca(char str[]);
int main()
{
    char  str[15] = "{(){()}}";
    bool a = staca(str);
    if (a == true)
    {
        cout<<" ok"<<endl;
    }
    else
    {
        cout<<"ne ok"<<endl;
    }
}
bool staca(char str[])
{
    stack <char> b;
    bool d = true;
    for (int i = 0; i < strlen(str); i++)
    {
        if ((str[i] == '(') || (str[i] == '{') || (str[i] == '['))
        {
            b.push(str[i]);
        }
        if (str[i] == ')')
        {
            if (b.top() == '(')
            {
                b.pop();
            }
            else
            {
                b.push(str[i]);
            }
        }
        if (str[i] == ']')
        {
            if (b.top() == '[')
            {
                b.pop();
            }
            else
            {
                b.push(str[i]);
            }
        }
        if (str[i] == '}')
        {
            if (b.top() == '{')
            {
                b.pop();
            }
            else
            {
                b.push(str[i]);
            }
        }
    }
    if (b.size() == 0)
    {
        d = true;
    }
    else
    {
        d = false;
    }
    return d;
}