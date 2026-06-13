#include <ESP8266WiFi.h>

const char* ssid = "YourHotspotName";
const char* password = "YourHotspotPassword";

WiFiServer server(80);

String data = "";
String statusMsg = "SAFE ENVIRONMENT";
String color = "#2ecc71"; // green

void setup() {
  Serial.begin(9600);

  WiFi.begin(ssid, password);

  Serial.print("Connecting to WiFi");
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("\nConnected!");
  Serial.print("IP Address: ");
  Serial.println(WiFi.localIP());

  server.begin();
}

void loop() {

  // Read Arduino data
  while (Serial.available()) {
    char c = Serial.read();
    data += c;

    if (c == '\n') {
      data.trim();

      if (data == "GAS") {
        statusMsg = "🚨 GAS LEAK DETECTED!";
        color = "#e74c3c";
      }
      else if (data == "TEMP") {
        statusMsg = "🔥 HIGH TEMPERATURE!";
        color = "#f39c12";
      }
      else {
        statusMsg = "✅ SAFE ENVIRONMENT";
        color = "#2ecc71";
      }

      data = "";
    }
  }

  WiFiClient client = server.available();

  if (client) {
    client.readStringUntil('\r');
    client.flush();

    client.println("HTTP/1.1 200 OK");
    client.println("Content-Type: text/html");
    client.println("Connection: close");
    client.println();

    client.println("<!DOCTYPE html><html>");
    client.println("<head>");
    client.println("<meta name='viewport' content='width=device-width, initial-scale=1'>");
    client.println("<meta http-equiv='refresh' content='2'>");

    client.println("<style>");
    client.println("body { font-family: Arial; background:#0f172a; color:white; text-align:center; }");
    client.println(".card { background:#1e293b; padding:20px; margin:20px; border-radius:15px;} ");
    client.println(".status { font-size:28px; font-weight:bold; padding:20px; border-radius:10px; }");
    client.println("</style>");

    client.println("</head><body>");

    client.println("<h1>🏭 Hazard Monitoring Dashboard</h1>");

    client.println("<div class='card'>");
    client.println("<h2>Status</h2>");
    client.println("<div class='status' style='background:" + color + ";'>");
    client.println(statusMsg);
    client.println("</div></div>");

    client.println("</body></html>");

    client.stop();
  }
} Thus is the code