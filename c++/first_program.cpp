#include<iostream>
using namespace std;

int main()
{
    cout<<"_________welcome to the pubg hospital__________"<<endl;
    int i;
    cout<<"\n\nenter your age";
    cin>>i;
    cout<<"\nyour chosen age is"<<i<<endl;
    if(i>20)
    {
        cout<<"you are eligible for blood donation";
        cout<<"thank you so much";

    }
    else
    {
        cout<<"\nyou are not eligible";
        cout<<"\nthank you so much for giving your valuable time";
    }
    return 0;
}
