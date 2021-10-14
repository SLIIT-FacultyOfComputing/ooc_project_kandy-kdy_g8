#pragma once


class payment
{

	private:
	  int CardNo;
		int CVV;
		float TotalAmount;
		char CardExpDate[10];
    char PaymentMethod[20];
    

	public:
    //default constructor
    payment();

    //overloaded constructor
		payment(int cno ,int cvv_ ,double amount ,char cexpd[],char pm[]);
    
    //assign card number
    void set cardnumber(int cno);
    get cardnumber();

    //assign CVV number
    void setcvv(int cvv_);
    int getcvv();

    //assign amount
    void setamount(float amount);
    float getamount();

    //assign card expiration date
    void setcardexpirationdate(char cexpd[]);
    char getcardexpirationdate();

    //assign payment method
    set paymentmethod(char pm[]);
    get paymentmethod();

    //input payment details
    void input_payment();

    //generates invoice number
    void generateinvoice();

    //generate current day in (day-month-year) format
    void generatecurrentday();

    //checks the maximum value a card can exist (max = 2147483647)
    void checkcardnumberlength();

    //check card expiration date(cardexpirationdate>currentdate)
    void checkcardexpirationdate();

    //submit payment information
    void submit();

    //output necassary details
    void output_payment();

    //destructor
    ~ payment();

};

/*


cno -> card number
cvv_ -> CVV
amount -> TotalAmount
cespd -> CardExpDate
pm[] -> PaymentMethod[20]


*/