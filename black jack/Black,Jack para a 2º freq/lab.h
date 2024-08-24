#include <stdlib.h>
#include <stdio.h>
#include <Windows.h>

//coloca o Cursor na posicao X,Y
BOOL setxy(int x, int y)
{
	COORD c = { x,y };
	return SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}


//desenha um retangulo com linhas duplas na posicao X,Y com as dimensoes Width e Height 
void DrawRect(int x, int y, int width, int height )
{
	int i;
	setxy(x, y);
	printf("%c", 201);
	for ( i = 1; i < width; i++) {
		printf("%c", 205);
	}

	printf("%c", 187);
	setxy(x, height + y);
	printf("%c", 200);

	for ( i = 1; i < width; i++) {
		printf("%c", 205);
	}

	printf("%c", 188);

	for ( i = y + 1; i < height + y; i++)
	{
		setxy(x, i);
		printf("%c", 186);

		setxy(x + width, i);
		printf("%c", 186);

	}
}

//desenha um retangulo com linhas duplas na posicao X,Y com as dimensoes Width e Height 
void DrawRectPos(int x, int y, int width, int height, int curPosX, int curPosY)
{
	int i;
	setxy(x, y);
	printf("%c", 201);
	for (i = 1; i < width; i++) {
		printf("%c", 205);
	}

	printf("%c", 187);
	setxy(x, height + y);
	printf("%c", 200);

	for (i = 1; i < width; i++) {
		printf("%c", 205);
	}

	printf("%c", 188);

	for (i = y + 1; i < height + y; i++)
	{
		setxy(x, i);
		printf("%c", 186);

		setxy(x + width, i);
		printf("%c", 186);

	}
	setxy(curPosX, curPosY);
}