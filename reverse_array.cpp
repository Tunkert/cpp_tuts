/*
 * Author: Timothy Unkert
 * Purpose: Demo reversing an array in C++
 * Copyright 2022
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int j = 1;
    vector< string > empty_arr;
    string letter_arr[5] = {"a", "b", "c", "d", "e"};
    for (int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            empty_arr.push_back(letter_arr[4 - j]);
        }
    }
    for(int k = 0; k < 5; k++)
    {
        cout << empty_arr[k];
    }
    cout << "." << endl;
    return 0;
}

