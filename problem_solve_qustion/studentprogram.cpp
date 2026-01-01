#include<iostream>
using namespace std;
class student{
    string name;
    int roll;
    int grade;
    public:
    void input(){
        cout<<"Enter the name :";
        cin>>name;
        cout<<"Enter the roll :";
        cin>>roll;
        cout<<"Enter the your number :";
        cin>>grade;
    }
    public:
    void display(){
        if(grade>=90){
            cout<<"Grade A+"<<endl;
        }
        else if(grade>=80 && grade<90){
            cout<<"Grade A"<<endl;
        }
        else if(grade>=70 && grade<80){
            cout<<"GradeB+"<<endl;
        }
        else if(grade>=60 && grade<70){
            cout<<"Grade B"<<endl;
        }
        else if(grade>=50 && grade<60){
            cout<<"Grade C"<<endl;
        }
        else{
            cout<<"Fail"<<endl;
        }
        
        
    }
};
int main(){
    int n;
    cout<<"Enter you want to students no.\n";
    cin>>n;
    student arr[n];
    for(int i=0;i<n;i++){
        int count=1;
        cout<<"(Enter student No."<<count+i++<<")"<<endl;
        arr[i].input();
        arr[i].display();
    }
}
