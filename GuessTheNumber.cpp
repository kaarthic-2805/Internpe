#include <iostream>

using namespace std;

int main()
{
    cout<<"******************* GUESS THE NUMBER *******************";
    cout<<endl;
    cout<<endl;
    cout<<endl;
    int comp_num;
    int user_choice;
    int count_nums = 1;
    cout<<"Enter computer number: ";
    cin>>comp_num;
    while(true){
        cout<<endl;
        cout<<"Enter a number : ";
        cin>>user_choice;
        if(comp_num == user_choice){
            cout<<"Congratulations !! You have guessed the correct number in "<<count_nums<<" guesses"<<endl;
            cout<<endl;
            break;
        }
        if(comp_num > user_choice){
            count_nums += 1;
            cout<<"Your guessed number is smaller"<<endl;
            cout<<endl;
        }
        if(comp_num < user_choice){
            count_nums += 1;
            cout<<"Your guessed number is larger"<<endl;
            cout<<endl;
        }

    }

    return 0;
}
