
#include<bits/stdc++.h>

using namespace std;
class Box {
private:
    int length;
    int breadth;
    int height;

public:

    Box() : length(0), breadth(0), height(0) {}


    Box(int l, int b, int h) : length(l), breadth(b), height(h) {}


    Box(const Box& B) : length(B.length), breadth(B.breadth), height(B.height) {}


    int getLength() const {
        return length;
    }

    int getBreadth() const {
        return breadth;
    }

    int getHeight() const {
        return height;
    }


    long long CalculateVolume() const {
        return static_cast<long long>(length) * breadth * height;
    }


    bool operator<(const Box& B) const {
        if (length < B.length) {
            return true;
        } else if (length == B.length && breadth < B.breadth) {
            return true;
        } else if (length == B.length && breadth == B.breadth && height < B.height) {
            return true;
        }
        return false;
    }


    friend ostream& operator<<(ostream& out, const Box& B) {
        out << B.length << " " << B.breadth << " " << B.height;
        return out;
    }
};



void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}
