#pragma once
class INTEGER {
	private:
		int entero;

	public:
		void operator<<(int);
		void operator<<(INTEGER);
		void operator!();}
		INTEGER operator+(INTEGER);  
		INTEGER operator-(INTEGER);  
		INTEGER operator*(INTEGER);  
		INTEGER operator/(INTEGER); 
		~INTEGER();
};

 
