//create a User class with properties : id(private), username(public), password(private) , email(public)
//its id should be initaillized in a parameterized constructor
//create getters and setters for password 

#include<iostream>
using namespace std;

class User {
    int id;
    string password;

public:
    string username;
    string email;

    User(int id){
        this->id = id;
    }

    //getter
    int getId(){
        return id;
    }

    //setter
    void setPassword(string password){
        this->password = password;
    }
    //getter
    string getPassword(){
        return password;
    }

};

int main(){
    User s1(123);
    s1.username = "john_doe";
    s1.email = "john_doe@example.com";
    s1.setPassword("mypassword");
    cout<< "Username: " << s1.username << endl;
    cout<< "Email: " << s1.email << endl;
    cout<< "User ID: " << s1.getId() << endl;
    cout<< "Password: " << s1.getPassword() << endl;
    return 0;
}