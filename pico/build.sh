git clone https://github.com/raspberrypi/pico-sdk.git
cd pico-sdk
git submodule update --init
cd ..
export PICO_SDK_PATH=/pico/pico-sdk
git clone https://github.com/raspberrypi/debugprobe.git
cd debugprobe
git submodule update --init
cmake -DDEBUG_ON_PICO=ON .
make
