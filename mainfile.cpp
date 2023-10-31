#include <iostream>
#include <numeric>
#include <string>
using namespace std;
void gpacalc(){
    int courseno;
    cout<<"Please enter the number of courses: ";
    cin>>courseno;
    double gpa;
    int credits[courseno];
    string grade[courseno];
    int gradeno[courseno];
    int sumprod = 0;
    int prod;
    for (int i = 0; i < courseno; i++)
    {
        int cr = 0;
        string gr ;
        cout<<"Please enter the number of credits of course "<<i+1<<": ";
        cin>>cr;
        cout<<"Please enter the grade of course "<<i+1<<": ";
        cin>>gr;
        credits[i] = cr;
        grade[i] = gr;

    }
    for(int i = 0; i<courseno; i++){
        string x = grade[i];
        if (x == "A")
        {
            gradeno[i] = 4;
        }
        else if (x == "B")
        {
            gradeno[i] = 3;
        }
        else if (x == "C")
        {
            gradeno[i] = 2;
        }
        else if (x == "D")
        {
            gradeno[i] = 1;
        }
        else if (x == "F")
        {
            gradeno[i] = 0;
        }
        else{
            cout<<"You've probably entered an invalid grade... Exiting program"<<endl;
            exit(1);
        }
    }
    int creditsum = accumulate(credits,credits+courseno,0);
    
    for (int i = 0; i < courseno; i++)
    {
        prod = gradeno[i]*credits[i];
        sumprod = prod + sumprod;
        gpa = double(sumprod)/double(creditsum);
    }
    cout<<"Your GPA for this semester is "<<gpa<<endl;
    
}
void cgpacalc(){
    double semno;
    double gpasum = 0;
    double gpa;
    cout<<"Please enter the number of semesters: ";
    cin>>semno;
    cout<<endl;
    for (int i = 1; i < semno+1; i++)
    {
        cout<<"Enter the GPA of Sem "<<i<<endl;
        cin>>gpa;
        gpasum += gpa;
    }
    cout<<"Your CGPA till now is: "<<(gpasum/semno)<<endl;
    
}
int main(){
    while (true){
        int choicevar;
        cout<<"Please choose one of the following options from the menu"<<endl;
        cout<<"1. GPA calculator"<<endl;
        cout<<"2. CGPA calculator"<<endl;
        cout<<"3. Exit programme\n"<<endl;
        cout<<"Please enter number corresponding to choice: ";
        cin>>choicevar;
        switch (choicevar)
        {
        case 1:
            gpacalc();
            break;
        case 2:
            cgpacalc();
        case 3:
            exit(0);
        default:
            cout<<"Invalid option!\n"<<endl;
            break;
        }
    }
}