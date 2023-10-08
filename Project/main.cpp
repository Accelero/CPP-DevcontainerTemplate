#include <iostream>
#include <unistd.h>

int main()
{
	char hostname[64];
	std::cout << "Hello from within a Docker container!" << std::endl;
	gethostname(hostname, 64);
	std::cout << "Hostname: " << hostname << std::flush;
	return 0;
}
