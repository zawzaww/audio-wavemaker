/* src/mian/cpp/Oscillator.h
 *
 * Osciallator C++ header file
 *
 * Created by zawzaw on 02/04/2019.
 */

#include <atomic>
#include <stdint.h>

#ifndef AUDIO_WAVEMAKER_OSCILLATOR_H
#define AUDIO_WAVEMAKER_OSCILLATOR_H

class Oscillator {
public:
    void setWaveOn(bool isWaveOn);

    void setSampleRate(int32_t sampleRate);

    void render(float *audioData, int32_t numFrames);

private:
    std::atomic<bool> isWaveOn_{false};
    double phase_ = 0.0;
    double phaseIncrement_ = 0.0;
};

#endif //AUDIO_WAVEMAKER_OSCILLATOR_H
