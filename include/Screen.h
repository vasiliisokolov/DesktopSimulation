#pragma once


class Screen
{
	int screenWidth = 80;
	int screenHeight = 50;
	Window window;

public:
	void showScreen()
	{
		int a = window.getX();
		int b = window.getY();
		int c = window.getX() + window.getWidth();
		int d = window.getY() + window.getHeight();
		for (int i = 0; i < 50; i++)
		{
			for (int j = 0; j < 80; j++)
			{
				if ((i >= b && i <=d) && (j >= a && j <= c))
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
		/*check:
		std::cout << "X: " << window.getX() << std::endl;
		std::cout << "Y: " << window.getY() << std::endl;
		std::cout << "W: " << window.getWidth() << std::endl;
		std::cout << "H: " << window.getHeight() << std::endl;*/
	}

	void mv()
	{
		int m, n;
		std::cout << "Enter the offset: ";
		std::cin >> m >> n;
		window.setCor(m, n);
		/*check:
		std::cout << "X: " << window.getX() << std::endl;
		std::cout << "Y: " << window.getY() << std::endl;
		std::cout << "W: " << window.getWidth() << std::endl;
		std::cout << "H: " << window.getHeight() << std::endl; */
	}

};