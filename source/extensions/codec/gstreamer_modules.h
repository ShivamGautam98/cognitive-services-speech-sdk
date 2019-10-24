//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//
// gstreamer_modules.cpp
//

#pragma once

#include <gst/gst.h>

// The following list has to be maintained same as the one in $(SourceRoot)/ci/android/gstreamer/Android.mk
// Please search for base_gstreamer.h or base_gstreamer.cpp

#if defined(ANDROID) || defined(__ANDROID__)
extern "C"
{
    GST_PLUGIN_STATIC_DECLARE(coreelements);
    GST_PLUGIN_STATIC_DECLARE(app);
    GST_PLUGIN_STATIC_DECLARE(audioconvert);
    GST_PLUGIN_STATIC_DECLARE(mpg123);
    GST_PLUGIN_STATIC_DECLARE(audioresample);
    GST_PLUGIN_STATIC_DECLARE(audioparsers);
    GST_PLUGIN_STATIC_DECLARE(ogg);
    GST_PLUGIN_STATIC_DECLARE(opusparse);
    GST_PLUGIN_STATIC_DECLARE(opus);
    GST_PLUGIN_STATIC_DECLARE(wavparse);
    GST_PLUGIN_STATIC_DECLARE(alaw);
    GST_PLUGIN_STATIC_DECLARE(mulaw);
    GST_PLUGIN_STATIC_DECLARE(flac);
}
#endif

namespace Microsoft {
namespace CognitiveServices {
namespace Speech {
namespace Impl {

__attribute__((visibility ("default"))) void spx_gst_init();

} } } } // Microsoft::CognitiveServices::Speech::Impl