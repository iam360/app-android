#include "../stereo/monoStitcher.hpp"

#ifndef OPTONAUT_STEREO_SINK_HEADER
#define OPTONAUT_STEREO_SINK_HEADER

namespace optonaut {
    class StereoSink {
    public:
        virtual void Push(StereoImage stereo) = 0;
        virtual void Finish(std::vector<std::vector<InputImageP>> &leftRings, 
                            std::vector<std::vector<InputImageP>> &rightRings,
                            const std::map<size_t, double> &gains) = 0;
	};
}

#endif
