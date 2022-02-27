#include<iostream>

using namespace std;

// Declaration de la class Point
class Point{
	// declaration des membres privés
	private :
		int x;
		int y;
	
		
   // Prototype des methodes (membres public)		
	public :
		static int nb_Points;
		
		Point(int, int); // Constructeur par défaut
		Point(int);
	    Point(); 
	    
		void Initialiser(int, int);
		void Deplacer(int , int);
		void Afficher();		
		bool Comparer(Point);
		Point Symetrique();
};

// Definition du membre statique
int Point::nb_Points;

// Definition des methodes :

Point::Point(int x, int y){
	this->x=x;
	this->y=y;
	nb_Points++;
	
}
Point::Point(int x){
	this->x=x;
	this->y=x;
		nb_Points++;
}

Point::Point(){
	this->x=0;
	this->y=0;
		nb_Points++;
}

void Point::Initialiser(int x, int y){
	this->x=x;
	this->y=y;
}

void Point::Deplacer(int x, int y){
	this->x+=x;
	this->y+=y;
}

void Point::Afficher(){
	
	cout<< "(" << x << "," << y << ")\n" ;
		cout << "Nombre du points :"<<nb_Points << endl;

}

bool Point::Comparer(Point P){
	return this->x==P.x && this->y==P.y ;
}

Point Point::Symetrique(){
	Point a(-this->x,-this->y);
	
	return  a;
}

// Test (Exemple d'utilisation)
int main(){
	cout << "Nombre de points : " << Point::nb_Points << "\n";
	
	Point a,c(12);
	Point b(0,0);
	
    a.Afficher();
    b.Afficher();
    c.Afficher();
    
    if(a.Comparer(b)==true) cout << "a et b coincide" << endl;  
    else cout << "a et b ne coincide pas" << endl;
    
    c=c.Symetrique();
    c.Afficher();
   	
	return 0;
}
