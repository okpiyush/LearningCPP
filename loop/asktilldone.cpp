#include<iostream>
using namespace std;
int main(){
    char button;
    bool booly=true;
  while(booly){
      cin>>button;
      switch(button){
          case 'a':
              cout<<"hello"<<endl;
              break;
          case 'b':
              cout<<"ciao"<<endl;
              break;
          case 'c':
              cout<<"hola"<<endl;
              break;
          case 'd':
              cout<<"namaste"<<endl;
              break;
          case 'e':
              cout<<"ki haal"<<endl;
              break;
          default:
              cout<<"I am still Learning More!"<<endl;
              booly= false;
              break;
      }
  }

}