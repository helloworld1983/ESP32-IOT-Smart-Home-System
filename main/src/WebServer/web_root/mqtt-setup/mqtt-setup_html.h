#ifndef MQTT_SETUP_HTML
#define MQTT_SETUP_HTML

static unsigned char mqtt_setup_html[] = 
"<!DOCTYPE html>"
"<html>\n"
"<head>\n"
  "<meta charset=\"UTF-8\">\n"
  "<title>Configure MQTT<</title>\n"
"</head>\n"
"<body>\n"
  "<div style=\"zoom: 340%;\">"
    "<h1>Configure MQTT</h1>"
    "<form action=\"wifi-setup\" method=\"post\">"
      "<table>"
        "<tbody>"
          "<tr>"
            "<td>MQTT USERNAME:</td>"
            "<td><input name=\"username\" type=\"text\"></td>"
          "</tr>"
          "<tr>"
            "<td>MQTT PASSWORD:</td>"
            "<td><input name=\"password\" type=\"text\"></td>"
          "</tr>"
          "<tr>"
            "<td>CLIENT ID:</td>"
            "<td><input name=\"id\" type=\"text\"></td>"
          "</tr>"
          "<tr>"
            "<td>MQTT SERVER:</td>"
            "<td><input name=\"server\" type=\"text\"></td>"
          "</tr>"
          "<tr>"
            "<td>MQTT PORT:</td>"
            "<td><input name=\"port\" type=\"text\"></td>"
          "</tr>"
          "<tr>"
            "<td>NAME YOUR DEVICE:</td>"
            "<td><input name=\"name\" type=\"text\"></td>"
          "</tr>"
        "</tbody>"
      "</table>"
      "<p><input type=\"submit\" value=\"Submit\"></p>"
    "</form>"
  "</div>"
"</body>\n"
"</html>\n";

#endif