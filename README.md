# UE_CPP_Project

언리얼 엔진 C++ 학습 프로젝트입니다.

## 개발 환경

- Unreal Engine 5.5
- Visual Studio 2022
- Windows 10

## 프로젝트 구조

- `Source/` - C++ 소스 코드
  - `UE_CPP_Project/` - 프로젝트 관련 C++ 클래스들
- `Content/` - 게임 콘텐츠 (맵, 애셋 등)

## 빌드 방법

1. 프로젝트 클론:
```bash
git clone https://github.com/[YOUR_USERNAME]/UE_CPP_Project.git
```

2. 프로젝트 파일 생성:
- `UE_CPP_Project.uproject` 파일을 우클릭
- "Generate Visual Studio project files" 선택

3. 솔루션 빌드:
- Visual Studio에서 솔루션을 열고 빌드
- 또는 다음 명령어 실행:
```batch
"[UE_PATH]\Engine\Build\BatchFiles\Build.bat" ^
UE_CPP_ProjectEditor ^
Win64 ^
Development ^
-project="[PROJECT_PATH]\UE_CPP_Project.uproject" ^
-waitmutex
```

## 주요 기능

- TPS(Third Person Shooter) 캐릭터 구현
- 무기 시스템
- 스킬 시스템

## 라이선스

이 프로젝트는 MIT 라이선스를 따릅니다. 