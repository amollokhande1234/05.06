#include<iostream>
using namespace std;

int main(){
	int arr[10] = {0};
	int size = 10;
	int key,d,col = 0,count = 1;
	
	while(count == 1){

	cout<<"Enter Key = "<<endl;
	cin>>key;
	d = key % size;
	
	for(int i=0; i<size; i++){
		if(arr[d]>0){
			d++;
			col++;
		}
	}
	arr[d]=key;
	
	for(int i=0; i<size; i++){
		cout<<arr[i]<<endl;
	}
	cout<<"Collision = "<<col<<endl;
	cout<<"Enter Choice 0/1 = ";
	cin>>count;
	}
	return 0;
}
