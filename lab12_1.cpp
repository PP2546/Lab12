#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;

int main (){
    cout << "Press Enter 3 times to reveal your future.";
    string G;
    srand(time(0));
    int x=rand()%9;
        if(x == 0){ 
        G = "A";
        }else if(x == 1){
        G = "B+";
        }else if(x == 2){
        G = "B";
        }else if(x == 3){
        G = "C+";
        }else if(x == 4){
        G = "C";
        }else if(x == 5){
        G = "D+";
        }else if(x == 6){
        G = "D";
        }else if(x == 7){
        G = "F";
        }else{
        G = "W";
        }
    cin.get();
    cin.get();
    cin.get();
    cout << "You will get " << G << " in this 261102.";
    return 0;
}




