FROM ubuntu:jammy

RUN apt update
RUN apt upgrade -y

RUN apt install -y \
    git \
    python3-pip \
    cmake gcc-arm-none-eabi \
    libnewlib-arm-none-eabi \
    build-essential \
    g++ \
    libstdc++-arm-none-eabi-newlib

