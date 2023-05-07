#pragma once


class Window
{
	int x = 0;
	int y = 0;

	int width = 0;
	int height = 0;

public:

	void setCor(int m, int n)
	{
		if (m > 80)	m = 80;
		if (m < 0)	m = 0;
		x = m;
		if (n > 50)	n = 50;
		if (n < 0)	n = 0;
		y = n;
	}

	void setWidth(int w)
	{
		if (w < 0) w = 0;
		if ((w + x) > 80) w = 80 - x;
		width = w;
	}

	void setHeight(int h)
	{
		if (h < 0) h = 0;
		if ((h + y) > 50) h = 50 - y;
		height = h;
	}

	int getX()
	{
		return x;
	}

	int getY()
	{
		return y;
	}

	int getWidth()
	{
		return width;
	}

	int getHeight()
	{
		return height;
	}
};