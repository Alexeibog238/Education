/*Памятка string a[23](s0,..,s22)-array
do{}while(k<0)-постусловие;while(k<0){}-предусловие for(int i=0;i<=10;i++)-Счётчик
int,float,double,char,string*/

#include <iostream> //Работа с консолью
#include <string>//Работа со строками
#include<Time.h>//Работта с дватой
using namespace std;//Используем пространство имен std
double Calc() {
	cout << "Число1/Знакдействия/Число2(For example:2+2)\n";
	double *number1 = new double;
	char *symbol = new char;
	double *number2 = new double;
	cin >> *number1; cin >> *symbol; cin >> *number2;
	switch (*symbol) {
	case '+':return (*number1 + *number2); break;
	case'-':return (*number1 - *number2); break;
	case'/':return (*number1 / *number2); break;
	case'*':return (*number1 * *number2); break;
	default:return(-0.00); break;
	} delete number1; delete number2; delete symbol;
};
void Array(int f) {
	string* fg = new string[f];
	cout << "Введите элемент массива\n";
	for (int i = 0; i < f; i++) {
		string a;
		cout << "[" << i << "]:";
		cin >> a;
		fg[i] = a;}
	string* str = new string;
	cout << "Вывод\n";
	for (int i = 0; i < f; i++) {
		cout << "[" << i << "]:" << fg[i] << '\n'; *str = *str + fg[i];
	}; cout << *str; cin >> *str; delete str;
}
//begin
void Game() {
	int f;
	cout << "\n";
	cin >> f;
};
//END
/*Комментарий*/
int main() {//main(int g) этот параметр можно забросить при включении проги через cmd 'название проги' параметры
	setlocale(0, "");//Кирилица в консоли
	cout << "Привет. Ты по делу?\nОтвечай Y/N\n";
	char* c = new char;//Указатель *с-значение &c-адресс
	cin >> *c;//Ввод
	if (*c == 'Y') {
		int i = 0;
		do {
			cout << "Шо трэба?\nA:Массив.\nС:Колькулятор.\nG:Игра.\nM:Многоразовый калькулятор.\nH:Hello World!\nR:Привет мир!\nE:Ничего!\n";//Вывод
			cin >> *c;
			system("cls");
			switch (*c) {
			case 'A': {cout << "Кол-во элементов массива\n"; int f; cin >> f; Array(f);  }break;
			case 'C': {cout << Calc(); cout << "\n"; } break;
			case 'G': {cout << "Игра начинается! Выберите сложность от 0(всё само выходит) до 4(Это не реально).\n"; Game(); }break;
			case 'M': {int* g = new int(0); while (*g < 1) { cout << Calc(); cout << "\n"; }delete g; }; break;
			case 'E': {i = 1; cout << "Тогда вали!\n"; } break;
			}cin >> *c;
			system("cls");
		} while (i == 1);
	}
	else if (*c == '2') { cout << "end1"; }
	else {
		system("cls");
		cout << "Тогда не лезь. Я занят. Мне ещё твои банковские данные на сервер отправлять.\nА, точно.По братски, не отключай интернет часок-другой.";
		return(0);
	}
};
