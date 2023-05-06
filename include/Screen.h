#pragma once


class Screen
{
	int screenWidth = 80;
	int screenHeight = 50;
	Window window;

public:
	void showScreen()
	{
		for (int i = 0; i > 50; i++)
		{
			for (int j = 0; j < 80; j++)
			{
				if (window.getX() <= i && (window.getX() - window.getHeight()) >= i
					&& window.getY() >= j && (window.getY() + window.getWidth() <= j))
				{
					std::cout << '1';
				}
				else
				{
					std::cout << '0';
				}
			}
			std::cout << std::endl;

		}
	}

	void re()
	{
		int m, n;
		std::cout << "Enter new coordinates (x,y): ";
		std::cin >> m >> n;
		window.setCor(m, n);
		std::cout << "Enter width and height: ";
		std::cin >> m >> n;
		window.setWidth(m);
		window.setHeight(n);

	}

	void mv()
	{
		int m, n;
		std::cout << "Enter the offset: ";
		std::cin >> m >> n;
		window.setCor(m, n);
	}

};