class Cart
{

private:
	char CartID[6];
	int quantity;

public:
	Cart(char CID[], int qty);//Overloaded constructor
	void setdetails(char cart[], int Qty);//Setter
	int getqty();//Getters
	char getid();//Getters
  void editCart();
	void deleteCart();
	float Calctotalprice();
	~Cart();//Destructor
};
