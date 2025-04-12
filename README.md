SmartHomeProject
================

This is a smart home prototype developed by Yerassyl Zholgeldiyev.  
The system is based on the Arduino Uno and includes multiple sensors and modules  
to detect motion, fire, gas, light, temperature, and humidity.

Features:
---------

1. Motion Detection  
   - Sensor: HC-SR501  
   - Automatically turns on an LED when motion is detected.  
   - LED turns off after 5 seconds of no movement.

2. Fire Detection  
   - Sensor: KY-026 Flame Sensor  
   - Activates a buzzer immediately when fire is detected.

3. Gas Detection  
   - Sensor: MQ-9  
   - Triggers a buzzer alert if gas levels are high.

4. Light Level Detection  
   - Sensor: LDR (Photoresistor)  
   - Turns on an LED when it's dark.

5. Temperature and Humidity Monitoring  
   - Sensor: DHT11  
   - Measures and displays temperature and humidity via Serial Monitor.

6. LCD Display (Optional)  
   - Module: 16x2 I2C LCD with 4 pins  
   - Can be used to display sensor readings (future update).

Components Used:
----------------

- Arduino Uno
- HC-SR501 PIR Motion Sensor
- KY-026 Flame Sensor
- MQ-9 Gas Sensor
- LDR with 10k Ohm resistor
- DHT11 Temperature and Humidity Sensor
- Buzzer
- LEDs with 220 Ohm resistors
- 16x2 I2C LCD Display (optional)
- Jumper wires
- Breadboard
- Power supply

Wiring Overview

- PIR Sensor → Digital pin 2  
- DHT11 Sensor → Digital pin 4 (with 10kΩ pull-up resistor)  
- Buzzer → Digital pin 6  
- LED (motion) → Digital pin 5  
- Flame Sensor → Analog pin 3  
- LDR Sensor → Analog pin A1  
- MQ9 Sensor → (optional) Analog pin A0  
- LCD Display (I2C) → SDA/SCL (A4/A5 on Uno)

Future Improvements

This prototype is just a starting point. In the future, it could be expanded with:

- Wireless control via smartphone app (Bluetooth/Wi-Fi)
- Voice command integration
- Smart door lock system (Keypad + RFID)
- Smoke detector, water leak sensor
- IoT-based real-time monitoring via Blynk or MQTT
- Smart energy-saving algorithms

License

This project is open-source and licensed under the MIT License. Feel free to use, modify, and improve it.

---

Project by:  
Yerassyl Zholgeldiyev  
2025
---

# SmartHomeProject (Қазақша)

Бұл — Ерassyl Zholgeldiyev әзірлеген смарт үйдің прототипі.  
Жүйе Arduino Uno негізінде жасалған және бірнеше сенсор мен модульдерді қамтиды.  
Олар қозғалысты, отты, газды, жарық деңгейін, температура мен ылғалдылықты анықтайды.

## Мүмкіндіктері

1. **Қозғалысты анықтау**  
   - Сенсор: **HC-SR501**  
   - Қозғалыс байқалса, жарық жанады  
   - Қозғалыс тоқтаса, 5 секундтан кейін сөнеді

2. **Отты анықтау**  
   - Сенсор: **KY-026**  
   - От пайда болғанда дыбыстық сигнал береді

3. **Газды анықтау**  
   - Сенсор: **MQ-9**  
   - Газ деңгейі жоғары болса, дыбыс сигналы қосылады

4. **Жарық деңгейін анықтау**  
   - Сенсор: **LDR (Фоторезистор)**  
   - Қараңғы болса, жарық жанады

5. **Температура мен ылғалдылықты бақылау**  
   - Сенсор: **DHT11**  
   - Температура мен ылғалдылықты Serial Monitor арқылы көрсетеді

6. **LCD дисплей (қосымша)**  
   - Модуль: **16x2 I2C (4 пинді)**  
   - Деректерді экранда көрсетуге болады (кейінгі жаңартуда)

## Қолданылған компоненттер

- Arduino Uno  
- HC-SR501 қозғалыс сенсоры  
- KY-026 жалын сенсоры  
- MQ-9 газ сенсоры  
- LDR + 10kΩ резистор  
- DHT11 температура және ылғалдылық сенсоры  
- Дыбыс сигналы (buzzer)  
- 220Ω резистормен бірге жарықдиодтар (LED)  
- 16x2 LCD дисплей (қосымша)  
- Джампер сымдар, макет тақша (breadboard), қуат көзі

## Байланыс сызбасы

- **Қозғалыс сенсоры** → Цифрлық пин **2**  
- **DHT11** → Цифрлық пин **4** (10kΩ резистормен)  
- **Buzzer** → Цифрлық пин **6**  
- **Қозғалысқа арналған жарықдиод** → Пин **5**  
- **Жалын сенсоры** → Аналог пин **3**  
- **LDR** → Аналог пин **A1**  
- **MQ9** → (қосымша) Аналог пин **A0**  
- **LCD (I2C)** → SDA/SCL (**A4/A5**)

## Болашақ мүмкіндіктер

- Смартфонмен Bluetooth немесе Wi-Fi арқылы басқару  
- Дауыс командаларын қосу  
- RFID + Keypad арқылы есік құлпын басқару  
- Су ағу немесе түтін сенсорлары  
- Blynk немесе MQTT арқылы онлайн бақылау  
- Энергияны үнемдейтін алгоритмдер

## Лицензия

Бұл жоба MIT лицензиясымен ашық түрде таратылған.  
Қаласаңыз, пайдаланып, өзгертіп, жақсарта аласыз.  
[LICENSE](./LICENSE) файлын қараңыз.

---

**Жобаны жасаған:**  
Yerassyl Zholgeldiyev  
2025
