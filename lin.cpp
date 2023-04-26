#include<iostream>
using namespace std;


int linearsearch(int arr[],int element){
	for(int i=0;i<sizeof(arr);i++){
		if(arr[i]==element){
//			cout<<"Element found at index :"<<i<<endl; 
return i;
		}
//		else{
//			cout<<"element not present in array !!";
//	
//		}
	
		
	}
	return -1;	
}

int main(){
	int arr[]={2,42,41,35,56,83,8542,26,75,86,80};
	int a =	linearsearch(arr,260);
	
	if(a==-1){
		cout<<"Element not present in array !";
	}
	else{
		cout<<"element present at index : "<<a;
	}

	return 0;
}
