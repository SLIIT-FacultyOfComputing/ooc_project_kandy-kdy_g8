#pragmaonce
class Feedback
{

private :
  char FeedbackID[6];
  char feedbacktype[10];
  char feedbackcontent[500];

public:
  Feedback(char FeedbackID[],char feedbacktype[] ,char feedbackcontent[]);//Overloaded constructor
  void setdetails(char FeedbackID[],char feedbacktype[] ,char feedbackcontent[]);
  char getid();
  char getfeedbacktype();
  char getfeedbackcontent();
  ~Feedback();//Destructor

}