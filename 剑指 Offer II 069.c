int peakIndexInMountainArray(int* arr, int arrSize){
    int mid=0;
    int left=0;
    int right=arrSize;
    for(int i=0;i<=arrSize;i++){
        mid=(left+right)/2;
        
        if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
        break;
        else if (arr[mid]<arr[mid-1]){
            right=mid;
        }
        else if (arr[mid]<arr[mid+1]){
            left=mid;
        }
    }
    return mid;
}