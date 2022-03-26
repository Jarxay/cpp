#include <iostream>
#include <Windows.h>



int main() {
	std::cout << "Clicker" << std::endl;
	SetConsoleTitleA("Clicker");
	int selector;
	std::cout << "[1] | Left Clicker" << std::endl;
	std::cout << "[2] | Right Clicker" << std::endl;
	std::cout << "[3] | Both Clicker" << std::endl;
	std::cin >> selector;

	switch (selector) {
	case 1:
		std::cout << "test";
		while (1) {
			while (1) {
				if (GetAsyncKeyState(VK_XBUTTON2) & 0x8000) {
					mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
					mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
					Sleep(42);
				}
			}
		}
	case 2:
		while (1) {
			while (1) {
				if (GetAsyncKeyState(VK_XBUTTON2) & 0x8000) {
					mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
					mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
					Sleep(1);
				}
			}





	case 3:
		while (1) {
			if (GetAsyncKeyState(VK_XBUTTON2) & 0x8000) {
				mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
				mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
				Sleep(43);
			}

			if (GetAsyncKeyState(VK_XBUTTON1) & 0x8000) {
				mouse_event(MOUSEEVENTF_RIGHTDOWN, 0, 0, 0, 0);
				mouse_event(MOUSEEVENTF_RIGHTUP, 0, 0, 0, 0);
				Sleep(1);
			}
		}
		}
	}
}
