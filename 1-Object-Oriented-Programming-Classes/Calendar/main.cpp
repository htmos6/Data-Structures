#include <iostream>
using namespace std;

class Date{
  private:
    int day;
    int month;
    int year;
  public:
    Date(int d, int m, int y);
    void PrintDate() const;
    void SetDate(int d, int m, int y);
    void JumpYear(int yr) const;
};

Date::Date(int d, int m, int y) {
  day= d;
  month = m;
  year = y;
};
void Date::PrintDate() const{
  cout <<day<<"\\"<<month<<"\\"<<year<<endl;
};
void Date::SetDate(int d, int m, int y) {
  day = d;
  month = m;
  year = y;
};
void Date::JumpYear(int yr) const{
  cout <<"Jumped Year: "<< year + yr << endl;
}


int main() {
  Date today(6,10,2022);
  Date tomorrow(7,10,2022);

  cout << "Let's use the Date class !" << endl;

  today.PrintDate();
  tomorrow.PrintDate();

  today.SetDate(4,12,2024);
  today.PrintDate();

  today.JumpYear(5);
  return 0;
}
