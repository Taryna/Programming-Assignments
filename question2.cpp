int main()
{
    double aa;
    double total = 0;
    cout << "How many numbers? ";
    int a;
    cin>>a;
    if (a<=0)
       cout << "Invalid.";

    if (a>0)
    {


    for (int i=1; i<a+1; i++)
    {
        cout << "Enter #"<<i<<": ";
        cin>>aa;
        total = total +aa;

    }
    }

cout<<"The sum is "<<total<<endl;

    return 0;
}
