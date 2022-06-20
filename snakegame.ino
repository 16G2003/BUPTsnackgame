#include <U8g2lib.h>
#include <Wire.h>
#include <ESP8266WiFi.h>
U8G2_SSD1306_128X64_NONAME_1_HW_I2C u8g2(U8G2_R0, U8X8_PIN_NONE);
const static unsigned char FACE_Smile[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x07,0x00,0xC0,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x0F,0x00,0xE0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x0F,0x00,0xE0,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x1F,0x00,0xF0,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x1F,0x00,0xF0,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x1F,0x00,0xF0,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x0F,0x00,0xE0,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x0F,0x00,0xE0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x03,0x00,0x80,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0xE0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0xF8,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x83,0x7F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 };
const static unsigned char FACE_Wink[] PROGMEM ={0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x07,0x00,0xE0,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,0xF0,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x3F,0x00,0xF0,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x30,0x10,0x00,0xF0,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0xC0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x00,0xF0,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x00,0x7E,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0xFF,0x3F,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xE0,0xFF,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00 };

#define server_ip "bemfa.com" //巴法云服务器地址默认即可
#define server_port "8344" //服务器端口，tcp创客云端口8344

//********************需要修改的部分*******************//

#define wifi_name  "newhtc"     //WIFI名称，区分大小写，不要写错
#define wifi_password   "qq123456"  //WIFI密码
String UID = "7d54f85af42976ee3c2693e692a6bb59";  //用户私钥，可在控制台获取,修改为自己的UID
String TOPIC = "light002";         //主题名字，可在控制台新建

//**************************************************//
//最大字节数
#define MAX_PACKETSIZE 512
//设置心跳值60s
#define KEEPALIVEATIME 60*1000
//tcp客户端相关初始化，默认即可
WiFiClient TCPclient;
String TcpClient_Buff = "";//初始化字符串，用于接收服务器发来的数据
unsigned int TcpClient_BuffIndex = 0;
unsigned long TcpClient_preTick = 0;
unsigned long preHeartTick = 0;//心跳
unsigned long preTCPStartTick = 0;//连接
bool preTCPConnected = false;
//相关函数初始化
//连接WIFI
void doWiFiTick();
void startSTA();

//TCP初始化连接
void doTCPClientTick();
void startTCPClient();
void sendtoTCPServer(String p);


/*
  *发送数据到TCP服务器
 */
void sendtoTCPServer(String p){
  if (!TCPclient.connected()) 
  {
    Serial.println("Client is not readly");
    return;
  }
  TCPclient.print(p);
}


/*
  *初始化和服务器建立连接
*/
void startTCPClient(){
  if(TCPclient.connect(server_ip, atoi(server_port))){
    Serial.print("\nConnected to server:");
    Serial.printf("%s:%d\r\n",server_ip,atoi(server_port));
    
    String tcpTemp="";  //初始化字符串
    tcpTemp = "cmd=1&uid="+UID+"&topic="+TOPIC+"\r\n"; //构建订阅指令
    sendtoTCPServer(tcpTemp); //发送订阅指令
    tcpTemp="";//清空
    /*
     //如果需要订阅多个主题，可再次发送订阅指令
      tcpTemp = "cmd=1&uid="+UID+"&topic="+主题2+"\r\n"; //构建订阅指令
      sendtoTCPServer(tcpTemp); //发送订阅指令
      tcpTemp="";//清空
     */
    
    preTCPConnected = true;
    preHeartTick = millis();
    TCPclient.setNoDelay(true);
  }
  else{
    Serial.print("Failed connected to server:");
    Serial.println(server_ip);
    TCPclient.stop();
    preTCPConnected = false;
  }
  preTCPStartTick = millis();
}


