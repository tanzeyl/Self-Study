#include <windows.h>
#include <iostream>

int main()
{
	while(true)
	{
		if (GetAsyncKeyState(VK_ESCAPE))
		{
			std::cout << "DUDE! You've pressed the escape key";
			std::cin.ignore();
		}
	}
	return 0;
}
