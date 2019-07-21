#include <stdio.h>
#include <stdint.h>
#include <winsock.h>


uint32_t my_ntohl(uint32_t n)
{
	uint32_t temp = (n >> 24) & 0x000000FF | (n >> 8) & 0x0000FF00 | (n << 8) & 0x00FF0000 | (n << 24) & 0xFF000000;
	
	return temp;
}


int main(void)
{
	uint8_t packet[] = {0x12, 0x34, 0x56, 0x78};

	uint32_t* p = reinterpret_cast<uint32_t*>(packet);

	uint32_t ip = *p;

	ip = my_ntohl(ip);

	printf("%x\n", ip);



	return 0;
}