/*
  *检查数据，发送心跳
*/
void doTCPClientTick(){
 //检查是否断开，断开后重连
   if(WiFi.status() != WL_CONNECTED) return;
  if (!TCPclient.connected()) {//断开重连
  if(preTCPConnected == true){
    preTCPConnected = false;
    preTCPStartTick = millis();
    Serial.println();
    Serial.println("TCP Client disconnected.");
    TCPclient.stop();
  }
  else if(millis() - preTCPStartTick > 1*1000)//重新连接
    startTCPClient();
  }
  else
  {
    if (TCPclient.available()) {//收数据
      char c =TCPclient.read();
      TcpClient_Buff +=c;
      TcpClient_BuffIndex++;
      TcpClient_preTick = millis();
      
      if(TcpClient_BuffIndex>=MAX_PACKETSIZE - 1){
        TcpClient_BuffIndex = MAX_PACKETSIZE-2;
        TcpClient_preTick = TcpClient_preTick - 200;
      }
      preHeartTick = millis();
    }
    if(millis() - preHeartTick >= KEEPALIVEATIME){//保持心跳
      preHeartTick = millis();
      Serial.println("--Keep alive:");
      sendtoTCPServer("ping\r\n"); //发送心跳，指令需\r\n结尾，详见接入文档介绍
    }
  }
  if((TcpClient_Buff.length() >= 1) && (millis() - TcpClient_preTick>=200))
  {
    TCPclient.flush();
    Serial.print("Rev string: ");
    TcpClient_Buff.trim(); //去掉首位空格
    Serial.println(TcpClient_Buff); //打印接收到的消息
    String getTopic = "";
    String getMsg = "";
    if(TcpClient_Buff.length() > 15){//注意TcpClient_Buff只是个字符串，在上面开头做了初始化 String TcpClient_Buff = "";
          //此时会收到推送的指令，指令大概为 cmd=2&uid=xxx&topic=light002&msg=off
          int topicIndex = TcpClient_Buff.indexOf("&topic=")+7; //c语言字符串查找，查找&topic=位置，并移动7位，不懂的可百度c语言字符串查找
          int msgIndex = TcpClient_Buff.indexOf("&msg=");//c语言字符串查找，查找&msg=位置
          getTopic = TcpClient_Buff.substring(topicIndex,msgIndex);//c语言字符串截取，截取到topic,不懂的可百度c语言字符串截取
          getMsg = TcpClient_Buff.substring(msgIndex+5);//c语言字符串截取，截取到消息
          Serial.print("topic:------");
          Serial.println(getTopic); //打印截取到的主题值
          Serial.print("msg:--------");
          Serial.println(getMsg);   //打印截取到的消息值
   }
   
   
   TcpClient_Buff="";
   TcpClient_BuffIndex = 0;
  }
}
/*
  *初始化wifi连接
*/
void startSTA(){
  WiFi.disconnect();
  WiFi.mode(WIFI_STA);
  WiFi.begin(wifi_name, wifi_password);
}



/**************************************************************************
                                 WIFI
***************************************************************************/
/*
  WiFiTick
  检查是否需要初始化WiFi
  检查WiFi是否连接上，若连接成功启动TCP Client
  控制指示灯
*/
void doWiFiTick(){
  static bool startSTAFlag = false;
  static bool taskStarted = false;
  static uint32_t lastWiFiCheckTick = 0;

  if (!startSTAFlag) {
    startSTAFlag = true;
    startSTA();
  }

  //未连接1s重连
  if ( WiFi.status() != WL_CONNECTED ) {
    if (millis() - lastWiFiCheckTick > 1000) {
      lastWiFiCheckTick = millis();
    }
  }
  //连接成功建立
  else {
    if (taskStarted == false) {
      taskStarted = true;
      Serial.print("\r\nGet IP Address: ");
      Serial.println(WiFi.localIP());
      startTCPClient();
    }
  }
}











/***********************************************/
/*#define x A0//摇杆X轴，对应引脚A0
#define y A1//摇杆y轴，对应引脚A1*/
#define button 2//摇杆按键，对应引脚D2

#define UP 1
#define DOWN 2
#define RIGHT 3
#define LEFT 4
#define A 5




/***********************************************/
int x_flag=533;//摇杆x轴中立值
int y_flag=521;//摇杆y轴中立值

int box_x = 0;//边框x坐标
int box_y = 12;//边框y坐标
//int box_width = 2;
int box_x_length = 128;//边框的长
int box_y_length = 52;//边框的宽

int snake_max_length = 100; //蛇身体最大长度
int snake_x[100];//蛇身x坐标
int snake_y[100];//蛇身y坐标
int snake_body_width = 3; //蛇身方块宽度（正方形）
int food_x;//食物位置坐标x
int food_y;//食物位置坐标y
int snake_length = 3; //定义初始化蛇身长度
unsigned int game_speed;//设置游戏速度
/***********************************************/
void setup(void){//初始化函数
  Serial.begin(9600);
  u8g2.setI2CAddress(0x3C*2);
  u8g2.begin();
  u8g2.enableUTF8Print();
  
 /*pinMode(A0, INPUT);
  pinMode(A1, INPUT);*/
  pinMode(button, INPUT_PULLUP);
  
  welcome();//欢迎界面
}
void loop(void){//主循环函数
  snake();
}
/***********************************************/
void welcome()
{
 while(digitalRead(button)){
    u8g2.setFont(u8g2_font_timR14_tf);
    u8g2.setFontPosTop();
    u8g2.firstPage();
    do{
      u8g2.setCursor(0,0);
      u8g2.drawXBMP(20,10,89,64,FACE_Smile);
      u8g2.print("   Snake Game");
    }while(u8g2.nextPage());
    for(int i=0;i<400;i++){
      if(!digitalRead(button)){
        return;
      }
      delay(1);
    }
    u8g2.firstPage();
    do{
      u8g2.setCursor(0,0);
      u8g2.drawXBMP(20,10,89,64,FACE_Wink);
      u8g2.print("   Snake Game");
    }while(u8g2.nextPage());
    for(int i=0;i<400;i++){
      if(!digitalRead(button)){
        return;
      }
      delay(1);
    }
 }
}

