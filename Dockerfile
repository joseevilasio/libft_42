FROM ubuntu:latest

RUN apt update && \
    apt install -y apt-utils \
                   build-essential \
                   cmake \
                   cmake-curses-gui \
                   python3

ENV PATH /libft_42

WORKDIR $PATH

COPY src/ $PATH/src

COPY tests/ $PATH/tests

COPY CMakeLists.txt $PATH

COPY Makefile $PATH

COPY install.sh $PATH

CMD ["/bin/bash"]