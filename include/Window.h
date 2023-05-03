#pragma once

class Window
{
	int x;
	int y;

	int width;
	int height;

public:

	void setWindow()
	{
		int xNew, yNew;
		std::cout << "Enter coordinates of the window: ";
		std::cin >> xNew >> yNew;
	}

};