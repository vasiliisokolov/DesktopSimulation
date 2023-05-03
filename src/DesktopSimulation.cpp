#include "DesktopSimulation.h"


enum operation
{
	move = 0,
	resize = 1,
	display = 2,
	close = 3
};

int main()
{
	std::cout << "Hello CMake." << std::endl;
	
	int op;
	while (true)
	{
		std::cout << "Choose the operation: ";
		std::cin >> op;
		if (op > 3 || op < 0)
		{
			std::cerr << "Error! Wrong operation! Try again!" << std::endl;
		}
		else
		{
			switch (op)
			{
			case operation::move:
				
				break;
			case operation::resize:
				
				break;
			case operation::display:
				
				break;
			case operation::close:

				return 0;

			}
		}
	}
}
