echo on

%Брвы%
devenv %EXAM_CROSS_PATH%\exam_cross\exam_cross.sln  /build "Debug|x86"  /project example3>> exam_cross.txt
devenv %EXAM_CROSS_PATH%\exam_cross\exam_cross.sln  /build "Debug|x86"  /project example4>> exam_cross.txt