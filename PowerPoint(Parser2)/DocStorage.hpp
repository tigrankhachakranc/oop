#ifndef DOC_STORAGE_HPP
#define DOC_STORAGE_HPP

#include <memory>
#include <unordered_map>
#include <string>

#include "IObjectController.hpp"

class DocumentStorage
{
public:
	void RemoveObject(const std::string &ObjectForRemove);
	void AddObject(const std::string &ObjectForAdd);

private:
	DocumentStorage() = default;
};
using DocumentStoragePtr = std::shared_ptr<DocumentStorage>;

#endif // DOC_STORAGE_HPP
