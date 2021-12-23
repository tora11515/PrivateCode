//
//  main.cpp
//  Calculater
//
//  Created by 福居虎之介 on 12/22/21.
//
#include<map>
#include <iostream>
using namespace std;
double add(int a, int b)
{
    return a + b;
}
double diff(int a, int b)
{
    return a - b;
}
double multi(int a, int b)
{
    return a*b;
}
double division(int a, int b)
{
    return a / b;
}
double pow(int a, int b)
{
    int result = a;
    for(int i = 0; i < b; i++)
    result *= a;
    
    return result;
}

int main(int argc, const char * argv[]) {
    cout<<"Hello"<<endl;
    map<string,double(*)(int,int)> m;
    m["+"] = add;
    m["-"] = diff;
    m["*"] = multi;
    m["/"] = division;
    m["^"] = pow;
    int base;
    cin >> base;
    while(1>0)
    {
        string symb;
        int num;
        cin >> symb;
        if(symb == "=")break;
        else
        {
            cin >> num;
            base = m[symb](base,num);
        }
    }
    cout << base << endl;
    return base;
}

