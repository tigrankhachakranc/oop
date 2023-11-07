#ifndef I_OBJECT_CONTROLLER_HPP
#define I_OBJECT_CONTROLLER_HPP

#include <memory>

class IObjectController
{
public:
	virtual void RemoveObject(const IObject &ObjectForAdd) = 0;
	virtual void AddObject(const IObject &ObjectForRemove) = 0;
};

using IObjectControllerPtr = std::shared_ptr<IObjectController>;

#endif // I_OBJECT_CONTROLLER_HPP
