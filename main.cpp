#include <iostream>
#include <deque>
#include <vector>
#include <forward_list>
#include <list>
#include <string>
#include <cstdlib>
#include "search.h"
#include "declare.h"
#include <fstream>

using namespace std;

//int Factorial(int n);
//int Power(int x, int n);
//int Sum(int n);

int Search(int *value, int low, int hingh, int key);

int comm(int n, int k);

int main()
{

//    cout << Factorial(5) << endl;

//    cout << Power(2, 4) << endl;

//    cout << Sum(5) << endl;

//    int value[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//    cout << Search(value, 0, 9, 3) << endl;

//    cout << BinSearch(value, 0, 9, 5) << endl;
//    cout << BinSearch(value, 0, 9, 100) << endl;

///模板函数折半搜索
//    string WordList[50];
//    ifstream fin;
//    string word;
//    int pos;
//    int i;
//
//    fin.open("vocba.dat");
//    i = 0;
//    while(fin >> WordList[i])
//        i++;
//
//    cout << "Enter a word" << endl;
//    cin >> word;
//
//    if((pos = BinSearch(WordList, 0, i, word)) != -1)
//        cout << word << " is in the list at index "
//             << pos <<endl;
//    else
//        cout << word << " is not in  the list" << endl;


///委员会问题
    cout << comm(5,2) << endl;
    return 0;
}


//递归求阶乘
int Factorial(int n)
{
    if(n == 0)
        return 1;
    else
        return n * Factorial(n - 1);
}

//递归求幂
int Power(int x, int n)
{
    if(n == 0)
    {
        if(x == 0)
        {
            cerr << "Power(0, o) is undefined" << endl;
            exit(1);
        }
        else
            return 1;
    }
    else
    {
        return x * Power(x, n - 1);
    }
}

//递归求和
int Sum(int n)
{
    if(n == 1)
        return 1;
    else
        return n + Sum(n - 1);
}


//递归二分搜索
int Search(int *value, int low, int high, int key)
{
    int mid;
    if(low <= high)
    {
        mid = (low + high) / 2;
        if(key == value[mid])
            return mid;
        else if(key < value[mid])
        {
            high = mid - 1;
            return Search(value, low, high, key);
        }
        else
        {
            low = mid + 1;
            return Search(value, low, high, key);
        }
    }
    else
        return -1;
}

//递归委员会问题
int comm(int n, int k)
{
    if(k > n)
        return 0;
    else if(n == k || k == 0)
        return 1;
    else
        return comm(n - 1, k) + comm(n - 1, k - 1);
}

////
//template <typename T>
//int BinSearch(T A[],int low, int high, T key)
//{
//    int mid;
//    if(low <= high)
//    {
//        mid = (low + high) / 2;
//        if(key == A[mid])
//            return mid;
//        else if(key < A[mid])
//        {
//            high = mid - 1;
//            return BinSearch(A, low, high, key);
//        }
//        else
//        {
//            low = mid + 1;
//            return BinSearch(A, low, high, key);
//        }
//    }
//    else
//        return -1;
//}
//
