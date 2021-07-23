#include<iostream>
#include<list>
using std::string;
using std::list; 
using std::endl;
using std::cout;

// The class keyword is used to create a class 
class Youtube{
    // by default access modifier is private
    // public keyword is an access specifier
    // variables are declared within a class, they are called attributes.
     public:
     string Name;
     string Ownername;
     int Subscriberscount;
     list<string> PublishVideoTitles;

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
       ~Youtube(){
          //  destructors are used to destroy the objects that have been created by the constructor
          //  It is a good practice to declare the destructor after the end of using constructor
            cout<<"Destructor Invoked"<<endl;  

       }
};


int main(){

 Youtube ytchannel("youtubename","adminname"); // Create an object of Youtube class
 ytchannel.PublishVideoTitles.push_back("C++ for beginner");
 ytchannel.PublishVideoTitles.push_back("Html and Css");
 ytchannel.PublishVideoTitles.push_back("react basics");
 ytchannel.getInfo(); //method invoking



 
 

   
  


    return 0;
}