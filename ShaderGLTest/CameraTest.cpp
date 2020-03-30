#include "CameraTest.h"

namespace test {

	TEST_F(CameraTest, CreationCameraTest)
	{
		EXPECT_FALSE(camera_);
		camera_ = std::make_shared<sgl::Camera>(sgl::vector3(0.f, 0.f, 4.f));
		EXPECT_TRUE(camera_);
	}

} // End namespace test.
