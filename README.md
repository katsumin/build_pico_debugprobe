# build_pico_debugprobe

Build Container for debugprobe

# requirement

- Windows
  - Docker Desktop

# usage

1. up container
   ```sh
   PS D:\user\projects\build_pico_debugprobe> docker compose up -d
   [+] Building 1.9s (9/9) FINISHED                                                                                                      docker:desktop-linux
   => [pico_probe internal] load build definition from Dockerfile                                                                                       0.0s
   => => transferring dockerfile: 284B                                                                                                                  0.0s
   => [pico_probe internal] load metadata for docker.io/library/ubuntu:jammy                                                                            1.6s
   => [pico_probe internal] load .dockerignore                                                                                                          0.1s
   => => transferring context: 2B                                                                                                                       0.0s
   => [pico_probe 1/4] FROM docker.io/library/ubuntu:jammy@sha256:58b87898e82351c6cf9cf5b9f3c20257bb9e2dcf33af051e12ce532d7f94e3fe                      0.0s
   => CACHED [pico_probe 2/4] RUN apt update                                                                                                            0.0s
   => CACHED [pico_probe 3/4] RUN apt upgrade -y                                                                                                        0.0s
   => CACHED [pico_probe 4/4] RUN apt install -y     git     python3-pip     cmake gcc-arm-none-eabi     libnewlib-arm-none-eabi     build-essential    0.0s
   => [pico_probe] exporting to image                                                                                                                   0.0s
   => => exporting layers                                                                                                                               0.0s
   => => writing image sha256:8672c5e95711801e4140e70a1221ff5b2be1b1f008de25843f6aabf6b4fd66ee                                                          0.0s
   => => naming to docker.io/library/build_pico_debugprobe-pico_probe                                                                                   0.0s
   => [pico_probe] resolving provenance for metadata file                                                                                               0.0s
   [+] Running 2/2
   ✔ Network build_pico_debugprobe_default  Created                                                                                                     0.1s
   ✔ Container pico_probe                   Started                                                                                                     0.6s
   ```
1. build debugprobe
   ```sh
   PS D:\user\projects\build_pico_debugprobe> docker compose exec -it pico_probe bash
   root@1eb627ee026e:/pico# sh ./build.sh
   Using PICO_SDK_PATH from environment ('/pico/pico-sdk')
   PICO_SDK_PATH is /pico/pico-sdk
   Defaulting platform (PICO_PLATFORM) to 'rp2040' since not specified.
   Defaulting target board (PICO_BOARD) to 'pico' since not specified.
   Using board configuration from /pico/pico-sdk/src/boards/include/boards/pico.h
   Pico Platform (PICO_PLATFORM) is 'rp2040'.
   -- Defaulting build type to 'Release' since not specified.
   Defaulting compiler (PICO_COMPILER) to 'pico_arm_cortex_m0plus_gcc' since not specified.
   Configuring toolchain based on PICO_COMPILER 'pico_arm_cortex_m0plus_gcc'
   Defaulting PICO_GCC_TRIPLE to 'arm-none-eabi'
   -- The C compiler identification is GNU 10.3.1
   :
   [ 96%] Building C object CMakeFiles/debugprobe.dir/freertos/timers.c.obj
   [ 97%] Building C object CMakeFiles/debugprobe.dir/pico/pico-sdk/src/rp2_common/hardware_exception/exception.c.obj
   [ 98%] Building C object CMakeFiles/debugprobe.dir/freertos/portable/MemMang/heap_1.c.obj
   [100%] Linking CXX executable debugprobe_on_pico.elf
   [100%] Built target debugprobe
   root@1eb627ee026e:/pico#
   ```
