# SpecialForces
![1603742156358](https://user-images.githubusercontent.com/26067127/97261793-eb641b00-1862-11eb-9595-28c4e3f7ec9e.jpg)</br>
SpecialForces is a healthcare solution for Ministry of National Defense Soldiers.</br>
스페셜포스는 대한민국 국방부 국군 장병들을 위한 헬스케어 솔루션입니다.

## 1. Intro
### 발표영상
[![Watch the video](https://img.youtube.com/vi/LjX3eVQdIyk/0.jpg)](https://www.youtube.com/watch?time_continue=117&v=LjX3eVQdIyk)</br>

### 시연영상
[![Watch the video](https://img.youtube.com/vi/LjX3eVQdIyk/0.jpg)](https://www.youtube.com/watch?time_continue=117&v=LjX3eVQdIyk)</br>

### Project Intro (프로젝트 소개 & 서비스 구성도)
>스페셜포스는 장병들의 운동을 기록해주는 디바이스와 이를 한 눈에 보여주는 어플리케이션(병사용) 그리고 모든 병사를 한 번에 관리를 할 수 있는 웹사이트(간부용)로 이루어져 있습니다. 스페셜포스는 사이버 작전 사령부에서 제안한 체력측정앱이라는 주제를 바탕으로 IoT, Web, App으로 확장시킨 프로젝트 입니다. 그래서 단순한 체력측정만이 아닌 병사들을 위한 건강관리 솔루션입니다. 스페셜 포스를 이용하면 장병들은 핸드폰에 운동 데이터가 쌓이므로 운동에 더욱 흥미를 가질 것입니다. 또한 자신들의 운동 기록이 상세하게 기록되어 더욱 효율적으로 균형잡힌 운동을 하게 될 것입니다. 그리고 쉽게 건강관리를 할 수 있게 됩니다. 현재 스패셜 포스는 5개의 운동기기와 1개의 심박동측정 센서를 지원합니다. 하지만 각 운동기기에 알맞은 모듈을 개발하면 체력단련실에 있는 모든 운동기기와 호완이 될 것이고 또 나아가서 스마트워치나 워리어 플렛폼과도 연동이 될 수 있는 솔루션입니다. 스페셜 포스는 전우들과 함께 즐긴 풋살과 배드민턴부터 유격이나 혹한기 훈련을 받으면서 쌓이는 건강 기록까지 관리하는 헬스케어 솔루션이 될 수 있습니다.

>Special Force consists of a device that records the movements of soldiers, an application that shows them at a glance (for use by soldiers), and a website that allows them to manage all soldiers at once (for executives). Special Force is a project expanded to IoT, Web, and App based on the theme of the fitness measurement app proposed by the Cyber Operations Command. So, it is not just a simple physical fitness measurement, but a health care solution for soldiers. If you use Special Force, soldiers will be more interested in exercise because exercise data is accumulated on their mobile phones. In addition, their exercise records will be recorded in detail so that they will be able to perform more efficient and balanced exercise. And you can easily manage your health. Special Force support 5 exercise devices and 1 heart rate sensor. However, if you develop a module suitable for each exercise device, it will be compatible with all exercise devices in the fitness room, and furthermore, it is a solution that can be linked with smart watches or warrior platforms. Special Forces can be a healthcare solution that manages the health records accumulated while training in gaps and cold seasons, from futsal and badminton enjoyed with comrades.

### (1)Service
>스페셜포스 디바이스는 장병들의 체력을 자동으로 측정해주는 장치입니다. 해당 장치는 여러개의 모듈로 이루어져 있으며 이 모듈이 각각의 운동 내역을 센싱하여 NFC 통신을 통해 어플리케이션에 운동데이터를 전송합니다. 어플리케이션은 장병들 자신의 운동기록을 확인 할 수 있으며 체력 측정기록, 몸무게, 심박동 측정기록, 수면기록 등도 함께 확인해 볼 수 있습니다. 또한 운동데이터를 서버로 전송하여 전우들에게 운동 내역을 보여줌으로써 운동하고 싶은 마음을 고취시키고 선의의 경쟁을 하거나 자신의 운동량이 얼마나 되는지 확인해보는 등 여러가지 방향으로 활용 할 수 있습니다.

>The IoT devices was designed to record fitness data automatically. The device consist of some modules that record and transmit fitness data to Android application through NFC technology. Soldiers can monitor their records via Android application and also heartrate data, sleep pattern data, fitness test data that according to MND(Ministry of National Defense) creteria.
### (2)Management
>스페셜포스의 웹은 Back Office로 병사들을 관리하는 간부전용웹사이트 입니다. BackOffice에서는 병사 한명 한명의 운동량과 수면시간, 체중의 변화, 심박동 측정기록 등을 세밀하게 확인하여 해당 병사의 건강을 한 눈에 알 수 있습니다. 또 모아보기 기능을 지원하여 모든 병사의 데이터를 기반으로 중대의 평균적인 체력 상태를 계산 할 수 있습니다.  전사현황뷰를 통해 특급전사나 국군지휘통신사령부의 빛가온전사처럼 특정부대의 체력검정 조건을 설정하여 조건을 달성한 병사들이 얼마나 있는지 한 번에 알아보는 기능도 있습니다.

>The website for SpecialForce is just for cadre that supervise soldiers. With SpecialForces, Supervisors are able to take care of exercise, sleep time, heartrate, weight and height of soldiers. Supervisors can monitor health statement for their soldiers while encouraging soldiers to do fitness and care themselves autonomously, too.
## 2. System Architecture (시스템 구조)

### System Diagram (기능설계도)

### StoryBoard (프로젝트 문서)
- <a href = "화면정의서"> Web/App화면설계안 </a>
- <a href = "https://github.com/orgs/SpecailForces/projects/1"> git project KanBanBoard 1 </a>
- <a href = "https://github.com/osamhack2020/App_SpecialForces_SpecialWarrior/projects/2"> git project KanBanBoard 2 </a>
- <a href = "https://calendar.google.com/calendar/u/0?cid=OG1yZ3FhYTI5MTMwN2FldTZucDdvbXEwcmNAZ3JvdXAuY2FsZW5kYXIuZ29vZ2xlLmNvbQ"> Google Calendar 특급전사 팀 공개 일정 </a>
- <a href = "https://www.erdcloud.com/d/x3pmnS3jFMrxiPcaW"> DB ERD </a>

## 3. Prerequisites (컴퓨터구성/필수조건 안내)
- 안드로이드 버전
    - Android 6.0 이상

- 웹브라우저 제한사항
    - Chrome 62 이상
    - IE 9,10,11 (IE 8 이하 미지원)
    - Edge 15 이상
    - Firefox 56 이상
    - Safari 8 이상

- 아두이노 장치 구성
    - Arduino Nano(아두이노 나노)
    - HC-SR04(초음파센서)
    - PN532(NFC모듈)
    - ILI9340(TFT-LCD
    - PIEZO Speaker(Buzzer)
    - ITR-9909(포토센서)
    - Load Sell(로드셀)
    - HX711(Load Sell Amplifier)
    - RJ45(Load Sensor Combinator)
    - Reed switch(리드스위치)
    - PulseSensor(심박동센서)

## 4. Technique Used (기술스택)

### (1)Back Office
    vuejs
    vue-cli
    vuetifyjs
    vue-router
    vuex
    axios
### (2)Application
    AndroidX
    MaterialDesign
    Retrofit 2.0
    MPAndroidChart
### (3)Server
    PHP 7.2
    MariaDB 10.1
    Apache 2.4
### (4)IoT Device(클릭시 해당 기기 문서로 이동)
- <a href = "https://github.com/osamhack2020/IoT_SpecialForces_SpecialWarrior/tree/master/devices/push_up">팔굽혀펴기 체력 측정장치</a>
- <a href = "https://github.com/osamhack2020/IoT_SpecialForces_SpecialWarrior/tree/master/devices/sit_up">윗몸일으키기 체력 측정장치</a>
- <a href = "https://github.com/osamhack2020/IoT_SpecialForces_SpecialWarrior/tree/master/devices/Treadmill">뜀뛰기 체력 측정장치</a>
- <a href = "https://github.com/osamhack2020/IoT_SpecialForces_SpecialWarrior/tree/master/devices/lat_pull_down">렛 폴 다운 운동 측정장치</a>
- <a href = "https://github.com/osamhack2020/IoT_SpecialForces_SpecialWarrior/tree/master/devices/leg_press">레그 프레스 운동 측정장치</a>
- <a href = "https://github.com/osamhack2020/IoT_SpecialForces_SpecialWarrior/tree/master/devices/Pulse%20Detection">심박동 측정장치</a>

## 5. Installation Process (설치 안내)

### app

### IoT(클릭시 해당 기기 문서로 이동)
- <a href = "https://github.com/osamhack2020/IoT_SpecialForces_SpecialWarrior/tree/master/devices/push_up#installation-process-%EC%84%A4%EC%B9%98-%EC%95%88%EB%82%B4">팔굽혀펴기 체력 측정장치</a>
- <a href = "https://github.com/osamhack2020/IoT_SpecialForces_SpecialWarrior/tree/master/devices/sit_up#installation-process-%EC%84%A4%EC%B9%98-%EC%95%88%EB%82%B4">윗몸일으키기 체력 측정장치</a>
- <a href = "https://github.com/osamhack2020/IoT_SpecialForces_SpecialWarrior/tree/master/devices/Treadmill#installation-process-%EC%84%A4%EC%B9%98-%EC%95%88%EB%82%B4">뜀뛰기 체력 측정장치</a>
- <a href = "https://github.com/osamhack2020/IoT_SpecialForces_SpecialWarrior/tree/master/devices/lat_pull_down#installation-process-%EC%84%A4%EC%B9%98-%EC%95%88%EB%82%B4">렛 폴 다운 운동 측정장치</a>
- <a href = "https://github.com/osamhack2020/IoT_SpecialForces_SpecialWarrior/tree/master/devices/leg_press#installation-process-%EC%84%A4%EC%B9%98-%EC%95%88%EB%82%B4">레그 프레스 운동 측정장치</a>
- <a href = "https://github.com/osamhack2020/IoT_SpecialForces_SpecialWarrior/tree/master/devices/Pulse%20Detection#installation-process-%EC%84%A4%EC%B9%98-%EC%95%88%EB%82%B4">심박동 측정장치</a>


## 6. Getting Started (프로젝트 사용법)

### IoT

#### 상세 설명(클릭시 해당 기기 문서로 이동)
- <a href = "https://github.com/osamhack2020/IoT_SpecialForces_SpecialWarrior/tree/master/devices/push_up#installation-process-%EC%84%A4%EC%B9%98-%EC%95%88%EB%82%B4">팔굽혀펴기 체력 측정장치</a>
- <a href = "https://github.com/osamhack2020/IoT_SpecialForces_SpecialWarrior/tree/master/devices/sit_up#installation-process-%EC%84%A4%EC%B9%98-%EC%95%88%EB%82%B4">윗몸일으키기 체력 측정장치</a>
- <a href = "https://github.com/osamhack2020/IoT_SpecialForces_SpecialWarrior/tree/master/devices/Treadmill#installation-process-%EC%84%A4%EC%B9%98-%EC%95%88%EB%82%B4">뜀뛰기 체력 측정장치</a>
- <a href = "https://github.com/osamhack2020/IoT_SpecialForces_SpecialWarrior/tree/master/devices/lat_pull_down#installation-process-%EC%84%A4%EC%B9%98-%EC%95%88%EB%82%B4">렛 폴 다운 운동 측정장치</a>
- <a href = "https://github.com/osamhack2020/IoT_SpecialForces_SpecialWarrior/tree/master/devices/leg_press#installation-process-%EC%84%A4%EC%B9%98-%EC%95%88%EB%82%B4">레그 프레스 운동 측정장치</a>
- <a href = "https://github.com/osamhack2020/IoT_SpecialForces_SpecialWarrior/tree/master/devices/Pulse%20Detection#installation-process-%EC%84%A4%EC%B9%98-%EC%95%88%EB%82%B4">심박동 측정장치</a>

#### 간단한 설명
<운동기구>
1. 하고 싶은 운동기구에 헨드폰을 올려 둔다.
2. 운동을 시작한다.
3. 어플리케이션에 해당 운동 내역이 자동으로 저장된다.

<체력 측정 기구>
1. 측정하고 싶은 운동기구에 헨드폰을 올려 둔다.
2. 버튼을 누른다.
3. 부저의 알람이 울릴 때까지 운동을 실시한다.
4. 시간과 운동 현황은 운동기구에 달려있는 LCD를 통해 볼 수 있다.
5. 부저가 울리면 어플리케이션에 결과가 자동으로 측정된다.

### app (화면 구조도)
<병사용 Service>
1. APK 파일 다운로드 및 설치
2. 개인정보 및 소속 정보 입력 후 회원가입
3. 홈 탭에 있는 메뉴를 통해 최근일자의 몸무게/수면시간/심박수/섭취칼로리를 그래프로 확인 가능
4. 홈-몸무게/수면시간 탭에 있는 입력하기 버튼을 통해 현재 몸무게/수면시간을 입력
5. 홈-심박수 탭에서 기기 센서 접촉을 통해 현재 심박수 측정
6. 홈-음식 탭에서 섭취한 음식을 검색하여 해당 음식의 칼로리 입력
7. 운동 탭에서 최근 수행한 운동의 종류와 개수를 확인 가능
8. 운동기구에 핸드폰을 올려둘 경우 IoT 센서와의 NFC 접촉 방식을 통해 운동 종류와 개수를 자동으로 서버에 저장

### web (화면 구조도)
<간부용 BackOffice>
1. <a href = "https://osamhack2020.github.io/Web_SpecialForces_SpecialWarrior"> 해당 사이트 </a> 접속
2. 부대 소속 및 군번 개인정보 입력 후 회원가입
3. 병사관리 텝에서 병사들의 건강상테 리스트를 볼 수 있으며 클릭시 상세 보기가 주어짐.
4. 모아보기 페이지는 모든 병사들의 운동별 현황을 그래프를 통해 한 번에 파악 가능.
5. 병사현황 페이지를 이용하면 특급전사 및 체력측정 기준에 합격자 인원을 쉽게 파악할 수 있음.
6. FAQ를 통해 Back Office의 모르는 사항을 빠르게 찾아볼 수 있음.
7. 공지사항 페이지에서 공지를 만들어서 병사들이 사용하는 어플리케이션에 공지를 보낼 수 있음.


## 7. Team Information (팀 정보)

### Team Intro (팀 소개)
>특급전사는 대한민국 육군 체력 등급의 최고 등급으로 팔굽혀펴기 2분에 72개 이상, 윗몸일으키기 2분에 86개 이상, 3KM 달리기 12분30초 이내 완주 해야합니다. 특급전사 팀은 모든 군인이 특급전사처럼 건강한 체력을 가질 수 있길 바라는 마음에서 지어진 팀명입니다.

>Special warriors are the highest grade in the ROK Army's physical fitness class.They must complete at least 72 in 2 minutes of push-ups, at least 86 in 2 minutes of sit-ups, and 12 minutes and 30 seconds of a 3KM run. The name of the special warrior team was created with the hope that all soldiers can have healthy stamina like the special warrior.

### Team member (팀 멤버 소개)
- <b>PM & IoT</b> Park SungSoo (skyinbss@gmail.com), Github Id: <a href = "https://github.com/Moerai">KrToTo</a>
- <b>Web & Server</b> Park SeongCheol (gorae02@gmail.com), Github Id: <a href = "https://github.com/goraegori">goraegori</a>
- <b>Application</b> Kang Chan (koxx1107@gmail.com), Github Id: <a href = "https://github.com/LieutenantKang">Lieutenant Kang</a>

## 8. Copyleft / End User License(저작권 및 사용권 정보)
This work is dual-licensed under * [MIT](https://github.com/SpecailForces/SpecialForces-IoT/blob/master/MIT_license.md) AND * [Apache License 2.0](https://github.com/SpecailForces/SpecialForces-IoT/blob/master/Apache_license.md).</br>
You must comply with all this licenses if you use this work.</br>
