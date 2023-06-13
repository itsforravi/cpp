#include<bits/stdc++.h>
typedef unsigned long long int ll;
using namespace std;

string read(int n, vector<int> book, int target)
{

    // (Better solution)
//   map <int,int> mpp;
//   for(int i=0;i<n;i++){
//       int a=book[i];
//       int more=target-a;
//       if(mpp.find(more)!=mpp.end()){
//           return "YES" ; //return (mpp[more],i)
//       }
//       mpp[a]=i;
//   }
//   return "NO";

int left=0,right=n-1;
sort(book.begin(),book.end());
while(left<right){
    int sum=book[left]+book[right];
    if(sum==target){
        return "YES";
    }
    else if (sum<target)  left++;
    else right--;
     
}
return "NO";

}

// Sort an array of 0s, 1s and 2s
void sortArray(int arr[],int n){
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
                low++;
                mid++;
            
        }
        else if (arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
                high--;
            
        }
        
        
    }
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    // int n=5;
    // vector<int> book={2,6,5,8,11};
    // int target=14;
    // string ans=read(n,book,target);
    // cout<<"Sum of the two number which have taget=>  "<<ans<<endl;
    
    // Sort an array of 0s, 1s and 2s
    
    int arr[]={0,1,2,0,1,2,1,2,0,0,0,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    sortArray(arr,n);
    cout<<"After Sorting"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   
    
    return 0;
}