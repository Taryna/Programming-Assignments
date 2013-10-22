using namespace std;

//Write a function to compute the factorial of a number.

void factorial(int a)
{
    int ans=1;
    if (a<0)
        cout<<"Invalid number."<<endl;
    else if(a==0)
        cout<<"The factorial of 0 is 1."<<endl;
    else
    {
        for(int i=a;i>0;i--)
        {
            ans=i*ans;
        }
        cout<<"The factorial of "<<a<<" is "<<ans<<endl;
    }
}


int main()
{
    int a;
    cout<<"Enter an integer: ";
        cin>>a;
        factorial(a);
}
