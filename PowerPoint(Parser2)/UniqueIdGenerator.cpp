#include "UniqueIdGenerator.hpp"

size_t UniqueIdGenerator::m_counter{0};
	
size_t UniqueIdGenerator::GenerateId(){
	return m_counter++;
}

