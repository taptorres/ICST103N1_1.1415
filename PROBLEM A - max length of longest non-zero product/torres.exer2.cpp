/* Could this work sir?
			~Patrick Torres 
*/

#include<iostream>

using namespace std;

int substr(int i, int n, int counter, int temp, int file[]); //function prototype

int main(){
	int n, i; 
	int counter=0; 
	int temp=0;
	int file[n];

	cin >> n;

//storage of file content to array
	for(i=0; i < n; i++){
		cin >> file[i];
		//cout << "File[i]: " << file[i] << "  n: " << n << "  i: " << i << endl;
}

	//cout << endl << endl;
	substr(i, n, counter, temp, file);
	


	
return 0;

}

//function that will return the length of the longest substring whose product is non-zero
int substr(int i, int n, int counter, int temp, int file[]){


	for(i = 0;i < n;i++){			
		if(file[i] == 0){		
			if(counter < temp){  
				counter = temp;
				temp = 0;}
		}
		else
			temp++;

	//cout << "Counter is now currently: " << counter << "     " << "Temp is now currently: " << temp << endl;

	}

cout << endl << "Longest substring with non zero product is: " << counter << endl;

}
			
