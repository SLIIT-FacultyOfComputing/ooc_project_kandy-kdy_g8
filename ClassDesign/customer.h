#include "Cart.h"
#inlcude "Feedback.h"
#include "User.h"
#include "Product.h"
class customer : public User
{
  protected:
    int customerID;
    
    Cart* Carts;//when a new user is registered, a new cart is assigned for the user.
    Feedback* Feedback1;//when new user is registered, they are assigned with a feedback id.
  public:
    customer();//constructior
    customer(char uemail[], char ufName[], char ulName[], char uaddress[], char upassword[], char usKey[]);//overloaded constructior for registration.
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

    void viewProducts(char pName[]);//allows user to view available products
    void viewFeedback(char Feedbacktype[], char Feedbackcontent[]);//allows user to view feedback 
    void addtoCart(char cartid[], int Qty);//allows user to add items to their cart
    void addFeedback();//allows user to submit feedback about the website

    ~customer()
    {
        delete Carts;//destructs cart object
        delete Feedback1;//destructs feedback object
    }
}