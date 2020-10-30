# SpecialForces leg-press auto measuring device

## Intro (소개)
>스페셜포스 자동 레그프레스 측정 장치는 레그 프레스의 무게와 개수를 자동으로 측정해줍니다. 레그프레스 측정 장치는 핸드폰을 핸드폰 거치대 위에 올려놓고 사용합니다.
레그프레스 운동이 시작되면 센서는 무게를 자동으로 측정하고 다리와 상체 사이의 거리를 계산하여 횟수를 카운팅해줍니다. 측정결과는 헨드폰 어플리케이션에 NFC 센서를 통해 자동 저장됩니다.

>SpecialForces leg-press auto measuring device can automatically measures wegiht and the number of leg-press. 
The leg press measurement device is used by placing a mobile phone on the mobile phone holder.  
When a leg press workout begins, the sensor automatically weighs and counts the number of times by calculating the distance between the leg and upper body.  
Measurement results are automatically saved in the hand phone application through the NFC sensor.

## Circuit (회로도)
![lag-press Circuit](https://user-images.githubusercontent.com/26067127/97019807-ba969400-158b-11eb-9d4a-18ec10578735.png)
</br>

## Installation Process (설치 안내)
1. 아두이노 나노, 초음파센서, 로드셀, HX711을 준비합니다.
2. 위 회로도에 맞추어 다음과 같은 장치에 연결합니다.
3. 헨드폰에 스페셜포스 어플리케이션을 설치합니다.
4. push_up.ino 파일을 다운받아 아두이노에 업로드합니다.
5. 아두이노 나노에 외부 전원을 연결한 후 운동하여 데이터가 제대로 들어오는지 확인합니다.

## How to use (사용방법)
