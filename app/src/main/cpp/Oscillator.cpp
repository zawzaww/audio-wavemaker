/* src/mian/cpp/Oscillator.cpp
 *
 * This C++ class generates digital audio data using a simple
 * mathematical formula for calculating a sinusoidal waveform.
 *
 * Created by zawzaw on 02/04/2019.
 */

#include "Oscillator.h"
#include <math.h>

#define TWO_PI (3.14159 * 2)
#define AMPLITUDE 0.3
#define FREQUENCY 440.0

void Oscillator::setSampleRate(int32_t sampleRate) {
    phaseIncrement_ = (TWO_PI * FREQUENCY) / (double) sampleRate;
}

void Oscillator::setWaveOn(bool isWaveOn) {
    isWaveOn_.store(isWaveOn);
}

void Oscillator::render(float *audioData, int32_t numFrames) {
    if (!isWaveOn_.load()) phase_ = 0;

    for (int i = 0; i < numFrames; ++i) {
        if (isWaveOn_.load()) {
            audioData[i] = (float) (sin(phase_) * AMPLITUDE);

            phase_ += phaseIncrement_;
            if (phase_ > TWO_PI) phase_ -= TWO_PI;
        } else {
            audioData[i] = 0;
        }
    }

}

