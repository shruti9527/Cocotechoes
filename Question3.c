#include <stdio.h>
int main() {
    // Write C code here
    int count = 0;
    int arr_emp[] = {25, 23, 28, 26, 21} ;     
    int arr_man[] = {58, 59, 56, 52, 55};
    int arr[2] = {arr_emp,arr_man};     
    int length = sizeof(arr_emp)/sizeof(arr_emp[0]);   
    int len = sizeof(arr_man)/sizeof(arr_man[0]);   
   
    printf("Employee ids:\n");    
       
    for (int i = 0; i < length; i++) {     
        printf("%d\n ", arr_emp[i]); 
}
    printf("Manager ids:\n");    
       
    for (int j = 0; j < len; j++) {     
        printf("%d\n ", arr_man[j]); 
}
//printf("Employee %d reports to Manager %d", arr_emp, arr_man);
for(int i=0; i<length; i++){
for(int j=0; j<len; j++){
    
        if(arr_emp[i]==arr_man[j]){
            count++;
            break;}}}
        if((count==length) && (count == len)){
    printf("arrays are same");
}
else{
    
    for(int i=0; i<length; i++){
for(int j=i; j<len; j++){
    printf("Employee %d reports to Manager %d\n", arr_emp[i], arr_man[j]);}}}
    return 0;}


