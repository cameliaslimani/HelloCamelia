#ifndef HELLOCAMELIA_H
#define HELLOCAMELIA_H

#include <maya/MArgList.h>
#include <maya/MObject.h>
#include <maya/MGlobal.h>
#include <maya/MPxCommand.h>

class HelloCamelia : public MPxCommand {
public:
	HelloCamelia() {};
	virtual MStatus doIt(const MArgList&);
	static void* creator();
};
#endif // !HELLOCAMELIA_H
