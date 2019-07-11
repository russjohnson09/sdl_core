Scanning dependencies of target HMI_API
Building CXX object src/components/interfaces/CMakeFiles/HMI_API.dir/HMI_API_schema.cc.o


taking a very long time.


stopped and restart


still at 10% taking a long time w/ no output.




outputs variables being set
make -p


make VERBOSE=1



ed -Wvla -fuse-ld=gold  -DDEBUG -g3 -ggdb3   -o CMakeFiles/HMI_API.dir/HMI_API_schema.cc.o -c /build/src/components/interfaces/HMI_API_schema.cc
c++: internal compiler error: Killed (program cc1plus)
Please submit a full bug report,
with preprocessed source if appropriate.



              total        used        free      shared  buff/cache   available
Mem:           2.0G         88M        1.8G         56K         69M        1.8G
Swap:          1.0G        197M        826M



root@44a715a44eec:/build# sudo swapon /swapfile
swapon: /swapfile: swapon failed: Operation not permitted



https://forums.docker.com/t/docker-swap-space/3908






#FROM TEST SUITE
Every 60 seconds there is some timeout between core and the test suite. It is not sending the policy update response back but
is doing the request to the server.



07-11 14:24:23.522 26241-26289/io.livio.sdltestsuite.app1 I/RpcConverter: name  -  OnSystemRequest
2019-07-11 14:24:23.522 26241-26289/io.livio.sdltestsuite.app1 I/RpcConverter: parameters  -  {requestType=PROPRIETARY, fileType=JSON, url=http://192.168.1.57:4005/api/v1/production/policy, length=10000, timeout=500, offset=1000}
2019-07-11 14:24:23.523 26241-26289/io.livio.sdltestsuite.app1 I/RpcConverter: correlationID  -  -1
2019-07-11 14:24:23.523 26241-26289/io.livio.sdltestsuite.app1 I/SdlProxy: 4.8.1: RpcConverter Attempting to create com.smartdevicelink.proxy.rpc.OnSystemRequest
2019-07-11 14:24:23.778 26241-26315/io.livio.sdltestsuite.app1 I/sendSystemRequestToUrl: sent to sdl
2019-07-11 14:24:23.782 26241-26290/io.livio.sdltestsuite.app1 I/com.smartdevicelink.transport.TCPTransport: TCPTransport: sendBytesOverTransport requested. Size: 73258, Offset: 0, Length: 73258, Current state is: CONNECTED
2019-07-11 14:24:23.782 26241-26290/io.livio.sdltestsuite.app1 I/com.smartdevicelink.transport.TCPTransport: TCPTransport: sendBytesOverTransport request accepted. Trying to send data
2019-07-11 14:24:23.786 26241-26290/io.livio.sdltestsuite.app1 I/com.smartdevicelink.transport.TCPTransport: TCPTransport.sendBytesOverTransport: successfully send data
2019-07-11 14:24:23.953 26241-26289/io.livio.sdltestsuite.app1 I/RpcConverter: name  -  SystemRequest
2019-07-11 14:24:23.954 26241-26289/io.livio.sdltestsuite.app1 I/RpcConverter: parameters  -  {resultCode=SUCCESS, success=true}
2019-07-11 14:24:23.954 26241-26289/io.livio.sdltestsuite.app1 I/RpcConverter: correlationID  -  65535
2019-07-11 14:24:23.954 26241-26289/io.livio.sdltestsuite.app1 I/SdlProxy: 4.8.1: RpcConverter Attempting to create com.smartdevicelink.proxy.rpc.SystemRequestResponse
2019-07-11 14:25:24.558 26241-26289/io.livio.sdltestsuite.app1 I/RpcConverter: name  -  OnSystemRequest
2019-07-11 14:25:24.558 26241-26289/io.livio.sdltestsuite.app1 I/RpcConverter: parameters  -  {requestType=PROPRIETARY, fileType=JSON, url=http://192.168.1.57:4005/api/v1/production/policy, length=10000, timeout=500, offset=1000}
2019-07-11 14:25:24.558 26241-26289/io.livio.sdltestsuite.app1 I/RpcConverter: correlationID  -  -1
2019-07-11 14:25:24.558 26241-26289/io.livio.sdltestsuite.app1 I/SdlProxy: 4.8.1: RpcConverter Attempting to create com.smartdevicelink.proxy.rpc.OnSystemRequest
2019-07-11 14:25:24.737 26241-26435/io.livio.sdltestsuite.app1 I/sendSystemRequestToUrl: sent to sdl
2019-07-11 14:25:24.738 26241-26290/io.livio.sdltestsuite.app1 I/com.smartdevicelink.transport.TCPTransport: TCPTransport: sendBytesOverTransport requested. Size: 73258, Offset: 0, Length: 73258, Current state is: CONNECTED
2019-07-11 14:25:24.738 26241-26290/io.livio.sdltestsuite.app1 I/com.smartdevicelink.transport.TCPTransport: TCPTransport: sendBytesOverTransport request accepted. Trying to send data
2019-07-11 14:25:24.741 26241-26290/io.livio.sdltestsuite.app1 I/com.smartdevicelink.transport.TCPTransport: TCPTransport.sendBytesOverTransport: successfully send data
2019-07-11 14:25:24.950 26241-26289/io.livio.sdltestsuite.app1 I/RpcConverter: name  -  SystemRequest
2019-07-11 14:25:24.950 26241-26289/io.livio.sdltestsuite.app1 I/RpcConverter: parameters  -  {resultCode=SUCCESS, success=true}
2019-07-11 14:25:24.950 26241-26289/io.livio.sdltestsuite.app1 I/RpcConverter: correlationID  -  65535
2019-07-11 14:25:24.951 26241-26289/io.livio.sdltestsuite.app1 I/SdlProxy: 4.8.1: RpcConverter Attempting to create com.smartdevicelink.proxy.rpc.SystemRequestResponse
