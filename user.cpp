#include <iostream>
#include <string>
#include <vector>

class User{
private:
  std::string username;
  std::string email;
  User* friends[100];
public:
  User(std::string username, std::string email){
    username = username;
    email = email;
    for(int i = 0; i < 100;i++){
      friends[i] = nullptr;
      }
  }

  std::string getUsername(){
    return username;
  }

  void setUsername(std::string username){
    username = username;
  }

  std::string getEmail(){
    return email;
  }

  void setEmail(std::string email){
    email = email;
  }
  
  int addFriend(User* u){
    for(int i = 0; i < 100; i++){
      if(friends[i] == nullptr){
	friends[i] = u;
	return 1;
      }
    }
    return 0;
  }

  int removeFriend(std::string username){
    for(int i = 0; i < 100; i++){
      if(friends[i] ->username == username){
	friends[i] = nullptr;
	return 1;
      }
    }
    return 0;
  }

  int numFriends(){
    int num = 0;
    for(int i = 0; i < 100; i++){
      if(friends[i] != nullptr){
	num++;
      }
    }
    return num;
  }

  User* getFriendAt(int i){
    if(friends[i] != nullptr){
      return friends[i];
    }
    return nullptr;
  }

};
