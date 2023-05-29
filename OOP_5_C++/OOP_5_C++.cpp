#include <iostream>
#include <vector>
#include <string>
#include <iterator>
//Solid
////S-single responsibility principle
//class ClientServer {
//public:
//	void ShowClients(std::vector<Client*>clients) {
//		for (const auto& it : clients)
//			it->Pay();
//	}
//};
// O - open closed princeple
//class Animal {
//private:
//	std::string _type;
//public:
//	Animal(std::string type) : _type(type){ }
//	//virtual std::string GetType() = 0 
//	virtual std::string GetSound() = 0;
//};
//class Cow : public Animal {
//public:
//	Cow() : Animal("Cow"){}
//	std::string GetSound() override {
//		return "MUUUUUU";
//	}
//};
//class Cat : public Animal {
//public:
//	Cat() : Animal("Cat") {}
//	std::string GetSound() override {
//		return "Mrrrrr";
//	}
//};
//class Dog : public Animal {
//public:
//	Dog() : Animal("Dog") {}
//	std::string GetSound() override {
//		return "Gav";
//	}
//};
//void AnimalSound(Animal& animal) { // Функция открыта для модификации, но также добавить некоторые элементы, это не практично, как это через Class
//	/*if (animal.GetType() == "Lion")
//		std::cout << "RRRRRRRRR";
//	else
//		if(animal.GetType() == "Cat")
//			std::cout << "Mrrrr";
//		else
//			if (animal.GetType() == "Dog")
//				std::cout << "GAV-GAV";
//			else
//				if (animal.GetType() == "Cow")
//					std::cout << "MUUUUUUUUUUUU";*/
//	std::cout << animal.GetSound() << "\n\n";
//}

class Vector {
private:
	int _size;
	int* _massivPTR;
public:
	Vector() {
		_size = 0;
		_massivPTR = nullptr;
	}
	void Push_Back(int element) {
		_size++;
		int* newMassiv = new int[_size];
		if (_massivPTR == nullptr) {
			newMassiv[0] = element;
			_massivPTR = newMassiv;
			return;
		}
		for (int i = 0; i < _size - 1; i++)
			newMassiv[i] = _massivPTR[i];
		newMassiv[_size - 1] = element;

		delete[]_massivPTR;
		
		_massivPTR = newMassiv;
	}
	void ShowElements() {
		for (int i = 0; i < _size ; i++)
			std::cout << i << " element: " << _massivPTR[i] << '\n';

	}


};


int main(){
	/*Cat* cat = new Cat();
	Cow* cow = new Cow();
	Dog* dog = new Dog();
	AnimalSound(*cat);
	AnimalSound(*cow);
	AnimalSound(*dog);*/

	// Task 1
	Vector* vector = new Vector();
	vector->Push_Back(20);
	vector->Push_Back(25);
	vector->Push_Back(30);
	vector->Push_Back(35);
	vector->Push_Back(12);
	vector->Push_Back(50);
	vector->ShowElements();









	return 0;
}