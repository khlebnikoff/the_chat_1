
#include "Chat.h"

using namespace std;


auto main() -> int
{
	Chat chat;
	chat.Start();
	while (chat.isOnline())
	{
		chat.showLoginMenu();
		while (chat.getCurrentUser())
		{
			chat.showUserMenu();
		}

	}
	return 0;
}
