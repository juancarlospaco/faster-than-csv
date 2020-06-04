FROM nimlang/nim
RUN rm -rf /tmp/*
RUN apt-get update -y --quiet ; apt-get install -y python3-pip python3-numpy
RUN pip3 install --upgrade pip==20.1.1 ; pip3 install --upgrade pandas==0.24.2
RUN nimble -y refresh ; nimble -y install nimpy@0.1.0
ADD src/faster_than_csv.nim /tmp/
RUN nim c -d:danger --app:lib --passL:"-s" --gc:markAndSweep --passC:"-march=native" --passC:"-flto" --passC:"-ffast-math" --out:/tmp/faster_than_csv.so /tmp/faster_than_csv.nim
ADD benchmark.py /tmp/
ADD sample.csv /tmp/
ADD run-benchmark.sh /tmp/
RUN rm -rf /var/lib/apt/lists/* /var/tmp/* /tmp/nimblecache/ /tmp/*.nim
