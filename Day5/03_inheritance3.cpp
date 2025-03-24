#include <iostream>
using namespace std;
/* 
	��Ӱ��迡�� �̴ϼȶ����� ����ϱ�
*/

class Car {
private:
	int gasolineGauge;
public:
	Car(int ag) : gasolineGauge(ag){}			// �ݷ� �ʱ�ȭ
	int getGasGauge() { return gasolineGauge; }
};
class HybridCar : public Car {
private:
	int electricGauge;
public:
	HybridCar(int ag, int ae) :Car(ag), electricGauge(ae) {}
	int getElecGauge() { return electricGauge; }
};
class HybridWaterCar : HybridCar {
	int waterGauge;
public:
	HybridWaterCar(int ag, int ae, int aw) : HybridCar(ag, ae), waterGauge(aw) {}
	void showGauge() {
		cout << "�ܿ� ���ָ�: " << getGasGauge() << endl;
		cout << "�ܿ� ���ⷮ: " << getElecGauge() << endl;
		cout << "�ܿ� ���ͷ�: " << waterGauge << endl;
	} 
};
int main() {

	HybridWaterCar hwc(10, 20, 30);
	hwc.showGauge();

	return 0;
}