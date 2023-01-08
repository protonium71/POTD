/* Task_1 - Given an array arr[] of N positive integers. Push all the zeros of the given array to the right end of the array while maitaining the order of non-zero
            elements.
   Problem Link - https://practice.geeksforgeeks.org/problems/move-all-zeroes-to-end-of-array0751/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=move-all-zeroes-to-end-of-array
*/

void pushZerosToEnd(int arr[], int n) {
	    int x=INT_MAX;
	    for(int i=0;i<n;i++){
	        if(arr[i]==0 && x>i)x=i;
	        if(arr[i]>0 && x<i){
	            arr[x]=arr[i];
	            arr[i]=0;
	            x++;
	        }
	    }
	}

// Time Complexity - O(n)
// Space Complexity - O(1)
