	#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <io.h>

using namespace std;

namespace Fracti {
    // Здесь находятся классы для работы с дробями
    class Fraction {

    private:
        int num;
        int znam;



    public:

        void input()
        {
            cout << "Введите числитель: ";
            cin >> num;
            cout << "Введите знаменатель: ";
            cin >> znam;
        }
        void add(Fraction f)
        {
            num = num * f.znam + f.num * znam;
            znam = znam * f.znam;
        }

        void subtract(Fraction f)
        {
            num = num * f.znam - f.num * znam;
            znam = znam * f.znam;
        }

        void umnoj(Fraction f)
        {
            num *= f.num;
            znam *= f.znam;
        }

        void dilit(Fraction f)
        {
            num *= f.znam;
            znam *= f.num;
        }

        void print()
        {
            cout << "Дробь: " << num << "/" << znam << '\n';
        }
    };
}

namespace Geometry {
	
    namespace TwoD {

		class Point2D {
        public:
            int x, y;

        };
	}
	namespace ThreeD {
		
        class Point3D {
        public:
            int x, y, z;
        
        
        };
	}
}

int main() {
	Fracti::Fraction a;
	Geometry::TwoD::Point2D b;

	Geometry::ThreeD::Point3D c;

	return 0;
}