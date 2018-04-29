#include <iostream>



using namespace std;



class CircularInt {

    

    int start, end;

    int curHour;

    

    public:

    

    CircularInt(int start, int end);

    CircularInt(int start, int end, int curHour);

    

    int getStart();

    int getEnd();

    int getCurHour();

    void getInRange();

    void setCurHour(int hour);

    

    friend ostream& operator<<(ostream& os, const CircularInt& circ);  //CircularInt to cout

    friend istream& operator>>(istream& is, CircularInt& circ);  //CircularInt to cout

    

    CircularInt& operator+= (double add);

    CircularInt& operator+= (CircularInt& circ);

    CircularInt& operator++ ();

    CircularInt operator++ (int);

    double operator+ (CircularInt& circ);

    double operator+ (double a);

    

    CircularInt& operator-= (double sub);

    CircularInt& operator-= (CircularInt& circ);

    CircularInt& operator-- ();

    CircularInt operator-- (int);

    double operator- ();

    double operator- (CircularInt& circ);

    double operator- (double a);

    

    CircularInt& operator*= (double mult);

    CircularInt& operator*= (CircularInt& circ);

    double operator* (CircularInt& circ);

    double operator* (double mult);

    

    CircularInt& operator/= (int divi);

    double operator/ (int divi);

    double operator/ (CircularInt& circ);

    

    CircularInt& operator= (CircularInt& circ);

    CircularInt& operator= (double hour);

    bool operator== (CircularInt& circ);

    bool operator== (double a);

    

    double operator% (CircularInt& circ);

    double operator% (int a);

    CircularInt& operator%= (CircularInt& circ);

    CircularInt& operator%= (int a);

    

    bool operator!= (CircularInt& circ);

    bool operator!= (double a);

    bool operator! ();

    

    bool operator> (CircularInt& circ);

    bool operator> (double a);

    bool operator>= (CircularInt& circ);

    bool operator>= (double a);

    bool operator< (CircularInt& circ);

    bool operator< (double a);

    bool operator<= (CircularInt& circ);

    bool operator<= (double a);

    

    bool operator&& (CircularInt& circ);

    bool operator&& (double a);

    

    bool operator|| (CircularInt& circ);

    bool operator|| (double a);

    

    int operator~ ();

    

    int operator& (CircularInt& circ);

    int operator& (int a);

    CircularInt& operator&= (CircularInt& circ);

    CircularInt& operator&= (int a);

    

    int operator| (CircularInt& circ);

    int operator| (int a);

    CircularInt& operator|= (CircularInt& circ);

    CircularInt& operator|= (int a);

    

    int operator^ (CircularInt& circ);

    int operator^ (int a);

    CircularInt& operator^= (CircularInt& circ);

    CircularInt& operator^= (int a);

    

    int operator<< (CircularInt& circ);

    int operator<< (int shift);

    CircularInt& operator<<= (CircularInt& circ);

    CircularInt& operator<<= (int a);

    

    int operator>> (CircularInt& circ);

    int operator>> (int shift);

    CircularInt& operator>>= (CircularInt& circ);

    CircularInt& operator>>= (int a);

};



int getToRange(double a, CircularInt& circ);



double operator- (double base, CircularInt& circ);

double operator+ (double base, CircularInt& circ);

double operator* (double base, CircularInt& circ);

int operator/ (int base, CircularInt& circ);

int operator% (int base, CircularInt& circ);

bool operator> (double base, CircularInt& circ);

bool operator< (double base, CircularInt& circ);

bool operator>= (double base, CircularInt& circ);

bool operator<= (double base, CircularInt& circ);

bool operator== (double base, CircularInt& circ);

bool operator!= (double base, CircularInt& circ);