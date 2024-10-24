#include <iostream>
#include<iomanip>
#include<stdlib.h>
#include<conio.h>

using namespace std;

void main()
{
	setlocale(LC_ALL, "Rus");
	srand((unsigned int)time(NULL));

	void minMatrix(float[5][5]);
	void maxMatrix(float[5][5]);
	void maxDownTriangleMatrix(float[5][5]);
	void minDownTriangleMatrix(float[5][5]);
	void maxUpTriangleMatrix(float[5][5]);
	void minUpTriangleMatrix(float[5][5]);
	void minMainDiagonaleMatrix(float[5][5]);
	void maxMainDiagonaleMatrix(float[5][5]);
	void minSecondDiagonaleMatrix(float[5][5]);
	void maxSecondDiagonaleMatrix(float[5][5]);
	void midleVariableMatrix(float[5][5]);
	void midleVariableDownTriangleMatrix(float[5][5]);
	void midleVariableUpTriangleMatrix(float[5][5]);
	void sumLinesMatrix(float[5][5]);
	void sumColumnMatrix(float[5][5]);
	void minLinesMatrix(float[5][5]);
	void maxLinesMatrix(float[5][5]);
	void minColumnMatrix(float[5][5]);
	void maxColumnMatrix(float[5][5]);
	void midleVariableLinesMatrix(float[5][5]);
	void midleVariableColumnMatrix(float[5][5]);
	void sumTrianglesMatrix(float[5][5]);
	void anotherMidleVariableMatrix(float[5][5]);

	float m[5][5];
	int i, j;
	for (i = 0; i < 5; i++) 
		for (j = 0; j < 5; j++) 
			m[i][j] = rand()/10;
	cout << "�������� �������\n\n";
	for (i = 0; i < 5; i++) 
	{
		for (j = 0; j < 5; j++)
			cout << setw(8) << setprecision(5) << m[i][j];
		cout << endl<<endl;
	}
	minMatrix(m);
	maxMatrix(m);
	maxDownTriangleMatrix(m);
	minDownTriangleMatrix(m);
	maxUpTriangleMatrix(m);
	minUpTriangleMatrix(m);
	minMainDiagonaleMatrix(m);
	maxMainDiagonaleMatrix(m);
	minSecondDiagonaleMatrix(m);
	maxSecondDiagonaleMatrix(m);
	midleVariableMatrix(m);
	midleVariableDownTriangleMatrix(m);
	midleVariableUpTriangleMatrix(m);
	sumLinesMatrix(m);
	sumColumnMatrix(m);
	minLinesMatrix(m);
	maxLinesMatrix(m);
	minColumnMatrix(m);
	maxColumnMatrix(m);
	midleVariableLinesMatrix(m);
	midleVariableColumnMatrix(m);
	sumTrianglesMatrix(m);
	anotherMidleVariableMatrix(m);
}

void minMatrix(float m[5][5])
{
	float x = m[0][0];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			if (m[i][j] < x) x = m[i][j];
	cout << "������� �������: " << x <<endl;
}

void maxMatrix(float m[5][5])
{
	float x = m[0][0];
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			if (m[i][j] > x) x = m[i][j];
	cout << "�������� �������: " << x << endl;
}

void maxDownTriangleMatrix(float m[5][5])
{
	float x = m[0][0];
	float bound = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < bound; j++)
			if (x < m[i][j]) x = m[i][j];
		bound++;
	}
	cout << "�������� ���������������� ����� �������: " << x <<endl;
}

void minDownTriangleMatrix(float m[5][5])
{
	float x = m[0][0];
	float bound = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < bound; j++)
			if (x > m[i][j]) x = m[i][j];
		bound++;
	}
	cout << "������� ���������������� ����� �������: " << x <<endl;
}

void maxUpTriangleMatrix(float m[5][5])
{
	float x = m[0][0];
	int bound = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = bound; j < 5; j++)
			if (x < m[i][j]) x = m[i][j];
		bound++;
	}
	cout << "�������� ����������������� ����� �������: " << x << endl;
}

void minUpTriangleMatrix(float m[5][5])
{
	float x = m[0][0];
	int bound = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = bound; j < 5; j++)
			if (x > m[i][j]) x = m[i][j];
		bound++;
	}
	cout << "������� ����������������� ����� �������: " << x << endl;
}

void minMainDiagonaleMatrix(float m[5][5])
{
	float x = m[0][0];
	for (int i = 0; i < 5; i++)
		if (m[i][i] < x)
			x = m[i][i];
	cout << "������� ������� ��������� �������: " << x << endl;
}

void maxMainDiagonaleMatrix(float m[5][5])
{
	float x = m[0][0];
	for (int i = 0; i < 5; i++)
		if (m[i][i] > x)
			x = m[i][i];
	cout << "�������� ������� ��������� �������: " << x << endl;
}

