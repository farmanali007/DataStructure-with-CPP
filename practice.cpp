#include<iostream>
using namespace std;
int main(){
    int numCourses = 7;
    int First_Digit = 2;
    int k = 1;
    
    cout<<"My Name is Farman Ali"<<endl<<endl;
    cout<<"My vu id is BC201400302"<<endl<<endl;
    cout<<"Courses list in current semester"<<endl;
    cout<<"1.Inrtoduction to Programming"<<endl;
    cout<<"2.Introduction to Programming Praticle"<<endl;
    cout<<"3.Data Communication"<<endl;
    cout<<"4.Business and Technical English Wrting"<<endl;
    cout<<"5.Islamic Studies"<<endl;
    cout<<"6.Linear Algebra"<<endl;
    cout<<"7.Physics"<<endl<<endl;
    cout<<"Total NO. of courses = "<<numCourses<<endl<<endl;
    cout<<"First digit of my VU Id = "<<First_Digit<<endl<<endl;
   int sum = numCourses + First_Digit;
    cout<<"sum of total no of courses and First_Digit of  VU id is = "<<sum<<endl<<endl;
    while (k<=sum)
    {
        cout<<k<<".Welcome CS201-Introduction to Programming"<<endl;
        k++;
    }
    

    return 0;
}