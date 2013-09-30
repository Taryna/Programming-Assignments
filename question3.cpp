int main()
{
    int a;
        int prime=0;
        cout<<"Input an integer: ";
        cin>>a;
        if(a<0)
            cout<<"Invalid number.";
        if(a==0)
            cout<<"0 is not prime.";
        else if(a>0)
        {
            for(int i=2;i<a;i++)
            {
                if(a%i==0)
                {
                    cout<<a<<" is not prime."<<endl;
                    prime = 1;
                    break;
                }
            }
            if (prime ==0)
                cout<<a<<" is prime."<<endl;
        }

    return 0;
}
