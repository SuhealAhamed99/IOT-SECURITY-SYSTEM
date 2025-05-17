# IOT-SECURITY-SYSTEM

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: N.SUHEAL AHAMED

*INTERN ID*: CT04DM815

*DOMAIN*: Internet Of Things

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

🔐 Task 3: IoT Security System:

This project demonstrates a simple IoT-based security system that detects motion using a PIR sensor and alerts users via the Blynk IoT platform. The system activates a buzzer and LED alarm locally and sends notifications to the Blynk dashboard for real-time monitoring.

📲 Overview:

The ESP32 continuously monitors a PIR motion sensor connected to GPIO14.

⚠️ When motion is detected:

  🔸 The buzzer and LED on GPIO15 and GPIO2 respectively turn ON
  
  🔸 A motion alert is sent to the Blynk app via a virtual LED on pin V2 and a log event notification
  
  🔸 Serial Monitor prints "Motion Detected!" for debugging

✅ When motion stops:

  🔹 The buzzer and LED turn OFF
  
  🔹 The Blynk virtual LED is switched OFF
  
  🔹 Serial Monitor prints "Motion Ended"

🧰 Components Used :

📦 ESP32 Dev Board

🕵️ PIR Motion Sensor

🔔 Buzzer

💡 LED

📱 Blynk IoT App

🧪 Wokwi Simulator (optional for testing)

⚙️ Features :

✅ Real-time motion detection and alert

✅ Local buzzer and LED alarm for immediate warning

✅ Remote notification and status on Blynk app

✅ Serial Monitor debug logs

✅ Wi-Fi enabled for remote monitoring

✅ Simple, effective security prototype

🔌 Connections :

🔧 Component	 → ⚡ ESP32 Pin

PIR Sensor	→ GPIO14

Buzzer	→ GPIO15

LED	→ GPIO2

📱 Blynk Configuration :

🏷️ Template Name: IOT Security System Task 3

🆔 Template ID: TMPL3Iu3IQM5N

🔐 Auth Token: bNS7g-vCqIuS6xOasbRmr_EYJZSQ1D

📲 Virtual Pin: V2 (for virtual LED alert)

🔘 Widget Used: LED widget to display motion status

🖼️ Output Preview :

Include in THE GitHub repo:

🔌 Circuit diagram or Wokwi screenshot

📱 Blynk app screenshots showing motion alert

🔔 Photos oF LED activation

🖥️ Serial Monitor output logs

![Image](https://github.com/user-attachments/assets/22526511-3f0b-4ff2-aae0-2234aa0cfe5d)
![Image](https://github.com/user-attachments/assets/c9e20b9a-1a6c-4ee7-8b59-b92232f2d17a)
![Image](https://github.com/user-attachments/assets/6918b5c8-50bc-4dc4-a9e2-5490c5fb15d9)
![Image](https://github.com/user-attachments/assets/cf7f83e4-ac19-4943-97db-bf1013b7746e)


![Image](https://github.com/user-attachments/assets/cbf18da9-5633-4a85-b4ca-9de8c2aa882b)

![Image](https://github.com/user-attachments/assets/9b5d3be1-e945-46b2-a2e6-fd0eb22985bc)
![Image](https://github.com/user-attachments/assets/af05ec69-984b-4e82-b798-ca58cbd38d10)
![Image](https://github.com/user-attachments/assets/f4417406-9fea-4d89-b1e9-ac6d4d88875c)
