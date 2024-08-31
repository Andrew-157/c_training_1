FROM ubuntu:latest

WORKDIR /

COPY ./entrypoint.sh .

ENTRYPOINT [ "/entrypoint.sh" ]