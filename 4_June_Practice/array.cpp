#include<iostream>
using namespace std;
int main()
{

int m,n;
cout<<"Enter row : ";
cin>>m;
cout<<"Enter column ";
cin>>n;
int a[n][m];
int b[n][m];
cout<<"array  row 1\n";
for (int i = 1; i <=m; i++)
{
for (int j = 1; j <=n; j++)
{
    cin>>a[i][j];
}
}
cout<<"array  row 2\n";
for (int i = 1; i <=m; i++)
{
for (int j = 1; j <=n; j++)
{
    cin>>b[i][j];
}
}

cout<<"Store arra\n ";

for (int i = 1; i <=m; i++)
{
for (int j = 1; j <=n; j++)
{
    cout<<a[i][j]<<"\t";
}
cout<<"\n";
}
cout<<"Store arra 2\n ";

for (int i = 1; i <=m; i++)
{
for (int j = 1; j <=n; j++)
{
    cout<<b[i][j]<<"\t";
}
cout<<"\n";
}
cout<<"sum \n ";

for (int i = 1; i <=m; i++)
{
for (int j = 1; j <=n; j++)
{
    cout<<a[i][j]+b[i][j]<<"\t";
}
cout<<"\n";
}



}