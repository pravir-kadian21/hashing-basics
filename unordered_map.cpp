#include<bits/stdc++.h>
using namespace std;

void print(unordered_map<int,string>&m){
	//size of map
	cout << m.size() << endl;
	//better way of printing
	for(auto &pr:m){//tc of loop is O(n) as accessing with iterator is O(1)
		cout << pr.first << " " << pr.second << endl;
	}
}

int main(){
	//declaration
	unordered_map<int,string>m;

	//insertion
	m[1]="abc";//insertion and access both take O(1) time
	m[5]="cdc";
	m[3]="acd";
	m.insert({4,"afg"});
	m[3]="ree";//map stores only unique keys so it replaces value of 3(i.e "acd") with "ree"

	/*
	//printing
	map<int,string> :: iterator it;

	for(it=m.begin();it!=m.end();it++){
		cout << it->first << " " << it->second << endl;
	}
	*/

	/*find and erase--------------------------------------------*/
	auto it = m.find(4);//returns iterator O(1)
	if(it==m.end()){
		cout << "NO Value" << endl;
	}
	else{
		cout << it->first << "  " << it->second << endl;
	}
	//m.erase(4);//deletes entry with key 4
	if(it!=m.end()){
		m.erase(it);//it alse takes iterator as input
	}
	//m.clear()//deletes all elements of map

	print(m);

}