#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
#include<windows.h>
#include<iomanip>
using namespace std;

int main(){
    system("Color 0B");
    int i;
    int hour, minute, sec;
    int inputHr, inputMin, inputSec;

    cout << "Enter hour:"<<endl;
    cin >> inputHr;
    if(inputHr >= 25){
        cout << "Invalid input!!\nHour in clock cannot be above 24 hrs unless your are in different planet."<<endl;
        return 0;
    }
    system("cls");//clear the entire screen.
    cout << "Enter minute:"<<endl;
    cin >> inputMin;
    if(inputMin >= 60){
        cout << "Invalid input!!\nHour in clock cannot be above 60 min unless your are in different planet."<<endl;
        return 0;
    }
    system("cls");

    cout << "Enter second:"<<endl;
    cin >> inputSec;
    if(inputSec >= 60){
        cout << "Invalid input!!\nSecond in clock cannot be above 60 sec unless your are in different planet."<<endl;
        return 0;
    }
    system("cls");

    cout << inputHr<<":"<<inputMin<<":"<<inputSec<<endl;
    system("cls");

    i = inputSec;
    int j = inputMin;

    while(1){
        inputSec++;
        if(inputSec > 59){
            inputMin++;
            inputSec = 00;
        }
        if(inputMin > 59){
            inputHr++;
            inputMin = 00;
        }
        if(inputHr > 24){
            inputSec++;
            inputHr = 00;
        }
        cout<< " ============"<<endl;
        cout<< " ||HH:MM:SS"<<"||"<<endl;
        cout <<" ||"<<inputHr<<":" << inputMin<<":"<< inputSec<<"||"<<endl;
        cout<< " ============"<<endl;
        Sleep(1000);
        system("cls");
    }

    return 0;
}
