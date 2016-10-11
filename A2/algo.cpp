#include <fstream>
#include <sstream>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

bool binary_search(const vector<string>& sorted_vec, string key) {
    size_t mid, left = 0 ;
    size_t right = sorted_vec.size(); // one position passed the right end
    while (left < right) {
        mid =left +  (right - left)/2;
        if (key > sorted_vec[mid]){
            left = mid+1;
       } else if (key < sorted_vec[mid]){
            right = mid;
       } else {
            return true;

                }
}        
    return false;
        
}

int main(){

string text, algo_speed, file1, file2;

getline(cin, text);

istringstream iss(text);


if ( iss >>  algo_speed >> file1 >> file2){



	if( text == "exit"){
        exit(0);
	}
string fname = file1;

string fname2 = file2;

string line;

bool found;

ifstream ifs;
ifstream ifs1;

vector<string> fileContent;
vector<string> fileContent1;

int i;

ifs.open(fname.c_str());
ifs1.open(fname2.c_str());

	if(ifs.fail()){
        cerr << "ERROR: failed to open file 1 :" << fname << endl;
        ifs.clear(); 
	}else if(ifs1.fail()){
        cerr << "ERROR failed to open file 2 :" << fname2 << endl;
        ifs1.clear();
	}else {


        while(getline(ifs, line)){
                fileContent.push_back(line);

	}



	if(algo_speed == "slow"){
   

   		 while(getline(ifs1, line)){
     	  	 fileContent1.push_back(line);

   		 }

   		 for(size_t i = 0; i < fileContent.size() ; i++){
    
		 bool found = std::find(fileContent1.begin(), fileContent1.end(), fileContent[i]) != fileContent1.end();

             	 if(found) {
                cout << "YES:" << fileContent.at(i) << endl;
               } else {
                cout << "NO:" << fileContent.at(i) << endl;
                }
       		 }
       }
	if(algo_speed == "fast"){

        	while(getline(ifs1, line)){

                fileContent1.push_back(line);

       		 }

        sort(fileContent1.begin(), fileContent1.end());
       
	 for(size_t i = 0; i < fileContent.size(); i++){
       
	 found = binary_search(fileContent1, fileContent[i]);      

		 if(found) {
                cout << "YES:" << fileContent.at(i) << endl;
           	 } else {
                cout << "NO:" << fileContent.at(i) << endl;
           	 }
        }

	}	
        ifs.close();
        ifs1.close();
}	
}
else { 
 
        cout << "Input error. Please try again." << endl;

iss.clear();
}
return 0;

}


