using namespace std;

//Write a function to test whether a given number is odd or even.

void OddEven(int n)
    {
        if(n%2==0)
            cout <<"The number is even."<<endl;
        else if (n%2==1)
            cout <<"The number is odd."<<endl;
    }

int main()
{
    int n;
    cout<<"Enter an integer: ";
        cin>>n;
        OddEven(n);
}
