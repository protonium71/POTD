/* Task_2 - Given a sorted array A[] of N positive integers having all the numbers occurring exactly twice, except for one number which will occur only once. 
            Find the number occurring only once.
   Problem Link - https://practice.geeksforgeeks.org/problems/element-appearing-once2552/0?company[]=Qualcomm&company[]=Qualcomm&difficulty[]=1&page=1&query=company[]Qualcommdifficulty[]1page1company[]Qualcomm&utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=element-appearing-once
*/

int search(int a[], int n){
	    //code
	    if(n==1)return a[0];
	    int l=0,r=n-1;
	    while(l<=r){
	        int mid=l+(r-l)/2;
	        if(a[mid]!=a[mid-1] && a[mid]!=a[mid+1])return a[mid];
	        if((mid%2==1 && a[mid]==a[mid-1]) || (mid%2==0 && a[mid]==a[mid+1]))l=mid+1;
	        else if((mid%2==1 && a[mid]!=a[mid-1]) || (mid%2==0 && a[mid]!=a[mid+1]))r=mid-1;
	    }
	}

// Time Complexity - O(logn) 
// Space Complexity - O(1)
