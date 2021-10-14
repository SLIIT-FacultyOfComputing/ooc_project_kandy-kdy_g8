class product
{
  private:
    int productID;
    char name[100];
    char category[100];
    double price;
    int stock;

  public:
    product(); //default constructor
    product( int prodID, char pname[], char pcategory[], double pPrice, int pstock ); //overload constructor
    void setproductdetails( int pID, char pName[], char pCategory[], double pprice, int pStock);//setter
    int getID();//getters
    int getName();
    int getCategory();
    double getPrice();
    int getStock();
    ~product();//destructor
}
