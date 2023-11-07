#ifndef UNIQUE_ID_GENERATOR_HPP
#define UNIQUE_ID_GENERATOR_HPP

#include <sstream>

class UniqueIdGenerator
{
public:
	UniqueIdGenerator();
	static size_t GenerateId();

private:
	static size_t m_counter;
};

#endif // UNIQUE_ID_GENERATOR_HPP
