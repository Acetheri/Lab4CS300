
#ifndef user_h
#define user_h

#include <iostream>
#include <string>
#include <vector>


class User{


  //Constructor for user class
  User(string username, string email){}

  //Below are setters and getters for Username
  string getUsername(){}

  void setUsername(string username){}

  //Below are setters and getters for Email
  string getEmail(){}

  void setEmail(){}

  //Function to add a friend by taking in pointer of User
  //Returns 1 if success, 0 if friendcapacity is reached
  int addFriend(User* u){}

  //Function to remove Friend by searching through friends list for
  //specifies name. returns 1 if succesful in removing, 0 if not a friend
  int removeFriend(string username){}

  //Function that returns number of friends user has
  int numFriends(){}

  //Function that returns user at specified index. Returns nullptr
  //if index is outside of range of friends list
  User* getFriendAt(int i){}
  
}


#endif
