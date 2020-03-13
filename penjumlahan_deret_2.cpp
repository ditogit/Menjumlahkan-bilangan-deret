#include <iostream>

using namespace std;

int main() {
    int x,y=0,z;
    
    cout<<"Masukan bilangan bulat positif ";
    cin>>z;
    
    if(z<=0){
    	
    	cout<<"Angka yang dimasukan tidak sesuai, ulangi lagi"; 
    	
	} else {
	
	    cout<<"Penjumlahan deret bilangan bulat positif dari "<< z << " \n";
	    
	    for (x=1; x<=z ;x++){
	    y = y+x;
	    cout<< x;
	        if(x<z){
	           cout<<"+"; 
	        } 
	    
	    }
	    cout<<" = "<< y; 
	}
    
}
