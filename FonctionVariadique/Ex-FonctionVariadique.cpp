/*
Creer les deux fonctions variadique GetMoyenne(int, ...) et GetEcartType(float, int , ...) qui
doivent renvoyer respectivement la moyenne et l'écart type de 1, 2, .. ou n valeurs de
nombre entier. L"écart type des nombres r1 , ..., rN est par :  
       sqrt( 1/N * ( (r1-moy)^2 + (r2-moy)^2 +...(rN-moy)^2 )
*/
#include<cmath>
#include<cstdarg>
#include<iostream>

using namespace std;

float GetMoyenne(int num_pa, ...){
   	    int moy=0;
   	    
   	   va_list args;
   	   va_start(args,num_pa);
   	   
   	   for(int i=0; i<num_pa;i++){
   	   	    moy+= va_arg(args, int);
		  }
		  
		va_end(args);
				
		  return (float)moy/num_pa;
   	   
   	
   }
   
float GetEcartType(float moy, int num_pa, ...){
   	   int Ecart=0;
   	   
   	   va_list args;
   	   va_start(args,num_pa);
   	   
   	   for(int i=0; i<num_pa;i++){
   	   	    Ecart+=pow(va_arg(args, int)-moy,2);
		  }
		Ecart=(float)Ecart/num_pa;	 
		
		va_end(args);
		
		return sqrt(Ecart);
   }
   


int main() {
	
	double moy=GetMoyenne(3, 20,10,10);
	
	cout<< "Ecart Type E= "<< GetEcartType(moy, 3, 20, 10, 10);
	
	return 0;
}
	

