
# include <iostream>
# include <iomanip>

using namespace std;
const int SENT = -1;

int main ()
{
    int grade; 
    float total;
    total = 0;
    int count = 0;
    int highgrade = 0;
    int lowgrade = 1000;
    cout << "Enter a grade or -1 to quit" << endl;
    cin >> grade;
    
    while (grade != SENT)
    {       
          
    if ( grade > highgrade)
    {
    highgrade = grade ;
}
    if ( grade < lowgrade)
    {
    lowgrade = grade ;
}

          total = total + grade;
          cout << "Enter a grade or -1 to quit \n";
          cin >> grade;
          count++;
       }   
cout << setiosflags(ios::showpoint) << setprecision(4) << setw(6);
cout <<"\nThe MAXIMUM is: "<< highgrade;
cout <<"\nThe MINIMUM is: "<< lowgrade;
cout << endl;
cout <<"Average is: "<<  total/count <<endl;

system("pause");
return 0;
}
        
    
    
    
