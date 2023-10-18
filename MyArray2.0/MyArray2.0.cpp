#include <iostream>
#include <string>
#include <math.h>
#include <windows.h>
#include <locale.h>
#include <string.h>
#include <typeinfo>
#include <stdlib.h>
#include <stdio.h>
#include <algorithm>
//#include <cstdlib>
#include <ctype.h>

using namespace std;

class ArrayManager
{
private:
    int* _array;
    int _rows;

private:
    ArrayManager() {};
    ArrayManager(const int& Rows, const int& Value) {
        _rows = Rows;
        _array = new int[_rows];

        for (int i = 0; i < _rows; i++)
        {
            _array[i] = Value;
        }
    }

    void PrintArr(const int* Arr) {
        for (int i = 0; i < _rows; i++)
        {
            cout << Arr[i]<< endl;
            cout << endl;
        }
    }

    int& operator[](int Index) {
        return _array[Index];
    }

    int& operator()(int Value)
    {
        for (int i= 0; i < _rows; i++)
        {
            _array[i] += Value;
        }
    }

    operator int() const{
        int temp = 0;
        for (int i = 0; i < _rows; i++)
        {
            temp += _array[i];
        }
        return temp;
    }

    operator char*() {
        char* chars= new char[(sizeof(_array)/4)];
        for (int i = 0; i < _rows; i++)
        {
            chars[i] = static_cast<char>(_array[i]);
        }
        return chars;

    }

};


int main()
{

}
