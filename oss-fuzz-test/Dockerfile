FROM gcr.io/oss-fuzz-base/base-builder
RUN git clone https://github.com/klausware/oss-fuzz-test
COPY build.sh $SRC/
WORKDIR $SRC/oss-fuzz-test
