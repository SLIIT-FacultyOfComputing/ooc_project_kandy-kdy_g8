#include "user.h"
#include "product.h"
class admin : public User
{
  protected:
    int adminID;

    Product* Products;//create product
  public:
    admin();//constructior
    admin(char uemail[], char ufName[], char ulName[], char uaddress[], char upassword[], char usKey[]);//overloaded constructior for registration.
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

    void Products(int prodID, char pName[], char pCategory[], double pPrice, int pStock);
    void viewProducts();//gives admin access to view products
    void addProducts();//gives admin access to add new products to the website
    void updateProducts();//gives admin access to update product details and/or stock
    void deleteProducts();//gives admin access to delete products

    ~admin()
    {
      delete Products;//destructs products object
    }
}
