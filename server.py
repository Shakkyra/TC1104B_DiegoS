from http.server import BaseHTTPRequestHandler, HTTPServer

PORT = 8000

class MyServer(BaseHTTPRequestHandler):
    def _set_response(self):
        self.send_response(200)
        self.send_header('Content-type', 'text/html')
        self.end_headers()
    def do_GET(self):
        print("hola desde el gettt 2")
        if "/sensor1_temp" in self.path:
            sensor1_temp = self.path.split("=")[1]
            print("La temperatura es {}".format(sensor1_temp))
        self._set_response()
        self.wfile.write("Hola este es mi servidor!. GET request for {}".format(self.path).encode('utf-8'))

port = 8080
server_adress = ('', port)
hhtpd = HTTPServer(server_adress,MyServer)
hhtpd.serve_forever()


#en el link del puerto abierto ingresar /sensor1_temp=#### en el path
#Se guarda en una variable y lo imprime en consola