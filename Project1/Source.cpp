#include "Tiger.h"

// Классы 
// Конструктор копирования 
// Правильная инициализация в конструкторе 
// Перегрузка конструктора 
// Перегрузка операторов == ! [] . ->


// класс - набор методов и полей 
class Vehicle
{
public:
	// Конструктор (параметризованный)
	// Правильная инициализация в конструкторе 
	Vehicle(int newMaxSpeed, const std::string& newColor, const std::string& newType) :
		maxSpeed(newMaxSpeed), color(newColor), type(newType)
	{
		std::cout << " Constructor Vehicle()\n" << std::endl;
		/*maxSpeed = newMaxSpeed;
		color = newColor;
		type = newType;*/
	};

	Vehicle() {}; // Конструктор дефолтный <--> ((Vehicle = default));

	// Правильная инициализация в конструкторе 
	Vehicle(int newMaxSpeed) : maxSpeed(newMaxSpeed), color("blue"), type("bike") {}

	// Конструктор копирования
	// Принимает объект того же типа и копирует его
	Vehicle(Vehicle& obj)
	{
		maxSpeed = obj.getMaxSpeed();
		color = obj.getColor();
		type = obj.getType();
	}

	//Vehicle() = delete; // Удаление конструктора.

	// /Деструктор - разрушает класс (забирает память, очищает класс)
	~Vehicle()
	{
		std::cout << "\n Destructor Vehicle()" << std::endl;
	}

	// Геттер - ф-я, которая возвращает поле класса (данные)
	int getMaxSpeed()
	{
		return maxSpeed;
	}

	// Геттер
	std::string getColor()
	{
		return color;
	}
	
	// Геттер
	std::string& getType()
	{
		return type;
	}

	// Сеттер - ф-я, которая устанавливает значение для поля (класса)
	void setMaxSpeed(int newSpeed)
	{
		maxSpeed = newSpeed;
	}

	// Сеттер
	void setColor (const std::string& newColor)
	{
		color = newColor;
	}

	// Сеттер
	void setType(const std::string& newType)
	{
		type = newType;
	}

	// Перегрузка (переопределенние) оператора == (эквивалентности)
	bool operator==(Vehicle& other)
	{
		if (maxSpeed == other.maxSpeed &&
			color == other.color &&
			type == other.type)
		{
			return true;
		}
		return false;
	}

	// Перегрузка оператора!
	bool operator!()
	{
		if (maxSpeed < 0)
		{
			return true;
		}
		return false;
	}

private:
	int maxSpeed;
	std::string color;
	std::string type;
};

int main() {
	setlocale(LC_ALL, "Russian");

	Vehicle originalCar(15, "white", "bus");
	Vehicle newCar(originalCar);
	Vehicle foreignCar(15, "white", "abc");

	std::cout << (originalCar == newCar) << std::endl;
	std::cout << "==================" << std::endl;
	std::cout << (originalCar == foreignCar) << std::endl;

	/*
	std::cout << originalCar.getMaxSpeed() << ' ' << originalCar.getColor() << ' ' << originalCar.getType() << std::endl;
	std::cout << "=================================" << std::endl;
	std::cout << newCar.getMaxSpeed() << ' ' << newCar.getColor() << ' ' << newCar.getType() << std::endl;
	*/

	/*
	std::cout << " Start of main()" << std::endl;
	Vehicle car(20, "black", "van");

	std::string carColor = car.getColor();
	std::cout << " carColor --> " << carColor << " car.getColor() --> " << car.getColor() << std::endl;
	carColor = "green";
	std::cout << " carColor --> " << carColor << " car.getColor() --> " << car.getColor() << std::endl;

	std::string& carType = car.getType();
	std::cout << " carType --> " << carType << " car.getType() --> " << car.getType() << std::endl;
	carType = "randomType";
	std::cout << " carType --> " << carType << " car.getType() --> " << car.getType() << std::endl;


	car.setMaxSpeed(50);

	std::cout << " Max speed is --> " << car.getMaxSpeed() << std::endl;
	//std::cout << " Color is --> " << car.getColor() << std::endl;
	//std::cout << " Type is --> " << car.getType() << std::endl;

	std::cout << "\n End of main()" << std::endl;

	Vehicle car2(90);
	std::cout << " Max speed is --> " << car2.getMaxSpeed() << ' ' << car2.getColor() << ' ' << car2.getType() << std::endl;
	*/






























		return 0;
}