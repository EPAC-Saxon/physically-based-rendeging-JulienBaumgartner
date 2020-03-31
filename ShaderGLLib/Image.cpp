#include "Image.h"

#include <algorithm>
#include <fstream>
#include <vector>
#include <tuple>
#include <assert.h>
#define STB_IMAGE_IMPLEMENTATION
#include <stb_image.h>

namespace sgl {

	Image::Image(const std::string& file)
	{
		unsigned char* value;
		int width;
		int height;
		int channel;

		image_ = stbi_load(file.c_str(), &width, &height, &channel, STBI_rgb_alpha);
		if (image_ == NULL)
		{
			throw std::runtime_error("Unable to load file: " + file);
		}

		dx_ = static_cast<size_t>(width);
		dy_ = static_cast<size_t>(height);
	}

	Image::~Image()
	{
		stbi_image_free(image_);
	}

}	// End namespace sgl.
