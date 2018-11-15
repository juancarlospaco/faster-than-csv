FROM nimlang/nim
RUN rm -rf /tmp/*
RUN apt-get update -y --quiet
RUN apt-get install -y python3-pip python3-numpy
RUN apt-get clean -y
RUN pip3 install --upgrade pip==18.1
RUN pip3 install --upgrade pandas==0.23.4
RUN nimble -y refresh
RUN nimble -y install nimpy
ADD src/faster_than_csv.nim /tmp/
RUN nim c -d:release --app:lib --out:/tmp/faster_than_csv.so /tmp/faster_than_csv.nim
ADD benchmark.py /tmp/
ADD sample.csv /tmp/
ADD run-benchmark.sh /tmp/
RUN rm -rf /var/lib/apt/lists/* /var/tmp/* /tmp/nimblecache/ /tmp/*.nim
