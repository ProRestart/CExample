#include <iostream>
using namespace std;
/**
* @brief кастомка класса стек
*/
class MyStack {
private:
	int size = -1;
	int mus[100];
public:



	/**
	 * @brief добавление нов элемента
	 * @param elem доб элемент
	*/
	MyStack() {}
	void push(int elem) {
		mus[size + 1] = elem;
		size++;
	}
	/**
	 * @brief  возвращение элемента
	 * @param elem текущиий элемент
	 * @return размер
	*/
	int top() {
		return mus[size];
	}
	/**
 * @brief уменьшение размера
 * @param elem размер
*/
	void pop() {
		size--;
	}
	/**
 * @brief проверка на пустоту
 * @param elem пуста ли
 * @return 1||0
*/
	bool isEmpty() {
		return (size == -1);
	}
	/**
 * @brief узнаём размер
 * @param elem размер
 * @return размер
*/
	int getSize() {
		return size;
	}
};

int main() {
	MyStack st;
	for (int i = 0; i < 10; i++) {
		int tmp = rand() % 20;
		cout << tmp << " ";
		st.push(tmp);
	}
	cout << endl;
	for (int i = 0; i < 10; i++) {
		cout << st.top() << " ";
		st.pop();
	}
	cout << endl << st.isEmpty() << endl;
}