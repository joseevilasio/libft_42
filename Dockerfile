FROM ubuntu:latest

RUN apt update && \
    apt install -y apt-utils \
                   coreutils \
                   util-linux \
                   bash \
                   git \
                   clang \
                   build-essential \
                   cmake \
                   cmake-curses-gui \
                   python3 \
                   python3-pip \
                   python3.10-venv

WORKDIR /workspace

COPY src/ /workspace/src

COPY tests/ /workspace/tests

COPY CMakeLists.txt /workspace

COPY Makefile /workspace

COPY install.sh /workspace

RUN ./install.sh

CMD ["/bin/bash"]