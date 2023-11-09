#include <iostream>
#include <vector>
using namespace std;
class GFG {
public:
	int x;

	GFG(int x)
	{
		this->x = x;
		cout << "Constructor=>"<< "x:" << x << endl;
	}

	// Copy Constructor
	GFG(const GFG& t)
	{
        x = t.x;
		cout << "Copied=>"<< "x:" << x << endl;
	}

	~GFG()
	{
		cout << "destructor=>"<< "x:" << x << endl;
	}
};
int main()
{
	vector<GFG> vertices;
	cout << "length of vertices:" << vertices.size()<< endl;
	cout << endl;
	
	vertices.emplace_back(1);
	cout << endl;

	vertices.emplace_back(11);
	cout << endl;

	vertices.emplace_back(21);
	cout << endl;

	return 0;
}
