MAIN_DIR := .
SRC_DIR := src
CAYENNE_MQTT_CLIENT_DIR := $(SRC_DIR)/CayenneMQTTClient
CAYENNE_UTILS_DIR := $(SRC_DIR)/CayenneUtils
MQTT_COMMON_DIR := $(SRC_DIR)/MQTTCommon
PLATFORM_DIR := $(SRC_DIR)/Platform/esp32
WIFI_DIR := $(SRC_DIR)/WiFi
STORAGE_DIR := $(SRC_DIR)/Storage
HTTP_SERVER_DIR := $(SRC_DIR)/HttpServer
CAYENNE_DIR := $(SRC_DIR)/Cayenne
MONGOOSE_DIR := $(HTTP_SERVER_DIR)/Mongoose

MAIN_OBJS := $(MAIN_DIR)/main.o
CAYENNE_MQTT_CLIENT_OBJS := $(CAYENNE_MQTT_CLIENT_DIR)/CayenneMQTTClient.o $(CAYENNE_MQTT_CLIENT_DIR)/MQTTClient.o
CAYENNE_UTILS_OBJS := $(CAYENNE_UTILS_DIR)/CayenneDataArray.o $(CAYENNE_UTILS_DIR)/CayenneUtils.o
MQTT_COMMON_OBJS := $(MQTT_COMMON_DIR)/MQTTConnectClient.o $(MQTT_COMMON_DIR)/MQTTDeserializePublish.o $(MQTT_COMMON_DIR)/MQTTPacket.o $(MQTT_COMMON_DIR)/MQTTSerializePublish.o $(MQTT_COMMON_DIR)/MQTTSubscribeClient.o $(MQTT_COMMON_DIR)/MQTTUnsubscribeClient.o
PLATFORM_OBJS := $(PLATFORM_DIR)/Network.o $(PLATFORM_DIR)/Timer.o
WIFI_OBJS := $(WIFI_DIR)/esp32iot_wifi.o
STORAGE_OBJS := $(STORAGE_DIR)/esp32iot_storage.o
HTTP_SERVER_OBJS := $(HTTP_SERVER_DIR)/esp32iot_http_server.o
CAYENNE_OBJS := $(CAYENNE_DIR)/esp32iot_cayenne.o
MONGOOSE_OBJS := $(MONGOOSE_DIR)/mongoose.o

COMPONENT_EMBED_TXTFILES := $(CAYENNE_DIR)/cacert.pem
COMPONENT_EMBED_TXTFILES += $(CAYENNE_DIR)/prvtkey.pem

COMPONENT_OBJS = $(MAIN_OBJS) $(CAYENNE_MQTT_CLIENT_OBJS) $(CAYENNE_UTILS_OBJS) $(MQTT_COMMON_OBJS) $(PLATFORM_OBJS) $(WIFI_OBJS) $(STORAGE_OBJS) $(HTTP_SERVER_OBJS) $(CAYENNE_OBJS) $(MONGOOSE_OBJS)

COMPONENT_PRIV_INCLUDEDIRS := $(MAIN_DIR) $(CAYENNE_MQTT_CLIENT_DIR) $(CAYENNE_UTILS_DIR) $(MQTT_COMMON_DIR) $(PLATFORM_DIR) $(WIFI_DIR) $(STORAGE_DIR) $(HTTP_SERVER_DIR) $(CAYENNE_DIR) $(MONGOOSE_DIR)
COMPONENT_SRCDIRS := $(MAIN_DIR) $(CAYENNE_MQTT_CLIENT_DIR) $(CAYENNE_UTILS_DIR) $(MQTT_COMMON_DIR) $(PLATFORM_DIR) $(WIFI_DIR) $(STORAGE_DIR) $(HTTP_SERVER_DIR) $(CAYENNE_DIR) $(MONGOOSE_DIR)