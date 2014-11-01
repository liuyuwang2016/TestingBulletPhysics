// TestingBulletPhysics.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "BasicDemo.h"
#include "SoftBodyDemo.h"
#include "CollisionFilteringDemo.h"
#include "FreeGlutCallbacks.h"

int main(int argc, char* argv[])
{
	/* swap these statements to launch a different demo */
	//BasicDemo demo;
	/*ADD*/		//CollisionFilteringDemo demo;
	/*ADD*/ SoftBodyDemo demo;
	return glutmain(argc, argv, 1024, 768, "Introduction to Game Physics with Bullet Physics and OpenGL", &demo);
}