/***********************************************/
/*int read_key()//按键状态判断
{
  int key_temp;
  if(abs(analogRead(y)-y_flag)>abs(analogRead(x)-x_flag) && abs(analogRead(y)-y_flag)>20){
    if(analogRead(y)<y_flag){
      key_temp = UP;
      return key_temp;        
    }
    else{
      key_temp = DOWN;
      return key_temp;      
    }
  }
  else if(abs(analogRead(y)-y_flag)<abs(analogRead(x)-x_flag) && abs(analogRead(x)-x_flag)>20){
    if(analogRead(x)<x_flag){
      key_temp = LEFT;
      return key_temp;        
    }
    else{
      key_temp = RIGHT;
      return key_temp;      
    }    
  }
  else if (!digitalRead(button)) {
    key_temp = A;
    Serial.println("A");
    return key_temp;
  }
  return 0;
}*/

/***********************************************/
void game_over()//对游戏结束进行定义
{
   u8g2.firstPage();
   do
   {
     u8g2.setFont(u8g2_font_timR14_tf);
     u8g2.setFontPosTop();
     u8g2.setCursor(0, 20);
     u8g2.print(" GAME OVER!");
   }
      
   while (u8g2.nextPage());  
   snake_length=3;
   snake_x[0] = 15; snake_y[0] = 15;//snake起始坐标
   snake_x[1] = snake_x[0]  - 1; snake_y[1] = snake_y[0];//snake起始坐标
   snake_x[2] = snake_x[1]  - 1; snake_y[2] = snake_y[1];//snake起始坐标
   while(digitalRead(button));
}

void snake()//对贪吃蛇参数进行定义
{
   int flag = 1; //标志
   snake_x[0] = 15; snake_y[0] = 15;//snake起始坐标
   snake_x[1] = snake_x[0]  - 1; snake_y[1] = snake_y[0];//snake起始坐标
   snake_x[2] = snake_x[1]  - 1; snake_y[2] = snake_y[1];//snake起始坐标
   int snake_dir=RIGHT;//初始方向 right
   game_speed=30;
   int food_flag=1;
   Serial.println("snake!");
   food();
   while (flag)
   {
     snake_frame(game_speed);
     delay(game_speed);
     switch(/*read_key()*/getMsg)
     {
       case UP:
         if(snake_dir!=DOWN)
         {
           snake_dir=UP;
           break;
         }
       case DOWN:
         if(snake_dir!=UP)
         {
           snake_dir=DOWN;
           break;
         }
         case LEFT:
         if(snake_dir!=RIGHT)
         {
           snake_dir=LEFT;
           break;
         }
         case RIGHT:
         if(snake_dir!=LEFT)
         {
           snake_dir=RIGHT;
           break;
         }
         default:break;
     }
     if(snake_eat_food(snake_dir)==1)
     {
       food();
       if(snake_length<10){game_speed=30;}
       if(snake_length<30&&snake_length>=10){game_speed=20;}
       if(snake_length<50&&snake_length>=30){game_speed=10;}
       if(snake_length>=50){game_speed=0;}
     }
     else
     {
       if(snake_knock_wall(snake_dir==1))
       {
         game_over();//游戏结束
         flag=0;
       }
       else
       {
         if(snake_eat_body(snake_dir)==1)
         {
           game_over();//游戏结束
           flag=0;
         }
         else
         {
           change_con(snake_dir);
         }
       }
     }
   }
}

