class User
{
  protected:
    char email[35];
    char fName[25];
    char lName[25];
    char address[60];
    char password[15];
    char sKey[15];
    
  public:
    User();//constructior
    User(char uemail[], char ufName[], char ulName[], char uaddress[], char upassword[], char usKey[]);//overloaded constructior for registration.
    void setemail(char uemail[]);//setter for email
    int getemail();//getter for email
    void setfName(char ufName[]);//setter for first name 
    int getfName();//getter for first name
    void setlName(char ulName[]);//setter for last name
    int getlName();//getter for last name
    void setaddress(char uaddress[]);//setter for address
    int getaddress();//getter for address
    void setpassword(upassword[]);//setter for password
    int getpassword();//getter for password
    void setsKey(char usKey[]);//setter for security sKey
    int getsKey();//getter for security key


    ~User();//destructor called for registered user
}