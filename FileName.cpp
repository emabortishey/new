#include "Fraction.h"

enum meow { SUM = 1, SUB, DIV, MULT };

int main()
{
	setlocale(LC_ALL, "Russian");

	int choice;
	int num, den, bufn, bufd, count = 0;

	Fraction main{ 1, 8 };
	Fraction users{ 2, 8};

	cout << "������� ���������� ���������, � ����� ����������� ��� ������� ������ �����, ��� ������� ����� ������������� ��� ��������: \n\n";
	cin >> num >> den;

	main.set_num(num);
	main.set_den(den);

	do {

		if (count == 0)
		{
			cout << "\n\n������� ���������� ���������, � ����� ����������� ��� �������� ������ �����, � ������� ������� ����� ������������� ��� ����������� ��������: \n\n";
		}
		else
		{
			cout << "\n\n������� ����� �������� �����: ";
		}

		count++;

		cin >> num >> den;

		users.set_num(num);
		users.set_den(den);

		cout << "\n������� ��� �����:\n\n1. �������� ������\n2. ��������� ������\n3. ������� ������\n4. ��������� ������\n\n";

		cin >> choice;

		switch (choice)
		{
		case SUM:
		{
			/*bufn = users.get_num();
			bufd = users.get_den();
			main.sum(bufn, bufd);

			cout << "�������� ����� ������������ �:" << main.get_num() << "\\" << main.get_den();*/

			cout << (main + users).get_num() << '\n' << main.get_den() << "\n\n";

			break;
		}
		case SUB:
		{
			/*bufn = users.get_num();
			bufd = users.get_den();
			main.sub(bufn, bufd);

			cout << "�������� ����� ������������ �:" << main.get_num() << "\\" << main.get_den();*/

			cout << (main - users).get_num() << '\n' << main.get_den() << "\n\n";

			break;
		}
		case DIV:
		{
			/*bufn = users.get_num();
			bufd = users.get_den();
			main.div(bufn, bufd);

			cout << "�������� ����� ������������ �:" << main.get_num() << "\\" << main.get_den();*/

			cout << (main / users).get_num() << '\n' << main.get_den() << "\n\n";

			break;
		}
		case MULT:
		{
			/*bufn = users.get_num();
			bufd = users.get_den();
			main.mult(bufn, bufd);

			cout << "�������� ����� ������������ �:" << main.get_num() << "\\" << main.get_den();*/

			cout << (main * users).get_num() << '\n' << main.get_den() << "\n\n";

			break;
		}
		}
	} while (choice != 0);

	return 0;
}
