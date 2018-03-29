#ifndef INDEX_HTML
#define INDEX_HTML

const static unsigned char index_html_header[] = 
"HTTP/1.1 200 OK\r\n" \
"Content-Type: text/html\r\n" \
"\r\n";

const static unsigned char index_html[] =

"<!DOCTYPE html><html lang=\"en\" >  <head>    <meta charset=\"UTF-8\">    <title>>ESP32IOT Manager: Configure WiFi</title>    <meta name=\"viewport\" content=\"width=device-width, initial-scale=1, user-scalable=yes\">    <style media=\"screen\" type=\"text/css\">      @import url(https://fonts.googleapis.com/css?family=Roboto:300);      .login-page {        width: 360px;        padding: 8% 0 0;        margin: auto;      }      .form {        position: relative;        z-index: 1;        background: #FFFFFF;        max-width: 360px;        margin: 0 auto 100px;        padding: 45px;        text-align: center;        box-shadow: 0 0 20px 0 rgba(0, 0, 0, 0.2), 0 5px 5px 0 rgba(0, 0, 0, 0.24);      }      .form input {        font-family: \"Roboto\", sans-serif;        outline: 0;        background: #f2f2f2;        width: 100%;        border: 0;        margin: 0 0 15px;        padding: 15px;        box-sizing: border-box;        font-size: 14px;      }      .form button {        font-family: \"Roboto\", sans-serif;        text-transform: uppercase;        outline: 0;        background: #4CAF50;        width: 100%;        border: 0;        padding: 15px;        color: #FFFFFF;        font-size: 14px;        -webkit-transition: all 0.3 ease;        transition: all 0.3 ease;        cursor: pointer;      }      .form button:hover,.form button:active,.form button:focus {        background: #43A047;      }      .form .message {        margin: 15px 0 0;        color: #b3b3b3;        font-size: 12px;      }      .form .message a {        color: #4CAF50;        text-decoration: none;      }      .form .register-form {        display: none;      }      .container {        position: relative;        z-index: 1;        max-width: 300px;        margin: 0 auto;      }      .container:before, .container:after {        content: \"\";        display: block;        clear: both;      }      .container .info {        margin: 50px auto;        text-align: center;      }      .container .info h1 {        margin: 0 0 15px;        padding: 0;        font-size: 36px;        font-weight: 300;        color: #1a1a1a;      }      .container .info span {        color: #4d4d4d;        font-size: 12px;      }      .container .info span a {        color: #000000;        text-decoration: none;      }      .container .info span .fa {        color: #EF3B3A;      }      body {        background: #76b852; /* fallback for old browsers */        background: -webkit-linear-gradient(right, #76b852, #8DC26F);        background: -moz-linear-gradient(right, #76b852, #8DC26F);        background: -o-linear-gradient(right, #76b852, #8DC26F);        background: linear-gradient(to left, #76b852, #8DC26F);        font-family: \"Roboto\", sans-serif;        -webkit-font-smoothing: antialiased;        -moz-osx-font-smoothing: grayscale;            }    </style>    <script type=\"text/javascript\">      $('.message a').click(function(){        $('form').animate({height: \"toggle\", opacity: \"toggle\"}, \"slow\");      });    </script>  </head>  <body>    <div class=\"login-page\">      <div class=\"form\">        <form class=\"login-form\" action=\"/wifi-setup-menu \" >          <button  type=\"submit\" method=\"get\">Configure WiFi</button>        </form>        <form class=\"login-form\" action=\"/mqtt-setup-menu \" >          <button type=\"submit\" method=\"get\">Configure MQTT</button>        </form>        <form class=\"login-form\" action=\"/erase-wifi-data \" >          <button type=\"submit\" method=\"post\">Erase WiFi data</button>        </form>        <form class=\"login-form\"  action=\"/reset_restart_counter \" >          <button type=\"submit\" method=\"post\">Reset restart counter</button>        </form>        <form class=\"login-form\"  action=\"/ble_test \" >          <button type=\"submit\" method=\"post\">BLE test</button>        </form>        <form class=\"login-form\"  action=\"/restart \" >          <button type=\"submit\" method=\"post\">Restart</button>        </form>      </div>    </div>  </body></html>"

;

/*"<link rel=\"stylesheet\" href=\"https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css\" integrity=\"sha384-BVYiiSIFeK1dGmJRAkycuHAHRg32OmUcww7on3RYdg4Va+PmSTsz/K68vbdEjh4u\" crossorigin=\"anonymous\">\r\n" \
"<link rel=\"stylesheet\" href=\"https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap-theme.min.css\" integrity=\"sha384-rHyoN1iRsVXV4nD0JutlnGaslCJuC7uwjduW9SVrLvRYooPp2bWYgmgJQIXwl/Sp\" crossorigin=\"anonymous\">\r\n" \
"<script src=\"https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js\" integrity=\"sha384-Tc5IQib027qvyjSMfHjOMaLkfuWVxZxUPnCJA7l2mCWNIpG9mGCD8wGNIcPD7Txa\" crossorigin=\"anonymous\"></script>\r\n" \
*/
#endif