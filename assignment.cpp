#include<bits/stdc++.h>
using namespace std;

struct node{
    string name;
    int age;
    node *next;
    node *prev;
    node(string s,int x){
        name = s;
        age = x;
        next = NULL;
        prev = NULL;
    }
};

void printlist(node *head){
    while(head!=NULL){
        cout<<head->name<<" "<<head->age<<" - ";
        head = head->next;
    }
    cout<<"NULL";

}



int main(){

    node *father = new node("DILEEP KUMAR",44);
    node *mother = new node("JYOTI",40);
    node *myself = new node("ADARSH",19);
    node *sister = new node("ARCHANA",17);
    node *brother = new node("ADITYA",16);
    node *brother2 = new node("AMAR",14);

    node *head = father ;

    father->prev=NULL;
    father->next=mother;
    mother->prev=father;
    mother->next=myself;
    myself->prev=mother;
    myself->next=sister;
    sister->prev=myself;

    sister->next=brother;
    brother->prev=sister;
    brother->next=brother2;
    brother2->prev=brother;
    brother2->next=NULL;


    printlist(head);






    return 0;
}