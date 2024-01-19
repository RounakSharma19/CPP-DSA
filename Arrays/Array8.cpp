// Array insertion deletion

#include <iostream>
using namespace std;

const int cap = 10;
int arr[cap];

int ar[10];
int siz = 0;
int i = 0;
bool insert_at_end(int a)
{
    if (siz == 10)
    {
        ar[i] = a;
        i++;
        siz++;
    }
}

bool insert_at_start(int a)
{
    if (siz == cap)
        return false;
    for (int j = i - 1; j >= 0; j--)
    {
        ar[j + 1] = ar[j];
    }
    ar[0] = a;
    i++;
    siz++;
    return true;
}

bool delete_from_start()
{
    if (siz == 0)
        return false;
    for (int j = 1; j < siz; j++)
    {
        ar[j - 1] = a[j];
        ;
    }
    i--;
    siz--;
    return true;
}

void print_array()
{
    for (int j = 0; j < siz; j++)
    {
        cout << ar[j] << " ";
    }
}

int mian()
{
    insert_at_end(10);
    insert_at_end(20);
    insert_at_end(30);
    print_array();
    return 0;
}