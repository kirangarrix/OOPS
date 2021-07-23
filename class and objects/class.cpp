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
};


int main(){

 Youtube ytchannel; // Create an object of Youtube
 // Access attributes and set values
 ytchannel.Name="yourchannelname";
 ytchannel.Ownername="admin name";
 ytchannel.Subscriberscount=1000;
 ytchannel.PublishVideoTitles={"c++ oops","Html and css","c++ for beginner"};


 cout<<"Name :"<<ytchannel.Name<<endl;
 cout<<"Ownername :"<<ytchannel.Ownername<<endl;
 cout<<"Subscriberscount :"<<ytchannel.Subscriberscount<<endl;
 cout<<"videos"<<endl;
 for(string videoTitles : ytchannel.PublishVideoTitles){
     cout<<videoTitles<<endl;
 }


   
  


    return 0;
}