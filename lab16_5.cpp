#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *, int *, int *); //Modify input arguments to pointer 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); //Modify input arguments to pointer 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a, int *b, int *c, int *d)
{
	int dummy1[] = {*a, *b, *c, *d};
	int dummy2[] = {0, 0, 0, 0};
	for (int i = 0; i < 4; i++)
	{
		dummy2[i] = rand()%4;
		for (int j = 0; j < i; j++)
		{
			if (dummy2[i] == dummy2[j])
			{
				i--;
				break;
			}
		}
	}
	*a = dummy1[dummy2[0]];
	*b = dummy1[dummy2[1]];
	*c = dummy1[dummy2[2]];
	*d = dummy1[dummy2[3]];
}