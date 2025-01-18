 int pivot=partition(arr, start, end);
  //LEFT SIDE
  quickSort(arr, start, pivot-1);
  //RIGHT SIDE
  quickSort(arr, pivot+1, end);

}

int main(){
  int arr[]={6,4,2,8,13,7,11,9,3,6};
  quickSort(arr,0,9);
  for(int i=0; i<10; i++){
    cout<<arr[i]<<" ";
  }