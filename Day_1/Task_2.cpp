vector<int> minAnd2ndMin(int a[], int n) {
    if(n==1)return vector<int>{-1,-1};
    int i,min1=a[0],min2=a[0];
    for(i=1;i<n;i++){
        min1=min(a[i],min1);
    }
    for(i=1;i<n;i++){
        if(min(min2,a[i])==min1)min2=max(min2,a[i]);
        else min2=min(min2,a[i]);
    }
    if(min1==min2)return vector<int>{-1,-1};
    return vector<int>{min1,min2};
}