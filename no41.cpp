#include<string>
#include<iostream>

using namespace std;

class Person{
    string name;
    int age;
    float height;
public:
    Person(){}
    Person(string name,int age,float height){
        this->name = name;
        this->age = age;
        this->height = height;
    }
    virtual void printDetails(){
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"Height : "<<height<<endl;
    }
    string getName(){ return name; }
    int getAge(){ return age; };
    float getHeight(){ return height; }
};
class Student: public Person {
    int roll;
    int yearOfAdmission;
public:
    Student(){}
    Student(int roll,int yearOfAdmission){
        this->roll = roll;
        this->yearOfAdmission = yearOfAdmission;
    }
    void printDetails(){
        cout << "Roll : "<<roll<<endl;
        cout<< "year of admission : "<<yearOfAdmission<<endl;
    }
    int getRoll(){ return roll; }
    int getYearOfAdmission(){ return yearOfAdmission; }
};
int main(){
    Person person("Ujjal Panua",20,6.1);
    person.printDetails();
    Student student(34,2017);
    student.printDetails();
    
    Person *ptr[4];
    Person p1("Arnab Das",21,5.8);
    Person p2("Sumant Kumar",23,5.1);
    Student s1(35,2017);
    Student s2(66,2015);

    ptr[0] = &p1;
    ptr[1] = &s1;
    ptr[2] = &p2;
    ptr[3] = &s2;

    for(int i =0;i<4;i++)
        ptr[i]->printDetails();
//    system("pause");
    return 0;
}

