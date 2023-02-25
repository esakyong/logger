#include "logger.h"

int main()
{
	const char* name = "User";
	int a = 3;
	LOG_INFO("Hello %s", name);
	Logger::Info("Hey %s %d", name, a);
	return 0;
}