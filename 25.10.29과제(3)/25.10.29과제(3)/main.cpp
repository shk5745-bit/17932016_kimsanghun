#include <iostream>
#include <cmath>    // sin, cos, M_PI
#include <iomanip>  // setprecision

#ifndef M_PI
#define M_PI 3.14159265358979323846
  #endif

using namespace std;

int main() {
    // 상수 정의
    const double m = 100.0;    // 질량 (kg)
    const double mu_s = 0.5;   // 정지마찰계수
    const double mu_k = 0.4;   // 동마찰계수
    const double g = 9.81;     // 중력가속도 (m/s^2)

    double theta_deg;  // 경사각(도)
    cout << "경사각 θ(도 단위)를 입력하세요: ";
    cin >> theta_deg;

    // 도 → 라디안 변환
    double theta = theta_deg * M_PI / 180.0;

    // 힘 계산
    double Fg_parallel = m * g * sin(theta);   // 경사면 방향 중력 성분
    double N = m * g * cos(theta);             // 수직항력
    double Fs_max = mu_s * N;                  // 최대 정지마찰력

    cout << fixed << setprecision(3);
    cout << "\n[계산 결과]\n";
    cout << "중력 성분 (m*g*sinθ)      = " << Fg_parallel << " N\n";
    cout << "최대 정지마찰력 (μs*N)     = " << Fs_max << " N\n";

    if (Fg_parallel <= Fs_max) {
        cout << "\n-> 파렛트는 정지상태를 유지합니다 (미끄러지지 않음).\n";
    }
    else {
        // 미끄러짐 → 동마찰 사용
        double a = g * (sin(theta) - mu_k * cos(theta)); // 가속도 (m/s^2)
        cout << "\n[WARNING] 파렛트가 미끄러집니다!\n"; // 유니코드 경고 아이콘 제거
        cout << "가속도 a = " << a << " m/s² (경사면 아래 방향)\n";
    }

    return 0;
}