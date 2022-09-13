// lab1_Timoshenkov.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Pipe
{
public:
    string name;
    int diametr;
    bool status;
    int i=1;
    
    void setPipe(string w_name,int w_diametr,bool w_status)
    {
        name = w_name;
        diametr = w_diametr;
        status = w_status;
        i++;
    }
    void getPipe()
    {   
        int j = 0;
        do {           
            cout << "Name " << name << " Diametr " << diametr << " Status " << status<<"\n";
            j++;
        } while (i != j);
    }
};

int main()
{   
    int a = 8;    
    string Pipe_name;
    int diametr_Pipe;
    bool status_Pipe;
    Pipe PipeObj;
    while (true && a!=0) {
        system("cls");
        cout << "choose\n";
        cin >> a;
        
        switch (a) {
        
        case 1:
            system("cls");
            
            cout << "Adding Pipe\n"; 
                cin >> Pipe_name >> diametr_Pipe >> status_Pipe;
                PipeObj.setPipe(Pipe_name, diametr_Pipe, status_Pipe);           
            break;
             
        case 2:
            system("cls");

            break;
        case 3:
            system("cls");
            cout << "All Info_Pipe\n";
            PipeObj.getPipe();
            cin >> a;
            break;
        case 4:
            system("cls");


            break;
        }
       
        
    }
    
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
