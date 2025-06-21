# CrazyArcade_with_Arduino

몽땅아지트 크레이지 아케이드 부스 운영을 위한 아두이노 코드

<aside>

>⚡ Target Board : Arduino Leonardo , Arduino Pro Micro (**ATmega32U4 Series)**

</aside>

## Features


- 악어 클립을 이용한 다양한 사물을 버튼화
- 내부 PULLUP 모드로 복잡한 회로 구성 필요 X
- 방향키, 스페이스를 이용한 다양한 게임 컨트롤러 제작 가능
- **전압 값 민감도 조절(#Sensibility)**을 통하여 판정을 유동적으로 조절 가능

## Mapping


| PIN | Key | Action |
| --- | --- | --- |
| A0 | KEY_UP_ARROW | 위로 이동 |
| A1 | KEY_DOWN_ARROW | 아래로 이동 |
| A2 | KEY_LEFT_ARROW | 왼쪽 이동 |
| A3 | KEY_RIGHT_ARROW | 오른쪽 이동 |
| A5, 8 | 0x20(spacebar) | 물폭탄 설치 |
| GND | Null (GND 역할) | -극 역할 |

## LICENSE


본 소스는 MIT 라이센스를 준수합니다. 자세한 내용은 [LICENSE](./LICENSE)를 참고해주세요.

Copyright 2025. 가람메
