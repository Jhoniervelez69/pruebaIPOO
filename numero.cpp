#include <iostream>
using namespace std;

int main(){
     int x=0;
     
     
     cout<<"ingrese x"<< endl;
     cin>>x;
     
    switch(x){
		case 4:
		    cout<<"soy cuatro"<<endl;
		    break;
		case 8:
		    cout<<"soy el doble de cuatro"<<endl;
		    break;
		case 16:
		    cout<<"soy el cuadruple de cuatro"<<endl;
		    break;
		default:
		    cout<<"no aplico"<<endl;
		    break; 
    }

}
