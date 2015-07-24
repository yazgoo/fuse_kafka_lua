fuse_kafka_input_plugin_lua.so: src/plugins/input/lua.c
	gcc -fPIC -g -shared -Isrc -I/usr/include/lua5.2 -I../fuse_kafka/src $^ -o $@ -ltolua -llua5.2
clean:
	rm fuse_kafka_input_plugin_lua.so