void snake_frame(int s)
{
   u8g2.firstPage();
   do
   {
     u8g2.drawFrame(box_x, box_y, box_x_length, box_y_length);//画边框
     u8g2.setFont(u8g2_font_timR08_tf);
     u8g2.setFontPosTop();
     u8g2.setCursor(20,0);
     u8g2.print("Score");
     u8g2.setCursor(50,0);    
     u8g2.print((snake_length - 3) * 5);
     
     u8g2.setCursor(70,0);
     u8g2.print("Speed");
     u8g2.setCursor(100,0);
     u8g2.print(30-s);
     
     u8g2.drawFrame(food_x*snake_body_width+1, food_y*snake_body_width+1, snake_body_width, snake_body_width);//显示食物
     for (int i = 0; i < snake_length; i++)//显示snake
     {
       if(i==0)
       {
         u8g2.drawBox(snake_x[i]*snake_body_width+1, snake_y[i]*snake_body_width+1, snake_body_width, snake_body_width);
       }
       else
       {
         u8g2.drawFrame(snake_x[i]*snake_body_width+1, snake_y[i]*snake_body_width+1, snake_body_width, snake_body_width);
       }
     }
   } while (u8g2.nextPage());
}

void food()//对食物进行定义
{
   int flag = 1;
   while (flag)
   {
     food_x = random(box_x/3,(box_x_length-2+box_x)/3);
     food_y = random(box_y/3,(box_y_length-2+box_y)/3);
     for (int i = 0; i < snake_length; i++)
     {
         if((food_x==snake_x[i])&&(food_y==snake_y[i]))
         {
           break;
         }
         flag=0;
     }
   }
//  Serial.print("food_x:");
//  Serial.print(food_x);
//  Serial.print(" food_y:");
//  Serial.println(food_y);
}

void change_con(int DIR)//移动坐标函数
{
   int temp_x[snake_length+2];
   int temp_y[snake_length+2];
   for(int i=0;i<snake_length-1;i++)//将旧坐标数据存放到temp数组  最后一位数据无效
   {
     temp_x[i]=snake_x[i];
     temp_y[i]=snake_y[i];
   }
   switch(DIR)
   {
     case RIGHT: {snake_x[0]+=1;break;}
     case LEFT: {snake_x[0]-=1;break;}
     case UP: {snake_y[0]-=1;break;}
     case DOWN: {snake_y[0]+=1;break;}
   }
       
   for(int i=1;i<snake_length;i++)
   {
     snake_x[i]=temp_x[i-1];
     snake_y[i]=temp_y[i-1];
   }
}

void change_pos()//吃到东西后移动函数
{
   int temp_x[snake_length+2];
   int temp_y[snake_length+2];
   for(int i=0;i<snake_length-1;i++)//将旧坐标数据存放到temp数组  最后一位数据无效
   {
     temp_x[i]=snake_x[i];
     temp_y[i]=snake_y[i];
   }
   snake_x[0]=food_x;
   snake_y[0]=food_y;
   for(int i=1;i<snake_length;i++)
   {
     snake_x[i]=temp_x[i-1];
     snake_y[i]=temp_y[i-1];
   }
}
//判断是否吃到食物 0-没有吃到 1-吃到 2-无效
int snake_eat_food(int dir)
{
   int x_temp=snake_x[0];
   int y_temp=snake_y[0];
   switch(dir)
   {
     case UP :y_temp-=1;break;
     case DOWN :y_temp+=1;break;
     case LEFT :x_temp-=1;break;
     case RIGHT :x_temp+=1;break;
   }
   if((x_temp==food_x)&&(y_temp==food_y))
   {
       snake_length+=1;
       change_pos();
       return 1;
   }
   else
   {
     return 0;
   }
}
//判断是否撞墙 0-没有撞到 1-撞到 2-无效
int snake_knock_wall(int dir){
   int x_temp=snake_x[0];
   int y_temp=snake_y[0];
   switch(dir)
   {
     case UP :y_temp-=1;break;
     case DOWN :y_temp+=1;break;
     case LEFT :x_temp-=1;break;
     case RIGHT :x_temp+=1;break;
   }
   if(x_temp*snake_body_width<box_x||(x_temp+1)*snake_body_width>(box_x_length+box_x)||y_temp*snake_body_width<box_y||(y_temp+1)*snake_body_width>(box_y_length+box_y)){
     return 1;
   }
   else
   {
     return 0;
   }
}
//判断是否吃到自己 0-没有吃到 1-吃到 2-无效
int snake_eat_body(int dir){
   int x_temp=snake_x[0];
   int y_temp=snake_y[0];
   switch(dir)
   {
     case UP :y_temp-=1;break;
     case DOWN :y_temp+=1;break;
     case LEFT :x_temp-=1;break;
     case RIGHT :x_temp+=1;break;
   }
   for(int i=1;i<snake_length;i++)
   {
     if((snake_x[0]==snake_x[i])&&(snake_y[0]==snake_y[i]))
     {
       return 1;
     }
   }
   return 0;
}