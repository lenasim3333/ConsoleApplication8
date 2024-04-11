

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	int H, Hg, hl, hm, Hs, D, l, d, U, Q;
	cin >> D >> l >> d >> Q>>Hg>>Hs;
	U = 1, 27 * (Q / pow(d, 2));
   hl = D * (l / d) * (pow(U, 2) / 19, 6);
   hm = 0, 1 * hl;
   H = Hg + hl + hm + Hs;
  cout <<hm<<" ";
  cout <<H<< " ";
  cout <<hl<<" ";
  cout <<U<< " ";
}
