#include<iostream>
#include<list>
using std::string;
using std::list; 
using std::endl;
using std::cout;
//Inheritance lets us inherit attributes and methods from another class.
// Polymorphism uses those methods to perform different tasks. This allows us to perform a single action in different ways
// The class keyword is used to create a class 
class Youtube{
     // Base class
    // by default access modifier is private
    // public keyword is an access specifier
    // variables are declared within a class, they are called attributes.
     private:
     string Name; 
     int Subscriberscount;
     list<string> PublishVideoTitles;
     protected:
     string Ownername;
     int Likes;
     public:
     Youtube(string name,string ownerName){
          // this is the constructor of this class
          // They should be declared in the public section
          // They do not have any return type, not even void
          // They get automatically invoked when the objects are created
          // They cannot be inherited though derived class can call the base class constructor
          // Like other functions, they can have default arguments
          // You cannot refer to their address
          // Constructors cannot be virtual
          Name=name;
          Ownername=ownerName;
          Subscriberscount=0;
          Likes=0;

     }
     void getInfo(){
          // method of this class
          // Methods are functions that belongs to the class.
          cout<<"Name :"<<Name<<endl;
          cout<<"Ownername :"<<Ownername<<endl;
          cout<<"Subscriberscount :"<<Subscriberscount<<endl;
          cout<<"videos"<<endl;
          for(string videotitle:PublishVideoTitles){
               cout<<videotitle<<endl;
          }

     }
       void subscribe(){
       Subscriberscount++;
     }
     void unsubscribe(){
     if(Subscriberscount>0)
      Subscriberscount--;
     }
     void PublishVideo(string title){
           PublishVideoTitles.push_back(title);
     }
     void Check(){
         if(Likes<5)
         cout<<Ownername<<" has bad quality contents"<<endl;
         else
         cout<<Ownername<<" good contents"<<endl;
     }
};

class AnotherYoutube:public Youtube{
  public:
     AnotherYoutube(string name,string ownerName):Youtube(name,ownerName){

     }
     void sample(){
          cout<<Ownername<<" sample testing function"<<endl;
         Likes=4;
     }
//  Derived Class   
//     derived class from base class it inherit from Youtube class
// we can get all the data of above class(Youtube class)
   
};
class ProgrammingYoutubeChannel:public Youtube{
  public:
     ProgrammingYoutubeChannel(string name,string ownerName):Youtube(name,ownerName){

     }
     void sample(){
          cout<<Ownername<<" sample testing function"<<endl;
          Likes=400;
     }
//  Derived Class   
//     derived class from base class it inherit from Youtube class
// we can get all the data of above class(Youtube class)
   
};


int main(){

AnotherYoutube Ytchannel("youtubechanneltwo","admintwo"); //obj creation
ProgrammingYoutubeChannel Ytprogramming("programmingchannel","admindeveloper");//obj creation

Ytchannel.sample();
Ytprogramming.sample();

Youtube*yt1=&Ytchannel;//pointer of base class
Youtube*yt2=&Ytprogramming;//pointer of base class

yt1->Check();
yt2->Check();




 
 

   
  


    return 0;
}