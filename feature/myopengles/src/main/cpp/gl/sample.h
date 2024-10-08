#ifndef OTAMESHIAPP_SAMPLE_H
#define OTAMESHIAPP_SAMPLE_H

#include "sample_helper.h"

void postFrontBuffer(GLApp* app);

RawPixelImage* loadImage(GLApp* app, const char* file_name);
void freeImage(GLApp* app, RawPixelImage* image);

void sample1_initialize();
void sample1_resized(GLApp* app, int width, int height);
void sample1_rendering(GLApp* app, int width, int height);
void sample1_destroy(GLApp* app);

void sample2_initialize();
void sample2_resized(GLApp* app, int width, int height);
void sample2_rendering(GLApp* app, int width, int height);
void sample2_destroy(GLApp* app);

void sample3_initialize(GLApp* app);
void sample3_resized(GLApp* app, int width, int height);
void sample3_rendering(GLApp* app, int width, int height);
void sample3_destroy(GLApp* app);

void sample4_initialize(GLApp* app);
void sample4_resized(GLApp* app, int width, int height);
void sample4_rendering(GLApp* app, int width, int height);
void sample4_destroy(GLApp* app);

#endif //OTAMESHIAPP_SAMPLE_H
