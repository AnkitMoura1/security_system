#include<iostream>
#include<string>
#include<sstream>
#include<fstream>

using namespace std;

struct user{
    string name;
    string password;
};

int main(){
    bool run = true;
    char response;
    user user1;
    string check_name, check_pass, n_pass, o_pass;



    

    do{
        // interface code
        cout<<endl<<endl;
        cout<<"|-------Security-System-------|"<<endl<<endl;
        cout<<"|||||||||||||||||||||||||||||||"<<endl<<endl;
        cout<<"|         1.Register          |"<<endl;
        cout<<"|         2.Login             |"<<endl;
        cout<<"|         3.Change Password   |"<<endl;
        cout<<"|         4.End Program       |"<<endl<<endl;
        cout<<"|||||||||||||||||||||||||||||||"<<endl;



        // logic code

        cout<<endl<<"_____________________"<<endl;
        cout<<"   Enter your choice: \n";
        cin>>response;
        switch (response)
        {
        case '1':
            cout<<"Enter Your Name: "<<endl;
            cin>>user1.name;
            cout<<"Create a Password: "<<endl;
            cin>>user1.password;
            cout<<"User Created sucessfully"<<endl;
            break;

        case '2':
            /* code */
            cout<<"Welcome To Login page: "<<endl;
            cout<<"Enter User Name: "<<endl;
            cin>>check_name;
            if (user1.name == check_name)
            {
                cout<<"Enter Password: "<<endl;
                cin>>check_pass;
                if(user1.password == check_pass){
                    cout<<"++++++++++++++++++++"<<endl;
                    cout<<"____________________"<<endl;
                    cout<<"     Welcome "<<user1.name<<endl;
                    cout<<"____________________"<<endl;
                    cout<<"++++++++++++++++++++"<<endl;
                    break;
                }
                cout<<":::::::Wrong Password:::::::"<<endl;
                break;
            }
            cout<<":::::User dosen't exist:::::"<<endl;
            break;

        case '3':
            cout<<"Enter User Name: "<<endl;
            cin>>check_name;
            if (user1.name == check_name)
            {
                cout<<"Enter Old Password: "<<endl;
                cin>>check_pass;
                if(user1.password == check_pass){
                    cout<<"++++++++++++++++++++"<<endl;
                    cout<<"Enter New Password: "<<endl;
                    cin>>n_pass;
                    cout<<"Re-Enter Password: "<<endl;
                    cin>>o_pass;
                    if (n_pass == o_pass){
                        user1.password = n_pass;
                        cout<<"~~~~~Passwordchanged~~~~~"<<endl;  cout<<"+++++++++++++++++++++++++"<<endl;
                        break;
                    }
                    cout<<"Password do not match: Try again!!!"<<endl;
                    break;
                }
                cout<<":::::::Wrong Password:::::::"<<endl;
                break;
            }
            cout<<":::::User dosen't exist:::::"<<endl;
            break;


        case '4':
            /* code */
            cout<<"*********************************"<<endl<<endl;
            cout<<"Thanks for using our program. >.<"<<endl<<endl;
            cout<<"*********************************"<<endl<<endl; 
            run= false;
            break;
        
        default:
            cout<<"PLease Enter a valid choice......"<<endl;
            break;
        }
    }while (run);
    

    return 0;
}