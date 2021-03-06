#include <utility>

#include <ONS/orbit.h>
#include <ONS/abstract.h>
#include <ONS/rational.h>
#include <ONS/singleton.h>
#include <ONS/variant.h>

using namespace std;
using namespace ONS;

int main() {
	// Simple types
	orbit<abstract> a;
	orbit<rational> b;
	orbit<singleton> c;
	
	// Labeled types
	orbit<pair<int, abstract>> d;
	orbit<pair<int, rational>> e;
	orbit<pair<int, singleton>> f;
	orbit<pair<int, pair<int, abstract>>> g;
	orbit<pair<int, pair<string, abstract>>> h;
	orbit<pair<int, pair<abstract, abstract>>> i;
	orbit<pair<int, variant<rational>>> j;
	orbit<pair<string, abstract>> k;
	orbit<pair<string, rational>> l;
	orbit<pair<string, singleton>> m;
	orbit<pair<string, pair<int, abstract>>> n;
	orbit<pair<string, pair<string, abstract>>> o;
	orbit<pair<string, pair<abstract, abstract>>> p;
	orbit<pair<string, variant<rational>>> q;
	
	// pairs
	orbit<pair<abstract, rational>> r;
	orbit<pair<singleton, pair<int, abstract>>> s;
	orbit<pair<pair<string, abstract>, pair<abstract, abstract>>> t;
	orbit<pair<variant<rational>, abstract>> u;
	
	// vector
	orbit<vector<abstract>> v;
	orbit<vector<rational>> w;
	orbit<vector<singleton>> x;
	
	// variant
	orbit<variant<abstract, rational, singleton, pair<int, abstract>, pair<string, abstract>, pair<abstract, abstract>, variant<rational>>> y;
	
	return 0;
}
