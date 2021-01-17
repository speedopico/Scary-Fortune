#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

int main(){
    
    char answer;
    int numchoice = 0;
    
    cout << "Good evening. I am the cloudy and mysterious crystal ball.\n";
    chrono::milliseconds dura( 2000 );
    this_thread::sleep_for( dura );
    cout << "\n";
    cout << "... so mysterious ...\n";
    this_thread::sleep_for( dura );
    cout << "\n";
    cout << "... like really really mysterious ...\n";
    this_thread::sleep_for( dura * 1.5);
    cout << "\n";
    
    do {
    cout << "Would you like to know your fortune ...?\n" << "Press y or n.\n";
    cin >> answer;
    
    if(answer == 'n'){
        cout << "Sucks to be you then.\n";
        }
    else{
        cout << "Yes? Delicious ... Please pick a number from 1 to 6.\n";
        cin >> numchoice;}
        if(numchoice == 1){
            cout << "You are in terrible danger. For real, terrible danger. Something fucking bad is headed for you my friend.\n";
            chrono::milliseconds dura( 3000 );
            this_thread::sleep_for( dura );
            cout << "... I'm kinda getting scared now too. Yo back-up. Back AWAY from me.\n";
            this_thread::sleep_for( dura );
            cout << "... Omg ...\n";
            this_thread::sleep_for( dura / 2);
            cout << "Dude, get AWAY from me.\n";
            this_thread::sleep_for( dura / 4);
            cout << "Get";
            this_thread::sleep_for( dura / 10);
            cout << ".";
            this_thread::sleep_for( dura / 10);
            cout << ".";
            this_thread::sleep_for( dura / 10);
            cout << ".";
            this_thread::sleep_for( dura / 4);
            cout << " Away";
            this_thread::sleep_for( dura / 10);
            cout << ".";
            this_thread::sleep_for( dura / 10);
            cout << ".";
            this_thread::sleep_for( dura / 10);
            cout << ".";
            this_thread::sleep_for( dura / 4 );
            cout << "AHHHHHHHH!!!";
        }
            else if(numchoice == 2){
                cout << "Someday, many years from today, you will look back at this moment and realize how much time you wasted making stupid jokes on C++.\n";
            }else if(numchoice == 3){
                cout << "Shit, drop everything and head to the doctor dude. They'll know what to do. It might not be too late.";
                this_thread::sleep_for( dura * 2);
                cout << "... You might have time.\n";
            }else if(numchoice == 4){
                cout << "Today everyone will laugh at your jokes so don't hold back!\n";
            }else if(numchoice == 5){
                this_thread::sleep_for( dura );
                cout << "I'd ask you to sit down, but you're not going to anyway. And don't worry about the vase.\n";
                this_thread::sleep_for( dura * 2);
                cout << "\n";
                cout << "What vase? [Neo knocks over a vase with his elbow. It falls down and breaks.]\n";
                this_thread::sleep_for( dura * 1.5);
                cout << "\n";
                cout << "That vase.\n";
                this_thread::sleep_for( dura );
                cout << "\n";
                cout << "I'm sorry.\n";
                this_thread::sleep_for( dura );
                cout << "\n";
                cout << "I said don't worry about it. I'll get one of my kids to fix it.\n";
                this_thread::sleep_for( dura * 1.5);
                cout << "\n";
                cout << "How did you know?\n";
                this_thread::sleep_for( dura );
                cout << "\n";
                cout << "Ohhh, what's really going to bake your noodle later on is, would you still have broken it if I hadn't said anything?... You're cuter than I thought. I can see why she likes you.\n";
                this_thread::sleep_for( dura * 2.5);
                cout << "\n";
                cout << "Who.\n";
                this_thread::sleep_for( dura * 1.5);
                cout << "\n";
                cout << "Not too bright though.\n";
            }else if(numchoice == 6){
                cout << "Get up and get out of your freakin chair MAN.\n";
                this_thread::sleep_for( dura );
                cout << "Go DO something.\n";
                this_thread::sleep_for( dura * 1.5);
                cout << "Go spread your creativity, your love!\n";
                this_thread::sleep_for( dura );
                cout << "You are super cool and you should spread your super awesomeness all over the place.\n";
                this_thread::sleep_for( dura * 2 );
                cout << "Go angel, go be a SUPER spreader.\n";
                this_thread::sleep_for( dura );
            }
        cout << "\n";
        chrono::milliseconds dura( 2000 );
        this_thread::sleep_for( dura );
    }
        while (numchoice < 6 && answer != 'n');
    }
