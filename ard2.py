import serial
import  cv2 
import  HandTrackingModule as htm
import time
data = serial.Serial('com4',115200) # Create an object from a Serial Module
time.sleep(2)
# Start of The algotrithm of the Hand Detection 
cap = cv2.VideoCapture(0)
cap.set(3,600)
cap.set(4,600)
detector=htm.FindHands()
while True  : 
    ret,frame=cap.read()
    l= []
    indx= [8,12,16,20] 
    try :
        pos=detector.getPosition(frame ,range(21))
        if pos[4][1]>=pos[3][1]  : 
            l.append(0) 
        else : 
            l.append(1)
            
        for i in range(0,4)  : 
            if pos[indx[i]][1]>=pos[indx[i]-2][1]  :
                l.append(0)
            else : 
                l.append(1)
    except  :
        pass
    
    cnt=l.count(1)
    cv2.putText(frame , f'The count is  : {cnt}' ,(200,450) ,cv2.FONT_HERSHEY_PLAIN,3,(266,100,0),3)
    cv2.imshow('Frame',frame)
    # End of The Algorithm of Hand Detection
    cmd=str(cnt)+'''\r'''  #Preparing to send to Arduino
    data.write(cmd.encode()) # Send To Arduino
    if cv2.waitKey(1)==27  :
        break
cv2.destroyAllWindows()
cap.release()
