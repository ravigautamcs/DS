#include <iostream>
#include <ctime>

using namespace std;

int main() {
    //cout<<"Hello";
   //current date/time based on current system
   time_t now = time(0);
    cout<<now<<endl;

    tm *ltm=localtime(&now);
    cout<<ltm->tm_year<<endl;
    cout<<ltm->tm_mon<<endl;
    cout<<ltm->tm_mday<<endl;
    cout<<ltm->tm_hour<<endl;
    cout<<ltm->tm_min<<endl;
    cout<<ltm->tm_sec<<endl;

}