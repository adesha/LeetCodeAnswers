class ParkingSystem {
public:
   int temp[3];
    ParkingSystem(int big, int medium, int small) {
        temp[0]=big;
        temp[1]=medium;
        temp[2]=small;
    }
    
    bool addCar(int carType) {
        if(temp[carType-1]>=1)
        {
            temp[carType-1]--;
            return 1;
        }
        return 0;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */