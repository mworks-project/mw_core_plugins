/*
 *  HID_IODeviceFactory.h
 *  HIDPlugin
 *
 *  Created by labuser on 8/18/08.
 *  Copyright 2008 MIT. All rights reserved.
 *
 */

#ifndef HID_IO_DEVICE_FACTORY_H
#define HID_IO_DEVICE_FACTORY_H

#include "MWorksCore/ComponentFactory.h"
#include "MWorksCore/ComponentRegistry.h"

class mHIDFactory : public mw::ComponentFactory {
	virtual boost::shared_ptr<mw::Component> createObject(std::map<std::string, std::string> parameters,
														  mw::ComponentRegistry *reg);
};

#endif

