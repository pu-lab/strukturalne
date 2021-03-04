#include <iostream>

using namespace std;

int main()
{
    int a, b, c, delta, x1, x2;
    cout<<"a= "<<endl;
    cin>>a;
    cout<<"b= "<<endl;
    cin>>b;
    cout<<"c= "<<endl;
    cin>>c;
    delta=b*b-(4*a*c);
    if(delta<0)
    {
        cout<<"delta mniejsza od zera";
    }
    if(delta==0)
    {
        x1=-b/(2*a);
        cout<<"rozwiazanie to: "<<x1<<endl;
    }
    if(delta>0)
    {
        x1=(-b*(-delta))/(2*a);
        x2=(-b*delta)/(2*a);
        cout<<"rozwiazania to: "<<x1<<" "<<x2<<endl;
    }
    return 0;
}
