#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
int i;
int j=2;
int N;
int t=1;
int l;
int liczba;
srand(time(NULL));
cout<<"Podaj ilosc elementow tablicy:";
cin>>N;
int a[N];
for(i=0;i<N;i++)
{
    cout<<"a["<<i+1<<"]: ";
    a[i]=rand()%100;
    cout<<a[i]<<endl;
}
for (i=0; i<N-1;i++)
{
    if (a[i]>a[i+1])
    {
        cout<<"["<<a[i]<<","<<a[i+1]<<"], ";
        liczba++;
        do
        {
            if (i+j<N-1 || i+j==N-1)
            {
                if (a[i]>a[i+j]&& a[i+j-1]>a[j+i])
                {
                liczba++;
                for (l=i; l<j+i+1; l++)
                    {
                        if (l==i)
                        {
                            cout<<"[";
                        }
                        cout<<a[l]<<",";
                        if (l==j+i)
                        {
                            cout<<"], ";
                        }
                    }
                        if (i+j==N-1 )
                        {
                            t=-1;
                        }
                }
                else
                {
                    t=-1;
                }
            }
            else
            {
                break;
            }
        j++;
        }while (t>0);
        j=2;
        t=1;

    }
}
cout<<endl<<"Liczba wszystkich podciagow malejacych to: "<<liczba;
return 0;
}

