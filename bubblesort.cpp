#include<iostream>
using namespace std;
void bubblesort (int a[],int n)
{
    int temp;
    for (int i = 0; i<n-1; i++)
    {
        for (int j = 0 ; j<n-1; j++)
        {
            if(a[j] > a[j+1]){
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}

int main() {
    int n;
    int a[10];
    cout << "Enter the size of the array: ";
    cin >> n;

    cout << " Enter " << n << " integers in any order: " << endl;
    for (int i = 0; i<n ; i++)
    {
        cin >> a[i];

    }
    bubblesort (a,n);
    cout << " Sorted array: ";
    for (int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    
    }
    cout << endl;

    return 0 ;

}


//Output:-
PS D:\Chaitanya162> g++ bubblesort.cpp                                            
PS D:\Chaitanya162> ./a.exe                                                       
Enter the size of the array: 5   
 Enter 5 integers in any order: 
21 52 62 94 31 
 Sorted array: 21 31 52 62 94 