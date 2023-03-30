// #include<iostream>
// using namespace std;


// class Hero {
// 	//properties
// 	int health;

// };

// int main() {

// 	//creation of object
// 	Hero h1;

// 	cout << "size : " << sizeof(h1) << endl;


// 	return 0;
// }







// //access modifier

// #include<iostream>
// using namespace std;


// class Hero {
// 	//properties
// 	public:
// 	int health;
// 	char level;

// };

// int main() {

// 	//creation of object
// 	Hero h2;

// 	h2.health=70;
// 	h2.level="A";

// 	cout << "health is: " << h2.health << endl;
// 	cout << "level is: " << h2.level << endl;




// 	cout << "size : " << sizeof(h2) << endl;


// 	return 0;
// }










// #include<iostream>
// using namespace std;


// class Hero {
// 	//properties
// 	private:
// 	int health;

// 	public :
// 	char level;

// 	int getHealth() {
// 		return health;
// 	}

// 	char getLevel() {
// 		return level;
// 	}

// 	void setHealth(int h) {
// 		health=h;
// 	}

// 	void setLevel(char ch) {
// 		level=ch;
// 	}




// };

// int main() {

// 	//creation of object
// 	Hero h2;

// 	// h2.health=70;
// 	cout << "h2 health is " << h2.getHealth() << endl;
// 	//use setter
// 	h2.setHealth(1);
// 	// h2.level="A";

// 	cout << "health is: " << h2.getHealth() << endl;
// 	cout << "level is: " << h2.level << endl;




// 	cout << "size : " << sizeof(h2) << endl;


// 	return 0;
// }

















// #include<iostream>
// using namespace std;


// class Hero {
// 	//properties
// 	private:
// 	int health;

// 	public :
// 	char level;



// 	Hero() {
// 		cout << "constuctor called" << endl;
// 	}

// 	int getHealth() {
// 		return health;
// 	}

// 	char getLevel() {
// 		return level;
// 	}

// 	void setHealth(int h) {
// 		health=h;
// 	}

// 	void setLevel(char ch) {
// 		level=ch;
// 	}




// };

// int main() {

// 	//creation of object
// 	Hero h2;

// 	// h2.health=70;
// 	cout << "h2 health is " << h2.getHealth() << endl;
// 	//use setter
// 	h2.setHealth(1);
// 	// h2.level="A";

// 	cout << "health is: " << h2.getHealth() << endl;
// 	cout << "level is: " << h2.level << endl;




// 	cout << "size : " << sizeof(h2) << endl;







// 	// object created statically

// 	cout << "Hi " << endl;
// 	Hero ramesh;
// 	cout << "Hello " << endl;


// 	// dynamically

// 	Hero *h = new Hero;



// 	return 0;
// }















#include<iostream>
using namespace std;


class Hero {
	//properties
	private:
	int health;

	public :
	char level;



	Hero(int health) {
		cout << "this ->" << this << endl;
		this -> health = health;
	}

	int getHealth() {
		return health;
	}

	char getLevel() {
		return level;
	}

	void setHealth(int h) {
		health=h;
	}

	void setLevel(char ch) {
		level=ch;
	}




};

int main() {

	//creation of object
	Hero h2;

	// h2.health=70;
	cout << "h2 health is " << h2.getHealth() << endl;
	//use setter
	h2.setHealth(1);
	// h2.level="A";

	cout << "health is: " << h2.getHealth() << endl;
	cout << "level is: " << h2.level << endl;




	cout << "size : " << sizeof(h2) << endl;







	// object created statically


	Hero ramesh(10);
	cout << "address of ramesh " << &ramesh << endl;
	ramesh.getHealth();


	// dynamically

	Hero *h = new Hero;



	return 0;
}






























