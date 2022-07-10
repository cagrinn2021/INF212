#ifndef kutupp
#define kutupp

 class Complex {
 		private:
		double real_;
		double imag_;
		public:
		Complex(); //Default Constructor
		Complex(double re, double im); //Constructor
		Complex(const Complex &other); // Copy Constructor
		Complex& operator=(const Complex &other); // Assignment
		void Print();

};
	
#endif
