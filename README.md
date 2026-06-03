# Muscle Fatigue Monitoring System using EMG

## Overview

This project presents an Arduino-based Muscle Fatigue Monitoring System that utilizes surface Electromyography (EMG) signals to detect muscle fatigue in real time. The system continuously monitors muscle activity from the forearm using an RS2334 EMG sensor and provides an alert through a buzzer when fatigue-related signal changes are detected.

The project was developed as a Biomedical Engineering group mini-project at the National Institute of Technology Rourkela and includes both the Arduino implementation and project documentation.

---

## Objectives

* Acquire EMG signals from forearm muscles.
* Monitor muscle activity in real time.
* Detect fatigue-related changes in EMG signals.
* Provide an immediate alert when fatigue is detected.
* Demonstrate a low-cost biomedical monitoring system using Arduino.

---

## Hardware Components

* Arduino Uno
* RS2334 EMG Sensor
* Surface EMG Electrodes
* Piezo Buzzer
* Connecting Wires
* USB Power Supply

---

## Methodology

1. Surface electrodes are placed on the forearm muscle.
2. The RS2334 EMG sensor acquires muscle electrical activity.
3. Arduino continuously reads EMG signal values.
4. The signal is analyzed using a threshold-based fatigue detection algorithm.
5. When fatigue conditions are detected, the buzzer is activated to alert the user.

---

## System Features

* Real-time EMG monitoring
* Fatigue detection and alert system
* Arduino-based implementation
* Portable and low-cost design
* Simple threshold-based analysis

---

## Source Code

The Arduino implementation used for EMG-based muscle fatigue monitoring is provided in:

* `emg_fatigue_monitor.ino`

The complete project documentation, methodology, circuit design, hardware setup, and experimental analysis are available in:

* `MINI_PROJECT_REPORT.pdf`

---

## Applications

* Biomedical Instrumentation
* Rehabilitation Engineering
* Sports Performance Monitoring
* Human–Machine Interfaces
* Wearable Health Monitoring
* Muscle Fatigue Assessment

---

## Results

The system successfully monitored forearm muscle activity and generated fatigue alerts based on EMG signal variations. The prototype demonstrated the feasibility of low-cost muscle fatigue monitoring using surface electromyography.

---

## Future Improvements

* Wireless data transmission
* Mobile application integration
* Machine learning-based fatigue classification
* Multi-channel EMG acquisition
* Cloud-based monitoring and analytics

---

## Repository Structure

```text
muscle-fatigue-monitoring-emg/
│
├── README.md
├── emg_fatigue_monitor.ino
├── MINI_PROJECT_REPORT.pdf
└── LICENSE
```

---

## Team

This project was developed as a group mini-project in Biomedical Engineering.

### Team Members

* Priyabrata Das (123BM0746)
* Abhiram Gajula (123BM0747)
* Akash Kar (123BM0748)
* Divyanshu Kaushik (123BM0749)
* Tammana Tanmayi (123BM0750)

National Institute of Technology Rourkela

---

## My Contributions

* Arduino programming
* EMG signal acquisition
* Fatigue detection logic implementation
* Hardware integration
* Testing and validation
* Project documentation

---

## Technologies Used

* Arduino IDE
* Embedded C/C++
* Electromyography (EMG)
* Biomedical Signal Monitoring

---

## Keywords

EMG, Muscle Fatigue Monitoring, Arduino, Biomedical Instrumentation, Electromyography, Biosignal Processing, Rehabilitation Engineering, Wearable Health Monitoring, Biomedical Engineering

---

## License

This project is distributed under the MIT License. See the LICENSE file for details.

