#include<iostream>
using namespace std;

				//creating the function called partition
	
	int partition(int a[],int start,int end){
				//choosing the pivot to be the last element
		int pivot=a[end];
		int partitionindex=start;
				/*making a loop to make all tthe smaller elements than the pivot to go the left of the partitionindex and the higher ones to go to the right side of partitionindex*/

		for(int i=start;i<end;i++){
			if(a[i]<=pivot){
				swap(a[i],a[partitionindex]);
				partitionindex++;
			}
		}
				//swapping the partitionindex with thepivot
		swap(a[partitionindex],a[end]);
		return partitionindex;
	}
				//making the quicksort function
	void quicksort(int a[],int start,int end){
		if(start<end){
				//calling the partion function
			int parInd=partition(a,start,end);
				//recursively calling the quicksort function for arranging the elements of the left side of the pivot
			quicksort(a,start,parInd-1);
				//recursively calling the quicksort function for arranging the elements of the right side of the pivot
			quicksort(a,parInd+1,end);
		}
	}
				//main
	int main(){
		int a[]={7,2,4,8,9,5,3,1,6};
		quicksort(a,0,8);
				//display
		for(int j=0;j<9;j++){
			cout<<a[j]<<" ";
		}
		cout<<endl;
	return 0;
	}
		
