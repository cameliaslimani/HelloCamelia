#include "HelloCameliaCmd.h"
#include <maya/MFnPlugin.h>

void* HelloCamelia::creator() { return new HelloCamelia; }

MStatus HelloCamelia::doIt(const MArgList& argList) {
	MGlobal::displayInfo("Hello Camelia");
	return MS::kSuccess;
}

MStatus initializePlugin(MObject obj) {
	MFnPlugin plugin(obj, "Camelia Slimani", "1.0", "Any");
	MStatus status = plugin.registerCommand("helloCamelia", HelloCamelia::creator);
	CHECK_MSTATUS_AND_RETURN_IT(status);
	return status;
}

MStatus uninitializePlugin(MObject obj) {
	MFnPlugin plugin(obj);
	MStatus status = plugin.deregisterCommand("helloCamelia");
	CHECK_MSTATUS_AND_RETURN_IT(status);
	return status;
}
