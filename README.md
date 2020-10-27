# SpecialForces
![Logo](https://logosbynick.com/wp-content/uploads/2018/03/final-logo-example.png)</br>
SpecialForces is a healthcare solution for Ministry of National Defense Soldiers.</br>
스페셜포스는 대한민국 국방부 국군 장병들을 위한 헬스케어 솔루션입니다.

## 1. Intro (팀소개 및 프로잭트 설명 동영상)
[![Watch the video](https://img.youtube.com/vi/LjX3eVQdIyk/0.jpg)](https://www.youtube.com/watch?time_continue=117&v=LjX3eVQdIyk)</br>

### TEAM Intro (팀 소개)
>특급전사는 대한민국 육군 체력 등급의 최고 등급으로 팔굽혀펴기 2분에 72개 이상, 윗몸일으키기 2분에 86개 이상, 3KM 달리기 12분30초 이내 완주 해야합니다. 특급전사 팀은 모든 군인이 특급전사처럼 건강한 체력을 가질 수 있길 바라는 마음에서 지어진 팀명입니다.

### Project Intro (프로젝트 소개)
>스페셜포스는 장병들의 운동을 기록해주는 디바이스와 이를 한 눈에 보여주는 어플리케이션(병사용) 그리고 모든 병사를 한 번에 관리를 할 수 있는 웹사이트(간부용)로 이루어져 있습니다. 스페셜 포스를 이용하면 장병들은 자신의 스페셜포스는 네트워크 작전 사령부에서 제안한 체력측정앱이라는 주제를 바탕으로 IoT, Web, App으로 확장시킨 프로젝트 입니다. 그래서  단순한 체력측정만이 아닌 병사들을 위한 건강관리 솔루션입니다. 현재 스패셜 포스는 5개의 운동기기와 1개의 심박동측전 센서를 지원합니다. 하지만 각 운동기기에 알맞은 모듈을 개발하면 체력단련실에 있는 모든 운동기기와 호완이 될 것이고 또 스마트워치나 워리어 플렛폼과도 연동이 될 수 있는 솔루션입니다.

### (1)Service
>스페셜포스 디바이스는 장병들의 체력을 자동으로 측정해주는 장치입니다. 해당 장치는 여러개의 모듈로 이루어져 있으며 이 모듈이 각각의 운동 내역을 센싱하여 NFC 통신을 통해 어플리케이션에 운동데이터를 전송합니다. 어플리케이션은 장병들 자신의 운동기록을 확인 할 수 있으며 체력 측정기록, 몸무게, 심박동 측정기록, 수면기록 등도 함께 확인해 볼 수 있습니다. 또한 운동데이터를 서버로 전송하여 전우들에게 운동 내역을 보여줌으로써 운동하고 싶은 마음을 고취시키고 선의의 경쟁을 하거나 자신의 운동량이 얼마나 되는지 확인해보는 등 여러가지 방향으로 활용 할 수 있습니다.

>The IoT devices was designed to record fitness data automatically. The device consist of some modules that record and transmit fitness data to Android application through NFC technology. Soldiers can monitor their records via Android application and also heartrate data, sleep pattern data, fitness test data that according to MND(Ministry of National Defense) creteria.
### (2)Management
>스페셜포스의 웹은 Back Office로 병사들을 관리하는 간부전용웹사이트 입니다. BackOffice에서는 병사 한명 한명의 운동량과 수면시간, 체중의 변화, 심박동 측정기록 등을 세밀하게 확인하여 해당 병사의 건강을 한 눈에 알 수 있습니다. 또 모아보기 기능을 지원하여 모든 병사의 데이터를 기반으로 중대의 평균적인 체력 상태를 계산 할 수 있습니다.  전사현황뷰를 통해 특급전사나 국군지휘통신사령부의 빛가온전사처럼 특정부대의 체력검정 조건을 설정하여 조건을 달성한 병사들이 얼마나 있는지 한 번에 알아보는 기능도 있습니다.

>The website for SpecialForce is just for cadre that supervise soldiers. With SpecialForces, Supervisors are able to take care of exercise, sleep time, heartrate, weight and height of soldiers. Supervisors can monitor health statement for their soldiers while encouraging soldiers to do fitness and care themselves autonomously, too.
## 2. StoryBoard (기능설계)
- <a href = "화면정의서"> Web/App화면설계안 </a>
- <a href = "https://github.com/orgs/SpecailForces/projects/1"> git project KanBanBoard 1 </a>
- <a href = "https://github.com/osamhack2020/App_SpecialForces_SpecialWarrior/projects/2"> git project KanBanBoard 2 </a>
- <a href = "https://calendar.google.com/calendar/u/0?cid=OG1yZ3FhYTI5MTMwN2FldTZucDdvbXEwcmNAZ3JvdXAuY2FsZW5kYXIuZ29vZ2xlLmNvbQ"> Google Calendar 특급전사 팀 공개 일정 </a>
- <a href = "https://www.erdcloud.com/d/x3pmnS3jFMrxiPcaW"> DB ERD </a>

## 3. Prerequisites (컴퓨터구성/필수조건 안내)
- 안드로이드 버전

- 웹브라우저 제한사항
    - Chrome 62 이상
    - IE 9,10,11 (IE 8 이하 미지원)
    - Edge 15 이상
    - Firefox 56 이상
    - Safari 8 이상

- 아두이노 장치 구성
    - Arduino Micro
    - HC-SR04(초음파센서)
    - PN532(NFC모듈)
    - ILI9340(TFT-LCD
    - PIEZO Speaker(Buzzer)
    - ITR-9909(포토센서)
    - Load Sell(로드셀)
    - HX711(Load Sell Amplifier)
    - RJ45(Load Sensor Combinator)
    - Reed switch(리드스위치)
    - WAT-S019(심박동센서)

## 4. Technique Used (기술스택)
### (1)Back Office
    vuejs
    vue-cli
    vuetifyjs
    vue-router
    vuex
    axios
### (2)Application

### (3)Server
    PHP 7.2
    MariaDB 10.1
    Apache 2.4
### (4)IoT Device(클릭시 해당 기기 문서로 이동)
- <a href = "https://github.com/SpecailForces/SpecialForces-IoT/tree/master/devices/push_up#specialforces-push-up-auto-measuring-device">팔굽혀펴기 체력 측정장치</a>
- <a href = "https://github.com/SpecailForces/SpecialForces-IoT/tree/master/devices/sit_up#specialforces-sit-up-auto-measuring-device">윗몸일으키기 체력 측정장치</a>
- <a href = "https://github.com/SpecailForces/SpecialForces-IoT/tree/master/devices/run#specialforces-running-auto-measuring-device">뜀뛰기 체력 측정장치</a>
- <a href = "https://github.com/SpecailForces/SpecialForces-IoT/tree/master/devices/lat_pull_down#specialforces-lat-pull-down-auto-measuring-device">렛 폴 다운 운동 측정장치</a>
- <a href = "https://github.com/SpecailForces/SpecialForces-IoT/tree/master/devices/leg_press#specialforces-leg-press-auto-measuring-device">레그 프레스 운동 측정장치</a>

## 5. Installation Process (설치 안내)

### app

### IoT(클릭시 해당 기기 문서로 이동)
- <a href = "https://github.com/SpecailForces/SpecialForces-IoT/tree/master/devices/push_up#installation-process-%EC%84%A4%EC%B9%98-%EC%95%88%EB%82%B4">팔굽혀펴기 체력 측정장치</a>
- <a href = "https://github.com/SpecailForces/SpecialForces-IoT/tree/master/devices/sit_up#installation-process-%EC%84%A4%EC%B9%98-%EC%95%88%EB%82%B4">윗몸일으키기 체력 측정장치</a>
- <a href = "https://github.com/SpecailForces/SpecialForces-IoT/tree/master/devices/run#installation-process-%EC%84%A4%EC%B9%98-%EC%95%88%EB%82%B4">뜀뛰기 체력 측정장치</a>
- <a href = "https://github.com/SpecailForces/SpecialForces-IoT/tree/master/devices/lat_pull_down#installation-process-%EC%84%A4%EC%B9%98-%EC%95%88%EB%82%B4">렛 폴 다운 운동 측정장치</a>
- <a href = "https://github.com/SpecailForces/SpecialForces-IoT/tree/master/devices/leg_press#installation-process-%EC%84%A4%EC%B9%98-%EC%95%88%EB%82%B4">레그 프레스 운동 측정장치</a>

## 6. Getting Started (프로젝트 사용법 및 시연 동영상)
[![Watch the video](https://img.youtube.com/vi/LjX3eVQdIyk/0.jpg)](https://www.youtube.com/watch?time_continue=117&v=LjX3eVQdIyk)</br>
### IoT
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

### app
<병사용 Service>


### web
<간부용 BackOffice>
1. <a href = "https://osamhack2020.github.io/Web_SpecialForces_SpecialWarrior"> 해당 사이트 </a> 접속
2. 부대 소속 및 군번 개인정보 입력 후 회원가입
3. 병사관리 텝에서 병사들의 건강상테 리스트를 볼 수 있으며 클릭시 상세 보기가 주어짐.
4. 모아보기 페이지는 모든 병사들의 운동별 현황을 그래프를 통해 한 번에 파악 가능.
5. 병사현황 페이지를 이용하면 특급전사 및 체력측정 기준에 합격자 인원을 쉽게 파악할 수 있음.
6. FAQ를 통해 Back Office의 모르는 사항을 빠르게 찾아볼 수 있음.
7. 공지사항 페이지에서 공지를 만들어서 병사들이 사용하는 어플리케이션에 공지를 보낼 수 있음.


## 7. Team Information (팀 정보)
- <b>PM & IoT</b> Park SungSoo (skyinbss@gmail.com), Github Id: <a href = "https://github.com/Moerai">KrToTo</a>
- <b>Web & Server</b> Park SeongCheol (gorae02@gmail.com), Github Id: <a href = "https://github.com/goraegori">goraegori</a>
- <b>Application</b> Kang Chan (koxx1107@gmail.com), Github Id: <a href = "https://github.com/LieutenantKang">Lieutenant Kang</a>

## 8. Copyleft / End User License(저작권 및 사용권 정보)
This work is dual-licensed under * [MIT](https://github.com/SpecailForces/SpecialForces-IoT/blob/master/MIT_license.md) AND * [Apache License 2.0](https://github.com/SpecailForces/SpecialForces-IoT/blob/master/Apache_license.md).</br>
You must comply with all this licenses if you use this work.</br>


//SpecialForces Organization으로 되어 있는 URL 모두 편집할 것!!