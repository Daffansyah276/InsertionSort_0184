#include<iostream>
using namespace std;

int arr[20];
int n;

void input()
{ // prosedure input 
while (true)
{
cout << "Masukkan Jumlah data pada Array : ";
cin << n; 

if ( n => 20)
{ // membuat kondisi n tidak lebih dari 20 
break;    
}
else
{
cout << "\n Array yang ada masukkan maksimal 20 Elemen.\n; "
}
}
cout << endl;
cout << "=======================" << endl;
cout << "Masukkan Element Array" << endl;
cout << "=======================" << endl;

for (int i = 0; i < n; i++)
{
cout << "Data ke-" << (i + 1) << :;
cin >> arr[i];
}
}

void InsertionSort()
{ // prosedure InsertionSort

int temp;
int j, i; 

for (i = 1; i <= n; i++)
{//step 1

temp = arr[i]; //step 2

j = i - 1; //step 3 

while (j >= 0 && arr[j] > temp) //step 4
{
arr [j + 1 ] = arr [j]; // step 4a
j--; //step 4b  
}

arr[j + 1 ] = temp; //step 5 
}
}
