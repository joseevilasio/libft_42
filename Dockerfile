
FROM ubuntu as ubuntu-build-base

ENV PATH /libft_42

WORKDIR $PATH

RUN apt update -y; \
    apt upgrade -y; \
    apt install -y build-essential libboost-all-dev python3; \
	apt-get -y install cmake-curses-gui \
    apt clean -y

COPY src/ $PATH/src

COPY tests/ $PATH/tests

COPY CMakeLists.txt $PATH

COPY Makefile $PATH

CMD [ "make libft" ]