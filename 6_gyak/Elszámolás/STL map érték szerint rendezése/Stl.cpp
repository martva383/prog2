#include <iostream>
#include <map>
#include <time.h>
#include <algorithm>
#include <vector>

using namespace std;

string random_str(){

	string str = "";

	for(int i = 0; i < 3; i++){
		int rdm = 65 + rand()%26;
		str += (char) rdm;
  	}

	return str;
}

vector<pair<string, int>> sort_map (map <string, int> &mymap){

	vector<pair<string, int>> ordered;

	for(auto i : mymap) {
		if(i.second ){
			pair<string, int> p {i.first, i.second};
			ordered.push_back ( p );
		}
	}

	sort (begin (ordered), end (ordered), [ = ] ( auto p1, auto p2 ) {
      return p1.second < p2.second;
    });

    return ordered;
}

int main (){
	map<string,int> mymap;
	srand(time(0));

	for(int i = 0; i < 10; i++){
		mymap.insert(make_pair(random_str(), rand()%15000 ));
	}

	map<string, int>::iterator it;
	vector<pair<string, int>> unsorted;

	for (it = mymap.begin(); it != mymap.end(); it++){
		if(it->second ){
			pair<string, int> p{it->first, it->second};
			unsorted.push_back (p);
		}
	}

	vector<pair<string, int>> sorted = sort_map(mymap);

	for (int i = 0; i < sorted.size(); i++){
		cout << "sorted: " << sorted[i].first << ':' << sorted[i].second << "\t unsorted: " << unsorted[i].first << ':' << unsorted[i].second << endl ;
	}


  return 0;
}