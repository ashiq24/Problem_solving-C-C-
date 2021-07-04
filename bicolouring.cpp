#include <iostream>
using namespace std;
class coord {
int x, y;
public:
coord(int i = 0, int j = 0) { x = i; y = j;}
void getxy(int &i, int &j) { i = x; j = y;}
coord operator + (coord ob2);
coord operator + (int i);
coord operator ++ ();
bool operator == (coord ob2);
coord operator = (coord ob2);
};
bool coord:: operator == (coord ob2){
return x==ob2.x && y==ob2.y;
}
coord coord:: operator + (coord ob2){
coord temp;
temp.x = x + ob2.x;
temp.y = y + ob2.y;
return temp;
}
coord coord:: operator + (int i){
coord temp;
temp.x = x + i;
temp.y = y + i;
return temp;
}
coord coord:: operator ++ (){
x++;
y++;
return *this;
}
coord coord:: operator = (coord ob2){
x = ob2.x;
y = ob2.y;
return *this;
}
int main(){
coord o1(10, 20), o2(5, 15), o3;
int x=10, y=10;
o3 = o1 + o2;

o1++.getxy(x,y);
cout << “x:” << x << “y:”<<y << ‘\n’;
++o1.getxy(x,y);
cout << “x:” << x << “y:”<<y << ‘\n’;
if (o1 == o2) cout << “Same\n”;
o3 = o1;
o3.getxy(x,y);
cout << “x:” << x << “y:”<<y << ‘\n’;
return 0;
}
