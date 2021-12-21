 	include<stdio.h>
int linearSearch1(int[] ,int , int);
	int main(){
	        int a[30],n,i,x,p;
	        printf("Enter size of list:");
	        scanf("%d" , &n);
	        printf("Elements of array:");
	        for(i=0;i<n;i++){
	                scanf("%d" ,&a[i]);
	        }
	        printf("Element to be searched:");
	        scanf("%d",&x);
	        p = linearSearch1(a,n,x);
	        if(p == -1){
	             printf("Element not found");
	        }
	        else{
	             printf("Element found at position %d :",p);
	        }
	}
	int i=0;
	int linearSearch1(int a[],int n,int x){
	        if(a[i]==x){
	                return i;
	        }
	        if(i<n){
	                i++;
	                linearSearch1(a,n,x);
	        }
	        if(i>=n){
	                return -1;
	        }
	}
	

	Input:
	Enter size of list:3
	Elements of array:1
	2
	3
	Element to be searched:3
	Output:
	Element found at position 2
	

	Input:
	Enter size of list:3
	Elements of array:1
	2
	3
	Element to be searched:4
	Output:
	Element not found

Using Non Recursion 
 
	include<stdio.h>
int linearSearch(int[] ,int , int);
	int main(){
	        int a[30],n,i,x,p;
	        printf("Enter size of list:");
	        scanf("%d", &n);
	        printf("Elements of array:");
	        for(i=0;i<n;i++){
	                scanf("%d" ,&a[i]);
	        }
	        printf("Element to be searched:");
	        scanf("%d",&x);
	        p = linearSearch(a,n,x);
	        if(p == -1){
	             printf("Element not found");
	        }
	        else{
	             printf("Element found at position %d :",p);
	       }
	}
	int linearSearch(int a[],int n,int x){
	        int i;
	        for(i=0;i<n;i++){
	                if(x == a[i]){
	                        return i;
	                }
	        }
	        return -1;
	}
	

	Input:
	Enter size of list:3
	Elements of array:2
	3
	1
	Element to be searched:3
	Output:
	Element found at position 1
	

	Input:
	Enter size of list:2
	Elements of array:1
	2
	Element to be searched:3
	Output:
	Element not found

ii)Binary Search
Using Recursion
 
	include<stdio.h>
int binarySearch1(int[],int,int,int);
	int main(){
	        int a[30],n,i,x,p;
	        int low,high;
	        printf("Enter size of list:");
	        scanf("%d",&n);
	        printf("Enter %d elements:",n);
	        for (i=0;i<n;i++){
	                 scanf("%d",&a[i]);
	        }
	        low=0;
	        high=n-1;
	        printf("Element to be searched:");
	        scanf("%d",&x);
	        p = binarySearch1(a,x,low,high);
	        if(p == -1){
	                printf("Element not found");
	        }
	        else{
	                printf("Element found at %d position ",p);
	        }
	}
	int binarySearch1(int a[],int x,int low,int high){
	        int mid;
	        if(low>high)
	                return -1;
	        mid=(low+high)/2;
	        if(x==a[mid])
	                return mid;
	        else if(x<a[mid])
	                binarySearch1(a,x,low,mid-1);
	        else
	                binarySearch1(a,x,mid+1,high);
	        return -1;
	}
	

	Input:
	Enter size of list:3
	Enter 3 elements:2
	3
	4
	Element to be searched:3
	Output:
	Element found at 1 position
	

	Input:
	Enter size of list:2
	Enter 2 elements:1
	2
	Element to be searched:3
	Output:
	Element not found

Using Non Recursion
 
	include<stdio.h>
int binarySearch(int[],int,int);
	int main(){
	        int a[30],n,i,x,p;
	        printf("Enter size of list:");
	        scanf("%d",&n);
	        printf("Enter %d elements:",n);
	        for (i=0;i<n;i++){
	                 scanf("%d",&a[i]);
	        }
	        printf("Element to be searched:");
	        scanf("%d",&x);
	        p =binarySearch(a,n,x);
	        if(p == -1){
	             printf("Element not found");
	        }
	        else{
	            printf("Element found at %d position ",p);
	        }
	}
	int binarySearch(int a[],int n,int x){
	        int beg=0,end=n-1,mid;
	        while(beg<=end){
	                mid=(beg+end)/2;
	                if(x<a[mid])
	                        end = mid-1;
	                else if(x>a[mid])
	                        beg = mid+1;
	                else
	                        return mid;
	        }
	        return -1;
	}
	

	Input:
	Enter size of list:3
	Enter 3 elements:1
	2
	3
	Element to be searched:2
	Output:
	Element found at 1 position
	

	Input:
	Enter size of list:2
	Enter 2 elements:2
	3
	Element to be searched:4
	Output:
	Element not found



