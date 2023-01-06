/* Task_2 - Union of two arrays can be defined as the common and distinct elements in the two arrays. Given two sorted arrays of size n and m respectively, find their 
            union.
   Problem Link - https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1
*/

vector<int> findUnion(int a[], int b[], int n, int m){
        vector<int> v;
        int i=0,j=0,c=0;
        while(i!=n || j!=m){
            if(a[i]<b[j] && c!=a[i]){
                v.push_back(a[i]);
                c=a[i];
                i++;
            }
            else if(a[i]>b[j] && c!=b[j]){
                v.push_back(b[j]);
                c=b[j];
                j++;
            }
            else if(a[i]==b[j] && c!=a[i]){
                c=a[i];
                v.push_back(b[j]);
                i++,j++;
            }
            else{
                if(a[i]<b[j])i++;
                else j++;
            }
        }
        if(i==n && j==m) return v;
        else if(i==n){
            for(i=j;i<m;i++){
                if(b[i]!=c)v.push_back(b[i]),c=b[i];
            }
            return v;
        }
        else {
            for(j=i;j<n;j++){
                if(a[j]!=c)v.push_back(a[j]),c=a[j];
            }
            return v;
        }
}

// Time Complexity - O(n+m)
// Space Complexity - O(n+m)
