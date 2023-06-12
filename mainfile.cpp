#include <iostream>
#include <algorithm>
using namespace std;
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
            // gpacalc();
            break;
        case 2:
            // cgpacalc();
        case 3:
            exit(0);
        default:
            cout<<"You have entered an invalid option please re-enter\n"<<endl;
            break;
        }
    }
}