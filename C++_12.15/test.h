#pragma once
namespace VECTOR
{
	
	class vector
	{
	public:
		enum Mode{R,J};
	private:
		double x;
		double y;
		double p;
		double a;
		Mode  mode;
		void jtor();
		void rtoj();
	public:
		vector();
		vector(double a);
		~vector();
		vector(double a, double b, Mode mod = R);
		void reset(double a, double b, Mode mod = R);
		vector operator*(int a)const;
		vector operator+(const vector& a);
		void operator++(int a);
		explicit operator int();   //ֻ������ת������vector����ת����int����
		friend vector operator*(int a, const vector& b);
		friend std::ostream& operator<<( std::ostream& os , const vector& b);
	};
}