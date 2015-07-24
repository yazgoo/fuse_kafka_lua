function sleep(n)
    os.execute("sleep " .. tonumber(n))
end
while 1 do
    output_write("test", "tost")
    sleep(1)
end
