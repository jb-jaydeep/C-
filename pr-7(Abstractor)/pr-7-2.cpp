/*  Create hybrid inheritance and remove ambiguity permanently.  */

#include<iostream>
using namespace std;

class A {

    int a;

    public :

      virtual  void setA() {

            cout << "Enter A : ";
            cin  >> a;
        }

        virtual void getA() {

            cout << endl << " A : " << a << endl;
        }
};

class B : virtual public A {

    int b;

    public :

       virtual void setB() {

            cout << "Enter B : ";
            cin  >> b;
        }

       virtual void getB() {

            cout << endl << " B : " << b << endl;
        }
};

class C : virtual public A {

    int c;

    public :

       virtual void setC() {

            cout << "Enter C : ";
            cin  >> c;
        }

        virtual void getC() {

            cout << endl << " C : " << c << endl;
        }
};

class D : public B , public C {

    int d;

    public :

       virtual void setD() {

            cout << "Enter D : ";
            cin  >> d;
        }

        virtual void getD() {

            cout << endl << " D : " << d << endl;
            Cout << "Sum : " << a+b+c+d << endl;
        }
};

int main() {

    D d1;

    d1.setA();
    d1.setB();
    d1.setC();
    d1.setD();

    d1.getA();
    d1.getB();
    d1.getC();
    d1.getD();

}
