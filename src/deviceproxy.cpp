#include "deviceproxy.h"

DeviceProxyBase::DeviceProxyBase(DeviceKey key)
{
	OSDebugOut("ctor (%s)\n", key.name.c_str());
	RegisterDevice::instance().Add(key, this);
}
