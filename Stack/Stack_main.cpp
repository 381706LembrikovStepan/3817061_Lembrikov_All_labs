#include "../StackLib/Stack.h"
#include <cstdlib> 

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "������ ������������� �����" << endl << "\n������� ������ �����: ";
	int n;
	cin >> n;
	try
	{
		TStack<int> stack(n);
		for (int i = 0; i < n; i++)
			stack.Put(i);

		cout << "\����: \n";
		stack.PrintStack();

		TStack<int> copyStack(stack);
		cout << "\n\n����������� ����� :\n";
		copyStack.PrintStack();

		if (copyStack == stack)
			cout << "\n\n�������� � ������������� ����� �����";

		cout << "\n\n������ ������� �� �����: " << stack.Get();

		cout << "\n\n������������ ����:\n";
		stack.PrintStack();

		if (copyStack != stack)
			cout << "\n\n������������ � �������� ����� ������\n";
	}

	catch (MyException exp)
	{
		exp.Print();
	}
	return 0;
}