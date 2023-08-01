/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
// void search(int arr[], int soCanTim){
//     // logic 
// }
// Muon viet 1 ham o duoi main => Tren main => Dinh danh/ Khai bao ham
void search(int arr[], int soCanTim);
int main()
{
    /**
     * Thuat toan tim kiem :
     *  - Tim kiem tuan tu 
     *  - Tim kiem nhi phan => Mang cua cac ban co dieu kien gi ???
     **/
     int arr[]={10,20,35,-1};
     search(arr,10);
    return 0;
}

void search(int arr[], int soCanTim){
    // logic 
    // tim kiem tuan tu 
    for(int i = 0; i<4; i++){
        if(arr[i] == soCanTim){
            printf("So can tim : %d\n",arr[i]);
            return;
        }
    }
    printf("Khong tim thay");

}
