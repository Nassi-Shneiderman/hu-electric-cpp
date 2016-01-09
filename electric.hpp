/*
    HEADER
*/
#ifndef ELECTRIC_HPP_INCLUDED
#define ELECTRIC_HPP_INCLUDED


class ELECTRIC {
	//methoden
	public:
		ELECTRIC() {
			u=0;
			i=0;
			r=1;
		};

		void setResistor(float r) {
			this-> r = r;
			return;
		}

		float getResistor() {
			this-> r;
			return r;
		}
	//Attribute
	protected:
		float u; //Spannung
		float i; //Strom
		float r; //Widerstand
};

#endif // ELECTRIC_HPP_INCLUDED