void minSecondDiagonaleMatrix(float m[5][5])
{
	float x = m[0][4];
	int j = 4;
	for (int i = 0; i < 5; i++) 
	{
		if (m[i][j] < x)
			x = m[i][j];
		j--;
	}
	cout << "������� �������������� ��������� �������: " << x << endl;
}

void maxSecondDiagonaleMatrix(float m[5][5])
{
	float x = m[0][4];
	int j = 4;
	for (int i = 0; i < 5; i++)
	{
		if (m[i][j] > x)
			x = m[i][j];
		j--;
	}
	cout << "�������� �������������� ��������� �������: " << x << endl;
}

void midleVariableMatrix(float m[5][5])
{
	float x = 0;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			x += m[i][j];
	cout << "�������������������� �������� ��������� �������: " << (x/25) << endl;
}

void midleVariableDownTriangleMatrix(float m[5][5])
{
	float x = 0;
	float bound = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < bound; j++)
			x += m[i][j];
		bound++;
	}
	cout << "�������������������� �������� ���������������� ����� �������: " << (x / 15) << endl;
}

void midleVariableUpTriangleMatrix(float m[5][5])
{
	float x = 0;
	int bound = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = bound; j < 5; j++)
			x += m[i][j];
		bound++;
	}
	cout << "�������������������� �������� ����������������� ����� �������: " << (x / 15) << endl;
}

void sumLinesMatrix(float m[5][5])
{
	cout << endl;
	float x = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			x += m[i][j];
		cout << "����� " << i+1 << " ������: " << x << endl;
		x = 0;
	}
}

void sumColumnMatrix(float m[5][5])
{
	cout << endl;
	float x = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			x += m[j][i];
		cout << "����� " << i + 1 << " �������: " << x << endl;
		x = 0;
	}
}

void minLinesMatrix(float m[5][5])
{
	cout << endl;
	float x;
	for (int i = 0; i < 5; i++)
	{	
		x = m[i][0];
		for (int j = 0; j < 5; j++)
			if (x > m[i][j])
				x = m[i][j];
		cout << "����������� �������� " << i + 1 << " ������: " << x << endl;
	}
}

void maxLinesMatrix(float m[5][5])
{
	cout << endl;
	float x;
	for (int i = 0; i < 5; i++)
	{
		x = m[i][0];
		for (int j = 0; j < 5; j++)
			if (x < m[i][j])
				x = m[i][j];
		cout << "������������ �������� " << i + 1 << " ������: " << x << endl;
	}
}

void minColumnMatrix(float m[5][5])
{
	cout << endl;
	float x;
	for (int i = 0; i < 5; i++)
	{
		x = m[0][i];
		for (int j = 0; j < 5; j++)
			if (x > m[j][i])
				x = m[j][i];
		cout << "����������� �������� " << i + 1 << " �������: " << x << endl;
	}
}

void maxColumnMatrix(float m[5][5])
{
	cout << endl;
	float x;
	for (int i = 0; i < 5; i++)
	{
		x = m[0][i];
		for (int j = 0; j < 5; j++)
			if (x < m[j][i])
				x = m[j][i];
		cout << "������������ �������� " << i + 1 << " �������: " << x << endl;
	}
}

void midleVariableLinesMatrix(float m[5][5])
{
	cout << endl;
	float x = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
			x += m[i][j];
		cout << "�������������������� �������� " << i + 1 << " ������: " << x/5 << endl;
		x = 0;
	}
}

void midleVariableColumnMatrix(float m[5][5])
{
	cout << endl;
	float x = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
				x += m[j][i];
		cout << "�������������������� �������� " << i + 1 << " �������: " << x/5 << endl;
		x = 0;
	}
}

void sumTrianglesMatrix(float m[5][5])
{
	cout << endl;
	float x = 0;
	float bound = 1;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < bound; j++)
			x += m[i][j];
		bound++;
	}
	cout << "����� ��������� ���������������� ����� �������: " << x << endl;
	x = 0;
	bound = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = bound; j < 5; j++)
			x += m[i][j];
		bound++;
	}
	cout << "����� ��������� ����������������� ����� �������: " << x << endl;
}

void anotherMidleVariableMatrix(float m[5][5])
{
	int x = 0, xUp, xDown, result;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			x += m[i][j];
	x /= 25;
	xDown = 0;
	xUp = 99999;
	// ����� ��������� �������� �������  c ������ �������
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			if (m[i][j] < x)
				if (xDown < m[i][j])
					xDown = m[i][j];
	//����� ��������� �������� ������� � ����� �������
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
			if (m[i][j] > x)
				if (xUp > m[i][j])
					xUp = m[i][j];
	
	if ((x - xDown) < (xUp - x))
		result = xDown;
	else
		result = xUp;
	cout << "������� �������, �������� ������� � ��������������������� (" << x << ") �����: " << result<<endl;
}