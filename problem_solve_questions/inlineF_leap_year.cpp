// Help her solve code Create an inline function isLeapYear() to check if 
// a given year is leap year. Input format :- the input consists of the year as an integer. 
// Output :- display whether the given year is leap year or not


#include<iostream>
using namespace std;

inline int isLeapYear(int year){
 if((year % 400 == 0) || (year % 4 == 0 && year != 100)){
    cout<<year<<" is leap year";
 }
 else{
    cout<<year<<" is Not leap year";
 }
}

int main(){
    int year;
    cin>>year;

   isLeapYear(year);
   
}