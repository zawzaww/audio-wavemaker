/* src/main/cpp/AudioEngine.h
 *
 * AudioEngine C++ header file
 *
 * Created by zawzaw on 02/04/2019.
 */

#include <aaudio/AAudio.h>
#include "Oscillator.h"

#ifndef AUDIO_WAVEMAKER_AUDIOENGINE_H
#define AUDIO_WAVEMAKER_AUDIOENGINE_H

class AudioEngine {
public:
    bool start();

    void stop();

    void restart();

    void setTonOn(bool isTonOn);

public:
    Oscillator oscillator_;
    AAudioStream *stream_;
};

#endif //AUDIO_WAVEMAKER_AUDIOENGINE_H
