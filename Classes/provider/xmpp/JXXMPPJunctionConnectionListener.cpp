/*
 *  JXXMPPJunctionConnectionListener.cpp
 *  JXWhiteboard
 *
 *  Created by Alexander Favaro on 10/12/10.
 *  Copyright 2010 Stanford University. All rights reserved.
 *
 */

#include "JXXMPPJunctionConnectionListener.h"
#include "JXXMPPJunctionCInterface.h"
#include <gloox/connectionlistener.h>
#include <gloox/gloox.h>

JunctionConnectionListener::JunctionConnectionListener(void *junction) : ConnectionListener() {
	this->junction = junction;
}

void JunctionConnectionListener::onConnect() {}

void JunctionConnectionListener::onDisconnect(ConnectionError e) {
	junctionOnDisconnect(junction, e);
}

void JunctionConnectionListener::onResourceBindError(const Error *error) {}

void JunctionConnectionListener::onSessionCreateError(const Error *error) {}

bool JunctionConnectionListener::onTLSConnect(const CertInfo &info) { return true; }
