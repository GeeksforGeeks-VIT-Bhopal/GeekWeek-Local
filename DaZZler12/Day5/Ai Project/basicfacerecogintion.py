#Abhirup Bhattacharya

import  cv2
import numpy as np
import face_recognition


imgElon = face_recognition.load_image_file('GIVE THE 1st IMAGE FILE PATH')
imgElon = cv2.cvtColor(imgElon,cv2.COLOR_BGR2RGB) #here we are converting color


imgTest = face_recognition.load_image_file('GIVE THE 2nd IMAGE FILE PATH')
imgTest = cv2.cvtColor(imgTest,cv2.COLOR_BGR2RGB)


faceLoc = face_recognition.face_locations(imgElon)[0]
# now we going to encode the face detected
encodeElon = face_recognition.face_encodings(imgElon)[0]
cv2.rectangle(imgElon,(faceLoc[3],faceLoc[0]),(faceLoc[1],faceLoc[2]),(255,0,255),2)



faceLocTest = face_recognition.face_locations(imgTest)[0]
# now we going to encode the test face
encodeTest = face_recognition.face_encodings(imgTest)[0]
cv2.rectangle(imgTest,(faceLocTest[3],faceLocTest[0]),(faceLocTest[1],faceLocTest[2]),(255,0,255),2)





#step2 is finding the faces in our image and finding their encodings so, to do this we will first detect the
#face



# Now in the 3rd step we will compare this faces and finding the distance between them
# Basically we going to compare the 2 encodings of both the faces..
# And in the backend we will use the linearSUM wheather they are matching or not.


results = face_recognition.compare_faces([encodeElon],encodeTest)
#print(results) # so this statement will return value as "[TRUE]" i.e uthey are same persons



#But sometimes we may have lot of images and there can be similarities
#so what we can do is to find hoe similar this images are , i.e we might want to find the best match
#to do that we will find the distances

faceDis = face_recognition.face_distance([encodeElon],encodeTest)
#so noe lower the distance the better the match is
print(results , faceDis)

cv2.putText(imgTest,f'{results} {round(faceDis[0],2)}',(50,50),cv2.FONT_HERSHEY_COMPLEX_SMALL,1,(0,0,255),2)



cv2.imshow('name of iamge file 1',imgElon)
cv2.imshow('name of image file 2',imgTest)
cv2.waitKey(0)
